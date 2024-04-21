package Pokemon

import java.util.Scanner;

public class Nazva_Dlia_Pokemona {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str1 = scan.nextLine();
        String str2 = scan.nextLine();
        int str1len = str1.length();
        int str2len = str2.length();
        boolean flag = false;
        int counter = 0;
        for(int i=0; i<str1len-str2len+1; i++)
        {
            counter=0;
            String temp = str1.substring(i, i+str2len);
            for(int j=0; j<str2len; j++)
                if(temp.charAt(j)=='?'||str2.charAt(j)==temp.charAt(j))
                    counter++;
            if(counter==str2len)
                flag = true;
        }
        if(flag)
            System.out.println("YES");
        else
            System.out.println("NO");
        return;
    }
}
