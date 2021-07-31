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

    // Complete the bonAppetit function below.
    static void bonAppetit(int[] bill, int k, int b) {
        int sum =0;
        for (Integer i : bill){
            sum += i;
        }
        int correct = (sum - bill[k])/2;

        System.out.println(correct == b ? "Bon Appetit":(b-correct) );


    }

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        String line = scan.nextLine();
        String[] temp = new String[2];
        temp = line.split(" ");
        int n = Integer.parseInt(temp[0]);
        int k = Integer.parseInt(temp[1]);

        int[] bill = new int[n];
        for (int i=0;i<n;i++){
            bill[i]=scan.nextInt();
        }
        int b = scan.nextInt();
        bonAppetit(bill, k, b);

    
    }
}
