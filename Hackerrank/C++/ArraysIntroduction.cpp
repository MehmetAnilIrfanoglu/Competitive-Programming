#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for (int i=0;i<n;i++){
        
        cin >> temp;
        arr[i] = temp;
    }
    
    for (int i=n-1;0<=i;i--){
        cout << arr[i] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
