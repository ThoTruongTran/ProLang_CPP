#include<bits/stdc++.h>

using namespace std;

/*
Kiểu dữ liệu và biến trong C++
- Kiểu dữ liệu cơ bản:
    int, long long, float, double, char, bool

- Lưu ý:
    - Kiểu dữ liệu int thường dùng cho số nguyên.
    - Kiểu long long dùng cho số nguyên lớn.
    - Kiểu float và double dùng cho số thực, double có độ chính xác cao hơn.
    - Kiểu char dùng cho ký tự đơn.
    - Kiểu bool dùng cho giá trị đúng/sai (true/false).

- Biến:
    Biến là tên đại diện cho một vùng nhớ, có thể lưu trữ giá trị.
    
- Quy tắc đặt tên biến:
    - Tên biến phải ngắn gọn, dễ hiểu và phản ánh đúng nội dung
    - Tên biến phải bắt đầu bằng chữ cái hoặc dấu gạch dưới (_), không được bắt đầu bằng số.
    - Tên biến có thể chứa chữ cái, số và dấu gạch dưới.
    - Tên biến phân biệt chữ hoa chữ thường.

- Cách khai báo biến:
    <kiểu_dữ_liệu> <tên_biến>;

- Ví dụ:
    int a = 77;
    long long b = 2000000000;
    float c = 2.247;
    double d = 456.55519159694;
    char e = '$';
    bool ko = false;
*/

int main(){
    int a = 77;
    long long b = 2000000000;
    float c = 3.14;
    double d = 2.718281828459045;
    char e = '@';
    bool ok = true;

    cout << "Integer: " << a << endl;
    cout << "Long Long: " << b << endl;
    cout << "Float: " << c << endl;
    cout << "Double: " << d << endl;
    cout << "Character: " << e << endl;
    cout << "Boolean: " << ok << endl;
    
    return 0;
}