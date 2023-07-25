#include <iostream>
using namespace std;

double tienInternet(int a, int b) {
    const double gia1 = 400;  
    const double gia2 = 350;  
    const double gia3 = 300; 

    const int giamgianguong1 = 6; 
    const int giamgianguong2 = 4; 
	const int giamgianguong3 = 7;
	
    const double giamgia1 = 0.1; 
    const double giamgia2 = 0.12;
    const double giamgia3 = 0.15; 

    double Tong = 0.0;
    
    int c = (b >= a) ? (b - a) : (b + 24 - a);

    if (a >= 7 && b <= 17) {
        Tong = gia1 * c;
        if (c > giamgianguong1) {
            Tong *= (1 - giamgia1);
        }
    } else if (a >= 17 || b <= 7) {
        Tong = gia2 * c;
        if (c > giamgianguong2) {
            Tong *= (1 - giamgia2);
        }
    } else {
        Tong = gia3 * c;
        if (c > giamgianguong3) {
            Tong *= (1 - giamgia3);
        }
    }
    return Tong;
}
int main() {
    int a, b;

    cout << "Nhap gio bat dau truy cap : ";
    cin >> a;
    cout << "Nhap gio ket thuc truy cap : ";
    cin >> b;

    double Tong = tienInternet(a, b);

    cout << "Cuoc truy cap Internet: " << Tong << " dong " << endl;

    return 0;
}
