#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum = 1ll * n * (n + 1) * (2 * n + 1) / 6; // Sử dụng công thức tổng của bình phương số tự nhiên
    cout << sum << endl;
    return 0;
}