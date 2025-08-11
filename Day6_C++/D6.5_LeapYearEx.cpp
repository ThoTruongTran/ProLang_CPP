#include<iostream>

using namespace std;

int main(){
    int year;
    cin >> year;
    if(year <= 0){
        cout << "INVALID" << endl;
    }
    else{
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            cout << "YES" << endl; // Leap year
        }
        else{
            cout << "NO" << endl; // Not a leap year
        }
    }
    return 0;
}
