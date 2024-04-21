package ku_kyu;

import java.util.Scanner;

public class ku_kyu {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str1 = scan.nextLine();
        String str2 = scan.nextLine();
        int counter = 0;
        if(str1.charAt(str1.length()-2)=='y')
            counter++;
        if(str2.charAt(str2.length()-2)=='y')
            counter++;
        for(int i=1; i<str1.length(); i+=2){
            if(str1.charAt(i)=='u'){
                System.out.print("ku");
            }
        }
        for(int i=1; i<str2.length(); i+=2){
            if(str2.charAt(i)=='u'){
                System.out.print("ku");
            }
        }
        switch (counter){
            case 0:
                break;
            case 1:
                System.out.print("kyu");
                break;
            case 2:
                System.out.print("ku");
                break;
        }
        return;
    }
}
