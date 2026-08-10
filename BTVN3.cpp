#include <iostream>
using namespace std;

int main() {
    int tuoi;
    double thuNhap;

    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cout << "Nhap thu nhap: ";
    cin >> thuNhap;

    cout << ((tuoi >= 18) && (thuNhap >= 5000000)) << endl;

    return 0;
}