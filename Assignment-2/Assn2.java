//author: Sotheanith Sok
//Import
import java.io.*;
import java.util.Scanner;
public class Assn2{
    public static void main(String[] args) {
        try{
            //Open file
            File dir =new File("./" + args[0]);

            //Create scanner
            Scanner sc=new Scanner(dir);

            //Define regex
            String regex="^\\$\\**((0)|(([1-9][0-9]?[0-9]?)(,[0-9][0-9][0-9])*))((\\.[0-9][0-9])*)?$"; // Check for decimal digits after period.

            //Start to read, compare, and prinout 
            while(sc.hasNextLine()){
                String text=sc.nextLine();
                if(text.matches(regex)){
                    System.out.println("Matched: "+text);
                }else{
                    System.out.println("Not Matched: "+text);
                }
            }

            //Close scanner
            sc.close();
        }catch(FileNotFoundException fileNotFoundException){
            System.out.println(fileNotFoundException);
        }
        
    }
}