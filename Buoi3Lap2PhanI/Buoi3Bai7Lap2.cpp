#include <iostream>
using namespace std;

double tienphong(int songaythue, char loaiphong)
{
	double loaiA = 250000;
	double loaiB = 200000;
	double loaiC = 150000;
	
	double giamgia = 0.0;
	
	if (loaiphong == 'A') {
         giamgia = 0.1; 
    } else if (loaiphong == 'B' || loaiphong == 'C') {
        giamgia = 0.08; 
    } else {
        cout << "Loai phong khong hop le!" << endl;
        return 0;
    }
    double Tongsotien = 0.0;
    switch (loaiphong) {
        case 'A':
            Tongsotien = loaiA * songaythue;
            break;
        case 'B':
            Tongsotien = loaiB * songaythue;
            break;
        case 'C':
            Tongsotien = loaiC * songaythue;
            break;
    }

    
    double giamgiasotien = Tongsotien * giamgia;
    Tongsotien -= giamgiasotien;

    return Tongsotien;
}

int main() {
    char loaiphong;
    int songaythue;

    
    cout << "Nhap loai phong (A, B, C): ";
    loaiphong = cin.get();
    cin.ignore();
    cout << "Nhap so ngay thue: ";
    cin >> songaythue;

   
    double Tongsotien = tienphong(loaiphong, songaythue);

    
    cout << "Tong tien thue phong: " << Tongsotien << " dong" << endl;

    return 0;
}

