#include<iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        if(c == 'z' || c == 'Z'){
            cout << "a" << endl;
        }
        else{
            if(c >= 'A' && c <= 'Z'){
                c += 32;
            }
            ++c;
            cout << c << endl;
        }
    }
    else{
        cout << "INVALID" << endl;
    }
    return 0;
}
