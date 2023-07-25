#include <iostream>
using namespace std;
void countDigitsAndSum(int n, int& count, int& sum) {
    count = 0;
    sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        count++;
        n /= 10;
    }
}

int main() {
    int n;
    cout << "Nhap mot so nguyen duong: ";
    cin >> n;

    int digitCount, digitSum;
    countDigitsAndSum(n, digitCount, digitSum);

    cout << "So luong chu so cua so " << n << " là: " << digitCount << endl;
    cout << "Tong cac chu so cua so " << n << " là: " << digitSum << endl;

    return 0;
}
