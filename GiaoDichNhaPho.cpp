#include "GiaoDichNhaPho.h"
#include <iostream>
using namespace std;

void GiaoDichNhaPho::nhap() {
    GiaoDich::nhap();
    cin.ignore();
    cout << "Dia chi: "; getline(cin, diaChi);
    cout << "Loai nha (cao cap/thuong): "; getline(cin, loaiNha);
}

void GiaoDichNhaPho::xuat() {
    GiaoDich::xuat();
    cout << ", Loai nha: " << loaiNha
         << ", Dia chi: " << diaChi
         << ", Thanh tien: " << tinhThanhTien() << endl;
}

double GiaoDichNhaPho::tinhThanhTien() {
    if (loaiNha == "cao cap") return dienTich * donGia;
    return dienTich * donGia * 0.9;
}
