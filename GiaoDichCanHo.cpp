#include "GiaoDichCanHo.h"
#include <iostream>
using namespace std;

void GiaoDichCanHo::nhap() {
    GiaoDich::nhap();
    cout << "Ma can: "; cin >> maCan;
    cout << "Vi tri tang: "; cin >> viTriTang;
}

void GiaoDichCanHo::xuat() {
    GiaoDich::xuat();
    cout << ", Ma can: " << maCan
         << ", Tang: " << viTriTang
         << ", Thanh tien: " << tinhThanhTien() << endl;
}

double GiaoDichCanHo::tinhThanhTien() {
    if (viTriTang == 1) return dienTich * donGia * 2;
    if (viTriTang >= 15) return dienTich * donGia * 1.2;
    return dienTich * donGia;
}
