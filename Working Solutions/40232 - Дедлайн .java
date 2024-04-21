import java.util.Scanner;

public class Deadline {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        long N = scan. nextLong();
        long Array[] = new long[10];

        long temp = N/7;
        for(int i=0; i<7; i++)
            Array[i]=temp;

        switch (str){
            case "Monday": temp = 0; break;
            case "Tuesday": temp = 1; break;
            case "Wednesday": temp = 2; break;
            case "Thursday": temp = 3; break;
            case "Friday": temp = 4; break;
            case "Saturday": temp = 5; break;
            default: temp = 6; break;
        }
        int n = (int)(N%7);
        while(n!=0)
        {
            if(temp == 7)
            {
                temp = 0;
            }
            Array[(int)temp]++;
            temp++;
            n--;
        }
        for(int i=0; i<7; i++)
        {
            System.out.print(Array[i] + " ");
        }
        return;
    }
}
