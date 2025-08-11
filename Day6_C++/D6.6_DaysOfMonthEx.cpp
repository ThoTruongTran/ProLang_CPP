#include<iostream>

using namespace std;

int main(){
    int t, n;
    cin >> t >> n;
    if(t <= 0 || n <= 0 || t > 12){
        cout << "INVALID" << endl;
    }
    else{
        if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12){
            cout << "31" << endl; // Months with 31 days
        }
        else if(t == 4 || t == 6 || t == 9 || t == 11){
            cout << "30" << endl; // Months with 30 days
        }
        else{
            if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
                cout << "29" << endl; // February in a leap year
            }
            else{
                cout << "28" << endl; // February in a non-leap year
            }
        }
    }
    return 0;
}