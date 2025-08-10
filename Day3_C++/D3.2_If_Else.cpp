#include<iostream>

using namespace std;

/*
Cấu trúc rẽ nhánh if-else trong C++
- Cấu trúc if-else cho phép bạn thực hiện các hành động khác nhau dựa trên điều kiện.
- Cú pháp cơ bản:
    if (điều kiện) {
        // Thực hiện nếu điều kiện đúng
    } else {
        // Thực hiện nếu điều kiện sai
    }

- Bạn có thể sử dụng nhiều câu lệnh if-else lồng nhau để kiểm tra nhiều điều kiện khác nhau.
- Cũng có thể sử dụng if-else if để kiểm tra nhiều điều kiện một cách tuần tự:
    if (điều kiện 1) {
        // Thực hiện nếu điều kiện 1 đúng
    } else if (điều kiện 2) {
        // Thực hiện nếu điều kiện 2 đúng
    } else if (điều kiện ...) {`
        // Thực hiện nếu điều kiện ... đúng
    } else {
        // Thực hiện nếu tất cả các điều kiện trên đều sai
    }
*/

int main() {
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << n << " là số chẵn." << endl;
    } 
    else {
        cout << n << " là số lẻ." << endl;
    }

    int time;
    cin >> time;
    if(time < 10){
        cout << "Good morning.";
    } 
    else if(time < 20){
        cout << "Good day.";
    } 
    else{
        cout << "Good evening.";
    }
    return 0;
}