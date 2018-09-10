import java.io.*;
import java.util.Scanner;
public class Assn2{
    public static void main(String[] args) {
        try{
            File dir =new File("./" + args[0]);
            Scanner sc=new Scanner(dir);
            String regex="^[$]"+ //Dollar sign
            "[*]*" + //Check for star
            "([0-9]|(([1-9]\\d?\\d?)([,]\\d\\d\\d)*))" + //Check for decimal digits
            "([[.]\\d\\d]*)?$"; // Check for decimal digits after period.
            while(sc.hasNextLine()){
                String text=sc.nextLine();
                if(text.matches(regex)){
                    System.out.println("Matched: "+text);
                }else{
                    System.out.println("Not Matched: "+text);
                }
            }
            sc.close();
        }catch(FileNotFoundException fileNotFoundException){
            System.out.println(fileNotFoundException);
        }
        
    }
}