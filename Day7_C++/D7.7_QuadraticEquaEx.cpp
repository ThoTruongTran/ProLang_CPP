#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == 0){
        if(b == 0 && c == 0){
            cout << "INF\n";
        }
        else if(b == 0 && c != 0){
            cout << "NO\n";
        }
        else{
            cout << fixed << setprecision(2) << (float)-c / b << endl;
        }
    }
    else{
        int delta = b * b - 4 * a * c;
        if(delta < 0){
            cout << "NO\n";
        }
        else if(delta == 0){
            cout << fixed << setprecision(2) << (float)-b / (2 * a) << endl;
        }
        else{
            cout << fixed << setprecision(2) << (float)(-b + sqrt(delta)) / (2 * a) << " " << (float)(-b - sqrt(delta)) / (2 * a) << endl;
        }
    }
    return 0;
}