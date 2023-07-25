#include <iostream>
using namespace std;
void printASCII() {
    int starting_char = 32;
    int ending_char = 127;
    int chars_per_page = 20;

    for (int i = starting_char; i <= ending_char; ++i) {
        char character = static_cast<char>(i);
       cout << character << " - " << i << "\t";
        if ((i - starting_char + 1) % chars_per_page == 0) {
            cout << std::endl;
            cout << "Nhan ENTER de xem tiep: " << endl;
            cin.get();
        }
    }
    cout << std::endl;
}

int main() {
    cout << "BANG MA ASCII" << endl;
    cout << "=============================" << endl;

    printASCII();

    return 0;
}
