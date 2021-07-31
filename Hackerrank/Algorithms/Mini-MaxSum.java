import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the miniMaxSum function below.
    static void miniMaxSum(long[] arr) {
        long max = Long.MIN_VALUE;
        long min = Long.MAX_VALUE;
        for (Long i : arr){
            max = i>max ? i:max;
            min = i<min ? i:min;
        }
        long sum =0;
        for (Long j : arr){
            sum += j;
        }
        long first = sum-max;
        long second = sum-min;
        System.out.printf("%d %d",first,second);


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        long[] arr = new long[5];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < 5; i++) {
            long arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        miniMaxSum(arr);

        scanner.close();
    }
}
