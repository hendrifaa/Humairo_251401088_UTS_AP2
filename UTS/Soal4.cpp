#include <iostream>
using namespace std;

int main() {
    string mantra;
    getline(cin, mantra);

    int jumlahVokal = 0;
    int i = 0;

    while (i < mantra.length()) {
        char c = mantra[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            jumlahVokal++;
        }

        i++;
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal.";
    }

    return 0;
}