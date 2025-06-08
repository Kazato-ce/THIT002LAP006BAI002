#include <iostream>
#include <vector>
#include <iomanip>
#include "GiaoDichDat.h"
#include "GiaoDichNhaPho.h"
#include "GiaoDichCanHo.h"
using namespace std;

int main() {
    vector<GiaoDich*> ds;
    int n;
    cout << "Nhap so giao dich: "; cin >> n;

    for (int i = 0; i < n; ++i) {
        int loai;
        cout << "\n1. Dat | 2. Nha pho | 3. Can ho. Chon: "; cin >> loai;
        GiaoDich* gd = nullptr;

        if (loai == 1) gd = new GiaoDichDat();
        else if (loai == 2) gd = new GiaoDichNhaPho();
        else if (loai == 3) gd = new GiaoDichCanHo();

        if (gd) {
            gd->nhap();
            ds.push_back(gd);
        }
    }

    int cDat = 0, cNha = 0, cCanHo = 0;
    double tongCH = 0;
    int demCH = 0;
    double maxNha = 0;
    GiaoDichNhaPho* gdMax = nullptr;

    cout << "\n--- Giao dich thang 12/2024 ---\n";
    for (auto gd : ds) {
        if (dynamic_cast<GiaoDichDat*>(gd)) cDat++;
        else if (auto nha = dynamic_cast<GiaoDichNhaPho*>(gd)) {
            cNha++;
            double tt = nha->tinhThanhTien();
            if (tt > maxNha) {
                maxNha = tt;
                gdMax = nha;
            }
        }
        else if (auto ch = dynamic_cast<GiaoDichCanHo*>(gd)) {
            cCanHo++;
            tongCH += ch->tinhThanhTien();
            demCH++;
        }

        if (gd->getNgayGD().find("/12/2024") != string::npos) {
            gd->xuat();
        }
    }

    cout << "\nSo GD dat: " << cDat;
    cout << "\nSo GD nha pho: " << cNha;
    cout << "\nSo GD can ho: " << cCanHo;

    if (demCH) {
        cout << "\nTrung binh tien can ho: " << fixed << setprecision(2)
             << (tongCH / demCH);
    }

    if (gdMax) {
        cout << "\n\nNha pho co thanh tien cao nhat:\n";
        gdMax->xuat();
    }

    for (auto gd : ds) delete gd;
    return 0;
}
