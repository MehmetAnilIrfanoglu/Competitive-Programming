#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char first;
    char second[100];
    char third[100];
    
    scanf("%c",&first);
    scanf("\n");
    scanf("%[^\n]%*c",&second);
    scanf("\n");
    scanf("%[^\n]%*c",&third);
    
    printf("%c\n%s\n%s",first,second,third);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
