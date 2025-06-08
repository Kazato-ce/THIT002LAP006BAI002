#include "GiaoDich.h"
#include <iostream>
using namespace std;

void GiaoDich::nhap() {
    cout << "Ma GD: "; cin >> maGD;
    cout << "Ngay GD (dd/mm/yyyy): "; cin >> ngayGD;
    cout << "Don gia: "; cin >> donGia;
    cout << "Dien tich: "; cin >> dienTich;
}

void GiaoDich::xuat() {
    cout << "Ma: " << maGD << ", Ngay: " << ngayGD
         << ", Don gia: " << donGia << ", Dien tich: " << dienTich;
}

string GiaoDich::getNgayGD() const {
    return ngayGD;
}
