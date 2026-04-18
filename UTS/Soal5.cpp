#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, input);

    int i = 0, count = 0;
    bool inWord = false;

    while (i < input.length()) {
        if (input[i] != ' ') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
        i++;
    }

    cout << "Jumlah judul buku: " << count << endl;
    return 0;
}