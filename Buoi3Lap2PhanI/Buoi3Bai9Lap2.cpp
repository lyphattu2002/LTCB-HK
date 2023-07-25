#include <iostream>
using namespace std;

double tinhTienTaxi(int soKm) {
    const int giaKmDau = 15000;
    const int giaTuKm2Den5 = 13500;
    const int giaTuKm6TroDi = 11000;
    const int gioiHanGiamGia = 120;
    const double tiLeGiamGia = 0.1;

    double tongTien = 0.0;

    if (soKm <= 1) {
        tongTien = soKm * giaKmDau;
    } else if (soKm <= 5) {
        tongTien = giaKmDau + (soKm - 1) * giaTuKm2Den5;
    } else {
        tongTien = giaKmDau + 4 * giaTuKm2Den5 + (soKm - 5) * giaTuKm6TroDi;
    }

    
    if (soKm > gioiHanGiamGia) {
        double giamGia = tongTien * tiLeGiamGia;
        tongTien -= giamGia;
    }

    return tongTien;
}

int main() {
    int soKm;

    cout << "Nhap so km da di: ";
    cin >> soKm;

    if (soKm <= 0) {
        cout << "So km khong hop le!" << endl;
    } else {
        double tongTien = tinhTienTaxi(soKm);
        cout << "Tong tien taxi: " << tongTien << " dong" << endl;
    }

    return 0;
}
