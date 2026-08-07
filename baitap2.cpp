#include <iostream>
#include <string>
using namespace std;

int main() {
    string hoTen, lopHoc;
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap lop hoc: ";
    getline(cin, lopHoc);
    cout << "Xin chao, " << hoTen << ", lop " << lopHoc << "!" << endl;

    return 0;
}