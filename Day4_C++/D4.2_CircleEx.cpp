#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int r;
    cin >> r;
    double cv = 2 * 3.14 * r;
    double dt = r * r * 3.14;
    cout << fixed << setprecision(2) << cv << " " << dt << endl;
    return 0;
}