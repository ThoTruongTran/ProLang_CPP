#include<bits/stdc++.h>

using namespace std;

/* 
Nhập xuất dữ liệu trong C++
- Sử dụng các hàm nhập xuất cơ bản:
    - `cin` để nhập dữ liệu từ bàn phím.
    - `cout` để xuất dữ liệu ra màn hình.

- Cách sử dụng:
    - Để nhập một giá trị: `cin >> variable;`
    - Để xuất một giá trị: `cout << variable;`

- Ví dụ:
    int x;
    cout << "Nhập một số nguyên: ";
    cin >> x;
    cout << "Số bạn vừa nhập là: " << x << endl;

- Lưu ý:
    - Đảm bảo nhập đúng kiểu dữ liệu để tránh lỗi.
    - Có thể sử dụng `endl` để xuống dòng sau khi xuất dữ liệu.
    - \n cũng có thể dùng để xuống dòng.

- In độ chính xác của số thực:
    - Sử dụng `fixed` và `setprecision(n)` để in số thực với n chữ số thập phân.
    - Ví dụ: `cout << fixed << setprecision(2) << 3.14159;` sẽ in ra 3.14.
*/
int main(){
    float r;
    cout << "Nhập bán kính hình tròn: ";
    cin >> r;
    float area = 3.14 * r * r;
    cout << "Diện tích hình tròn có bán kính " << r << " là: " << area << endl;

    int a, b;
    cout << "Nhập hai số nguyên a và b: ";
    cin >> a >> b;
    cout << "Tổng của hai số " << a << " và " << b << " là: " << a + b << endl;
    
    double pi = 3.14159265358979323846;
    cout << "Giá trị của pi với 5 chữ số thập phân là: " << fixed << setprecision(5) << pi << endl;

    return 0;
}