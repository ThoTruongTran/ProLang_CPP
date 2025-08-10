#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

/*
Ham toán học trong C++
- C++ cung cấp một số hàm toán học cơ bản trong thư viện <cmath>
    abs(): Hàm trả về giá trị tuyệt đối của một số nguyên.
    sqrt(): Hàm trả về căn bậc hai của một số.
    pow(): Hàm trả về giá trị của một số mũ.
    cbrt(): Hàm trả về căn bậc ba của một số.
    max(): Hàm trả về giá trị lớn nhất trong hai số.
    min(): Hàm trả về giá trị nhỏ nhất trong hai số.
    round(): Hàm làm tròn số đến số nguyên gần nhất.
    ceil(): Hàm làm tròn số lên đến số nguyên gần nhất.
    floor(): Hàm làm tròn số xuống đến số nguyên gần nhất.
    max({a, b, c}): Hàm trả về giá trị lớn nhất trong một danh sách các số.
    min({a, b, c}): Hàm trả về giá trị nhỏ nhất trong một danh sách các số.

-Note: Để sử dụng các hàm này, bạn cần bao gồm thư viện <cmath> và <algorithm> trong chương trình của mình.
*/
int main(){
    int a, b , c;
    cin >> a >> b >> c;
    cout << abs(a) << endl; 
    cout << sqrt(b) << endl; 
    cout << pow(a, 2) << endl;    
    cout << cbrt(c) << endl; 
    cout << max(a, b) << endl; 
    cout << min(a, b) << endl; 
    cout << round(3.6) << endl; 
    cout << ceil(3.2) << endl; 
    cout << floor(3.8) << endl; 
    cout << max({a, b, c}) << endl; 
    cout << min({a, b, c}) << endl; 
    return 0;
}