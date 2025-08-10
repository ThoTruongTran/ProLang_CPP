#include<iostream>

using namespace std;
/*
Cấu trúc rẽ nhánh switch-case trong C++
- Cấu trúc switch-case cho phép bạn kiểm tra một biến với nhiều giá trị khác nhau.
- Cú pháp cơ bản:
    switch (biến) {
        case giá trị_1:
            // Thực hiện nếu biến bằng giá trị_1
            break;
        case giá trị_2:
            // Thực hiện nếu biến bằng giá trị_2
            break;
        ...
        default:
            // Thực hiện nếu không có giá trị nào khớp
    }
- Mỗi case phải kết thúc bằng câu lệnh break để tránh rơi vào case tiếp theo.
- Nếu không có case nào khớp, câu lệnh default sẽ được thực hiện.
*/
int main(){
    int day;
    cout << "Nhập số ngày trong tuần (1-7): ";
    cin >> day;
    switch(day) {
        case 1:
            cout << "Chủ Nhật" << endl;
            break;
        case 2:
            cout << "Thứ Hai" << endl;
            break;
        case 3:
            cout << "Thứ Ba" << endl;
            break;
        case 4:
            cout << "Thứ Tư" << endl;
            break;
        case 5:
            cout << "Thứ Năm" << endl;
            break;
        case 6:
            cout << "Thứ Sáu" << endl;
            break;
        case 7:
            cout << "Thứ Bảy" << endl;
            break;
        default:
            cout << "Số ngày không hợp lệ. Vui lòng nhập từ 1 đến 7." << endl;
    }

    int month;
    cout << "Nhập số tháng trong năm (1-12): ";
    cin >> month;
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Tháng có 31 ngày." << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "Tháng có 30 ngày." << endl;
            break;
        case 2:
            cout << "Tháng có 28 hoặc 29 ngày." << endl;
            break;
        default:
            cout << "Số tháng không hợp lệ. Vui lòng nhập từ 1 đến 12." << endl;
    }

    return 0;
}