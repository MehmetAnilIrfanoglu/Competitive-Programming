#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for (int i=a;a<=b;a++){
          if (a==1)printf("one");
    else if (a==2)printf("two");
    else if (a==3)printf("three");
    else if (a==4)printf("four");
    else if (a==5)printf("five");
    else if (a==6)printf("six");
    else if (a==7)printf("seven");
    else if (a==8)printf("eight");
    else if (a==9)printf("nine");
    else if (9<a && a%2==0)printf("even");
        else if (9<a && a%2==1)printf("odd");
        printf("\n");

      }

    return 0;
}

