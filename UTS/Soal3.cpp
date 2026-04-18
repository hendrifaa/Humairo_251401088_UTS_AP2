#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;
    string mk1 = "Algoritma dan Pemrograman";
    string mk2 = "Probabilitas dan Statistika";
    string mk3 = "Sistem Operasi";

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    cin >> nim;

    cout << "Nilai " << mk1 << ": ";
    cin >> nilai1;
    cout << "Nilai " << mk2 << ": ";
    cin >> nilai2;
    cout << "Nilai " << mk3 << ": ";
    cin >> nilai3;

    cout << "\nHasil:\n";

    cout << mk1 << ": ";
    if (nilai1 >= 60)
        cout << "Lulus.\n";
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";

    cout << mk2 << ": ";
    if (nilai2 >= 60)
        cout << "Lulus.\n";
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";

    cout << mk3 << ": ";
    if (nilai3 >= 60)
        cout << "Lulus.\n";
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";

    int rata = (nilai1 + nilai2 + nilai3) / 3;
    cout << "Nilai Rata-rata Semester ini: " << rata << endl;

    return 0;
}