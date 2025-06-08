#ifndef GIAODICHDAT_H
#define GIAODICHDAT_H

#include "GiaoDich.h"

class GiaoDichDat : public GiaoDich {
    string loaiDat; // A, B, C
public:
    void nhap() override;
    void xuat() override;
    double tinhThanhTien() override;
};

#endif
