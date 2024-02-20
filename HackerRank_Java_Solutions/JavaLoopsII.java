import java.util.*;
import java.io.*;
/*
 * @author: Karlo Siric
 */

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt(); 
            int n = in.nextInt();
        int s0 = a + b; 
        int result;
        for(int j = 1; j < n; j++) {
            // result += (Math.pow(2,j) * b);
            int power = (int) Math.pow(2, j) * b;
            result = s0 + power;
            s0 = result;
            System.out.print(result + " ");
        }

            System.out.println();

            

        }
        in.close();
    }
}