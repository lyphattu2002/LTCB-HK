#include <iostream>
using namespace std;
bool namnhuan(int nam) {
    return (nam % 400 == 0) || ((nam % 100 != 0) && (nam % 4 == 0));
}
bool namhople(int ngay, int thang, int nam) {
    if (thang < 1 || thang > 12)
        return false;

    int ngaytrongthang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    
    if (thang == 2 && namnhuan(nam))
        ngaytrongthang[1] = 29;

    return (ngay >= 1 && ngay <= ngaytrongthang[thang - 1]);
}
int getngaytrongthang(int thang, int nam) {
    int ngaytrongthang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (thang == 2 && namnhuan(nam))
        ngaytrongthang[1] = 29;
    return ngaytrongthang[thang - 1];
}


void ngaytieptheo(int& ngay, int& thang, int& nam) {
    int ngaytrongthang = getngaytrongthang(thang, nam);

    ngay++;
    if (ngay > ngaytrongthang) {
        ngay = 1;
        thang++;
        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }
}


void getngayhomqua(int& ngay, int& thang, int& nam) {
    ngay--;
    if (ngay < 1) {
        thang--;
        if (thang < 1) {
            thang = 12;
            nam--;
        }
       	ngay = getngaytrongthang(thang, nam);
    }
}

int main() {
    int ngay;
    int thang;
    int nam;

    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;

    if (namhople(ngay, thang, nam)) {
        cout << "Ngay hop le." << endl;
        cout << "Thang " << thang << " co " << getngaytrongthang(thang, nam) << " ngay." << endl;

        
        int ngayhomsau = ngay, thangsau = thang, namsau = nam;
        ngaytieptheo(ngayhomsau, thangsau, namsau);
        cout << "Ngay hom sau la: " << ngayhomsau << "/" << thangsau << "/" << namsau << endl;

        
        int ngayhomqua = ngay, thangtruoc = thang, namtruoc = nam;
        getngayhomqua(ngayhomqua, thangtruoc, namtruoc);
        cout << "Ngay hom truoc la: " << ngayhomqua << "/" << thangtruoc << "/" << namtruoc << endl;
    } else {
        cout << "Ngay khong hop le!" << endl;
    }

    return 0;
}
