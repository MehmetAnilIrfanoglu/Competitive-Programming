import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the staircase function below.
    static void staircase(int n) {
        char h = '#';
        char s = ' ';

        for (int i=(n-1);i>0;i--){
            for (int j=0;j<i;j++){
                System.out.print(s);
            }
            for (int k = 0; k<(n-i);k++){
                System.out.print(h);
            }
            System.out.println();
            
        
        }
        for (int f =0; f<n;f++){
            System.out.print(h);
        }

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        staircase(n);

        scanner.close();
    }
}
