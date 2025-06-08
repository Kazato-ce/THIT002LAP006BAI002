#include "GiaoDichDat.h"
#include <iostream>
using namespace std;

void GiaoDichDat::nhap() {
    GiaoDich::nhap();
    cout << "Loai dat (A/B/C): "; cin >> loaiDat;
}

void GiaoDichDat::xuat() {
    GiaoDich::xuat();
    cout << ", Loai dat: " << loaiDat
         << ", Thanh tien: " << tinhThanhTien() << endl;
}

double GiaoDichDat::tinhThanhTien() {
    if (loaiDat == "A") return dienTich * donGia * 1.5;
    return dienTich * donGia;
}
