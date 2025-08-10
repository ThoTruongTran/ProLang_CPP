#include<bits/stdc++.h>

using namespace std;

int main(){
    // Toán tử tăng giảm (Increment and Decrement Operators)
    // Toán tử tăng (Increment Operator)
    int a = 10;
    int b = a++;
    cout << a << " " << b << endl;

    int c = 10;
    int d = ++c;
    cout << c << " " << d << endl;
    // Toán tử giảm (Decrement Operator)
    int e = 10;
    int f = e--;
    cout << e << " " << f << endl;

    int g = 10;
    int h = --g;
    cout << g << " " << h << endl;

    // Toán tử so sánh (Comparison Operators)
    int x = 5, y = 10;
    cout << "x == y: " << (x == y) << endl; // Bằng
    cout << "x != y: " << (x != y) << endl; // Không bằng
    cout << "x > y: " << (x > y) << endl; // Lớn hơn
    cout << "x < y: " << (x < y) << endl; // Nhỏ hơn
    cout << "x >= y: " << (x >= y) << endl; // Lớn hơn hoặc bằng
    cout << "x <= y: " << (x <= y) << endl; // Nhỏ hơn hoặc bằng

    // Toán tử logic (Logical Operators)
    bool p = true, q = false;
    cout << "p && q: " << (p && q) << endl; // AND
    cout << "p || q: " << (p || q) << endl; // OR
    cout << "!p: " << (!p) << endl; // NOT
    return 0;
}