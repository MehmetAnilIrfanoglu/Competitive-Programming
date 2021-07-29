#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int result;
    if (b<=a && c<=a && d<=a)result =a;
    if (a<=b && c<=b && d<=b)result =b;
    if (b<=c && a<=c && d<=c)result = c;
    if (b<=d && c<=d && a<=d)result = d;
    return result;
    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
