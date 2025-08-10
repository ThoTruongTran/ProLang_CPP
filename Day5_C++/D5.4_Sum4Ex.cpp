#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum = 1ll * n * (n + 1); // Sử dụng công thức tổng chẵn của dãy số tự nhiên
    cout << sum << endl;
    return 0;
}