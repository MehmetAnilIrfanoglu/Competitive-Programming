#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int modul = 10;
    scanf("%d", &n);
    int sum =0;
    while (n!=0) {
    int temp = n%modul;
    sum += temp/(modul/10);
    n -= temp;
    modul *= 10;
    
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
