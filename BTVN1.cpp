#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 15, c = 7;   // khai bao 3 bien tren cung 1 dong

    int tong = a + b + c;                  // 32
    double trungBinh = (double)tong / 3;   // ep kieu -> 10.6667

    cout << "Tong: " << tong << endl;
    cout << "Trung binh: " << trungBinh << endl;

    return 0;
}