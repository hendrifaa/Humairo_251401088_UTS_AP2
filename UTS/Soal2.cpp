#include <iostream>
using namespace std;

int main() {
    int biner;
    cin >> biner;

    int temp = biner;
    int desimal = 0;
    int pangkat = 1;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != 0 && digit != 1) {
            cout << "pesan rusak!";
            return 0;
        }

        desimal += digit * pangkat;
        pangkat *= 2;
        temp /= 10;
    }

    cout << desimal;

    return 0;
}