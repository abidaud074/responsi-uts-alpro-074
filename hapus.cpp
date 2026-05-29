#include <iostream>
#include "data.h"
#include "hapus.h"

using namespace std;

void hapus(){

    int nomor;

    cout << "\nMasukkan nomor tugas yang dihapus : ";
    cin >> nomor;

    nomor--;

    for(int i = nomor; i < jumlah - 1; i++){
        tugas[i] = tugas[i + 1];
    }

    jumlah--;

    cout << "Tugas berhasil dihapus!\n";
}
