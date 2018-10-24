//Author: Sotheanith

//Import
#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    //Create Matrix
    int **r1= new int *[atoi(*(argv+1))];
    for (int i =0; i< atoi(*(argv+1));i++){
        *(r1+i)=new int*[atoi(*(argv+2))];
    }
    int **r2= new int *[atoi(*(argv+3))];
    for (int i =0; i< atoi(*(argv+3));i++){
        *(r2+i)=new int *[atoi(*(argv+4))];
    }
    //Populate matrix
    for (int i =1; i<= atoi(*(argv+1))+atoi(*(argv+2)); i++){

    }



    return 0;
}