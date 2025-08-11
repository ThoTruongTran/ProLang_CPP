#include<iostream>
/*
ASCII values of lowercase letters are from 97 to 122.
*/
using namespace std;

int main(){
    char c;
    cin >> c;
    if(c >= 'a' && c <= 'z'){
        cout <<  "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
