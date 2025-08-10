#include<bits/stdc++.h>

using namespace std;

/*
Toán tử trong C++
- Toán tử là các ký hiệu dùng để thực hiện các phép toán trên dữ liệu.

- Các loại toán tử cơ bản:
    - Toán tử số học: +, -, *, /, %
    - Toán tử so sánh: ==, !=, >, <, >=, <=
    - Toán tử logic: &&, ||, !
    - Toán tử gán: =, +=, -=, *=, /=, %=
    - Toán tử tăng giảm: ++, --

- Lưu ý: Khi gán cho kí tự, ta cho kí tự trong dấu nháy đơn, ví dụ: char c = 'A';

*/
int main(){
    // Toán tử gán (Assignment Operator)
    int a = 10, b = 20;
    b = a;
    cout << "Giá trị của b sau khi gán từ a: " << b << endl;
    
    a += 5; // Tương đương với a = a + 5
    a -= 3; // Tương đương với a = a - 3
    a *= 2; // Tương đương với a = a * 2
    a /= 4; // Tương đương với a = a / 4
    a %= 3; // Tương đương với a = a % 3
    cout << "Giá trị của a sau các phép gán: " << a << endl;
    
    // Toán tử số học (Arithmetic Operators)
    int m, n;
    cin >> m >> n;
    int sum = m + n;
    int diff = m - n;   
    int product = m * n;
    float quotient = (float)m / n;
    int remainder = m % n;

    cout << "Tổng: " << sum << endl;
    cout << "Hiệu: " << diff << endl;
    cout << "Tích: " << product << endl;
    cout << "Thương: " << quotient << endl;
    cout << "Phần dư: " << remainder << endl;
    return 0;
}