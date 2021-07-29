#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream numbers(str);
    int a , b,c;
    char coma;
    vector<int> result;
    while(numbers >> a) {      
    result.push_back(a);
    numbers >> coma;          
}
return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
