#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string first , second;
    int siz1,siz2;
    char a , b;
    
    cin >> first >> second;
    
    cout << first.size() << " " << second.size() << endl;
    cout << first + second << endl;
    a = first[0];
    b = second[0];
    first[0] = b;
    second[0] = a;
    cout << first << " " << second;
    
	// Complete the program
  
    return 0;
}
