#include <iostream>
#include "data.h"
#include "tambah.h"

using namespace std;

void tambah(){

    cin.ignore();

    cout << "\n=== Tambah Tugas ===\n";

    cout << "Nama Tugas : ";
    getline(cin, tugas[jumlah].nama);

    cout << "Mata Kuliah : ";
    getline(cin, tugas[jumlah].matkul);

    cout << "Deadline : ";
    getline(cin, tugas[jumlah].deadline);

    tugas[jumlah].status = "Belum Selesai";

    jumlah++;

    cout << "\nTugas berhasil ditambahkan!\n";
}
