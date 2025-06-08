#ifndef GIAODICHCANHO_H
#define GIAODICHCANHO_H

#include "GiaoDich.h"

class GiaoDichCanHo : public GiaoDich {
    string maCan;
    int viTriTang;
public:
    void nhap() override;
    void xuat() override;
    double tinhThanhTien() override;
};

#endif
