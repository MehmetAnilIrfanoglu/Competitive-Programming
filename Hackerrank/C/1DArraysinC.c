#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
    int n,sum=0;
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    for (int i=0;i<n;i++){
     scanf("%d",&arr[i]);
         sum += arr[i];
    }
   
    printf("%i",sum);
    free(arr);

       
    return 0;
}


