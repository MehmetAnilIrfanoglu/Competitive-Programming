#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    if (num%2==0){
        for(int k=0;k<(num/2);k++){
            int temp = arr[k];
            arr[k] = arr[num-1-k] ;
            arr[num-1-k] = temp;
        }
    }
    if (num%2==1){
        for(int k=0;k<((num-1)/2);k++){
            int temp = arr[k];
            arr[k] = arr[num-1-k] ;
            arr[num-1-k] = temp;
        }
    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
