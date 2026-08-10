#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;   // hang so, khong the gan lai
    double banKinh;

    cout << "Nhap ban kinh: ";
    cin >> banKinh;

    double chuVi = 2 * PI * banKinh;
    double dienTich = PI * banKinh * banKinh;

    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;

    return 0;
}