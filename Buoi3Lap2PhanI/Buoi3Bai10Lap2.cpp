#include <iostream>
#include <string>
using namespace std;

double tinhDiemTrungBinh(double diemToan, double diemLy, double diemHoa) {
    return (diemToan + diemLy + diemHoa) / 3;
}

string phanLoaiHocSinh(double diemTrungBinh) {
    if (diemTrungBinh >= 9.0) {
        return "Xuat sac";
    } else if (diemTrungBinh >= 8.0) {
        return "Gioi";
    } else if (diemTrungBinh >= 6.5) {
        return "Kha";
    } else if (diemTrungBinh >= 5.0) {
        return "Trung binh";
    } else if (diemTrungBinh >= 3.0) {
        return "Yeu";
    } else {
        return "Kem";
    }
}

int main() {
    string hoTen;
    double diemToan, diemLy, diemHoa;

    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap diem Toan: ";
    cin >> diemToan;
    cout << "Nhap diem Ly: ";
    cin >> diemLy;
    cout << "Nhap diem Hoa: ";
    cin >> diemHoa;

    double diemTrungBinh = tinhDiemTrungBinh(diemToan, diemLy, diemHoa);
    cout << "Diem trung binh 3 mon: " << diemTrungBinh << endl;

    string xepLoai = phanLoaiHocSinh(diemTrungBinh);
    cout << "Xep loai hoc sinh: " << xepLoai << endl;

    return 0;
}
