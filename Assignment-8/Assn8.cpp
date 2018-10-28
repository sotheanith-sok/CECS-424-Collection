//Author: Sotheanith Sok
//Topic: Matrix mutiplication using pointers.

//imprts
#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    //Get variables from parameters
    //Matrix 1
    const int m1RowCount = atoi(*(argv + 1));
    const int m1ColumnCount = atoi(*(argv + 2));
    //Matrix 2
    const int m2RowCount = atoi(*(argv + 3));
    const int m2ColumnCount = atoi(*(argv + 4));

    //Check if matrix can be computed
    if (m1ColumnCount != m2RowCount)
    {
        cout << "Dimension mismatch!!! Unable to compute the product of a given matrices' size." << endl;
        return 0;
    }

    //Create matrix with parameters
    //Matrix 1
    int **r1 = new int *[m1RowCount];
    for (int i = 0; i < m1RowCount; i++)
    {
        *(r1 + i) = new int[m1ColumnCount];
    }
    //Matrix 2
    int **r2 = new int *[m2RowCount];
    for (int i = 0; i < m2RowCount; i++)
    {
        *(r2 + i) = new int[m2ColumnCount];
    }

    //Populate matrixes with values
    //Matrix 1
    int count = 1;
    for (int i = 0; i < m1RowCount; i++)
    {
        for (int j = 0; j < m1ColumnCount; j++)
        {
            *(*(r1 + i) + j) = count++;
        }
    }
    //Matrix 2
    count = m2RowCount * m2ColumnCount;
    for (int i = 0; i < m2RowCount; i++)
    {
        for (int j = 0; j < m2ColumnCount; j++)
        {
            *(*(r2 + i) + j) = count--;
        }
    }

    //Create a result matrix
    int **r3 = new int *[m1RowCount];
    for (int i = 0; i < m1RowCount; i++)
    {
        *(r3 + i) = new int[m2ColumnCount];
    }

    //Performe matrix calculation
    for (int i = 0; i < m1RowCount; i++)
    {
        for (int j = 0; j < m2ColumnCount; j++)
        {
            int sum = 0;
            for (int k = 0; k < m1ColumnCount; k++)
            {
                sum = sum + ((*(*(r1 + i) + k)) * (*(*(r2 + k) + j)));
            }
            *(*(r3 + i) + j) = sum;
        }
    }

    //Print Results
    //Matrix 1
    cout << "Matrix 1" << endl;
    for (int i = 0; i < m1RowCount; i++)
    {
        for (int j = 0; j < m1ColumnCount; j++)
        {
            printf("%-3d ", *(*(r1 + i) + j));
        }
        cout << "" << endl;
    }
    //Matrix 2
    cout << "Matrix 2" << endl;
    for (int i = 0; i < m2RowCount; i++)
    {
        for (int j = 0; j < m2ColumnCount; j++)
        {
            printf("%-3d ", *(*(r2 + i) + j));
        }
        cout << "" << endl;
    }
    //Matrix 3
    cout << "Matrx 1 * Matrix 2" << endl;
    for (int i = 0; i < m1RowCount; i++)
    {
        for (int j = 0; j < m2ColumnCount; j++)
        {
            printf("%-3d ", *(*(r3 + i) + j));
        }
        cout << "" << endl;
    }
    return 0;
}