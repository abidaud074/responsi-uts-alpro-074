#include <iostream>
#include "data.h"
#include "selesai.h"

using namespace std;

void selesai(){

    int nomor;

    cout << "\nMasukkan nomor tugas selesai : ";
    cin >> nomor;

    nomor--;

    tugas[nomor].status = "Selesai";

    cout << "Tugas selesai!\n";
}
