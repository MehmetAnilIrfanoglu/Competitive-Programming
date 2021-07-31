import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {

    // Complete the compareTriplets function below.
   static void solve(int[] a,int[] b)
        {
            // Complete this function
            int alex=0;
            int bob =0;
        for (int i=0;i<3;i++){
            if (a[i]<b[i]){
                bob++;
            }
            if (b[i]<a[i]){
                alex++;
            }
        }
        System.out.println(alex+" "+bob); 
        }

        public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    String[] temp = new String[3];
    String[] temp1 = new String[3];
    int[] a = new int[3];
    int[] b = new int[3];
    
    
    String line = scan.nextLine();    
    temp=line.split("\\s+");
    
    String line1 = scan.nextLine();    
    temp1=line1.split("\\s+");
    
    for (int i =0;i<3;i++) {
        a[i] = Integer.parseInt(temp[i]);
        b[i] = Integer.parseInt(temp1[i]);
        
    }
    solve(a,b);

}
}
