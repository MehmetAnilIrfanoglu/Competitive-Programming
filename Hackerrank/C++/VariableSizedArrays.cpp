#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int number , query,size,value,position,selection;
    cin >> number >> query;
    vector<vector<int>> total;
    for (int i=0;i<number;i++){
        vector<int> temparr;
        cin >> size;
        for (int i=0;i<size;i++){
        cin >>  value;
        temparr.push_back(value);
        
    }
        total.push_back(temparr);
    }
    
    for (int i=0;i<query;i++){
        cin >> selection >> position;
        cout << total[selection][position] << endl;
    }   
    
    return 0;
}
