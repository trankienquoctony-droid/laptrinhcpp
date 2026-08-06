#include <iostream>
using namespace std;

int main()
{
    string ten, lop, birth, interest, aim; 
    cout<< " Nhap ho va ten: "  ;
    getline(cin, ten);
    cout<< " Nhap lop: ";
    getline (cin,lop);
    cout<< " Nhap ngay thang nam sinh: ";
    getline (cin,birth);
    cout<< " Nhap so thich: ";
    getline (cin,interest);
    cout<< " Nhap muc tieu: ";
    getline (cin,aim);
    ////////////////////////////////////////////////
    cout<< "-------------------------------"<<  endl;
    cout<< "Ho ten: " << ten << endl;
    cout<< "Lop: " << lop << endl;
    cout<< "Ngay thang nam sinh: " << birth << endl;
    cout<< "So thich cua may: " << interest << endl;
    cout<< "Muc tieu cua may la: "<< aim << endl;
    cout<< "-------------------------------"<<  endl;
    return 0 ;
}