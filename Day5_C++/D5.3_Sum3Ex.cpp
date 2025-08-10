#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    float sum = 1 - 1.0 / (n + 1); // Sử dụng công thức tổng của dãy số nghịch đảo
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}