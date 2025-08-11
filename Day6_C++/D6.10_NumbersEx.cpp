#include<iostream>
/*
ASCII values of digits are from 48 to 57.
*/
using namespace std;

int main(){
    char c;
    cin >> c;
    if(c >= '0' && c <= '9')
        cout << "YES";
    else
        cout << "NO";
    return 0;
}