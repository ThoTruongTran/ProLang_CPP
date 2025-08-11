#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int year = n / 365;
    n %= 365;
    int month = n / 30;
    n %= 30;
    int day = n;
    cout << year << " " << month << " " << day << endl;
    return 0;
}