#include <iostream>
#include <fstream>
#include "data.h"
#include "simpan.h"

using namespace std;

void simpan(){

    ofstream file("data.txt");

    for(int i = 0; i < jumlah; i++){

        file << "Nama Tugas : " << tugas[i].nama << endl;
        file << "Mata Kuliah : " << tugas[i].matkul << endl;
        file << "Deadline : " << tugas[i].deadline << endl;
        file << "Status : " << tugas[i].status << endl;
        file << endl;
    }

    file.close();

    cout << "\nData berhasil disimpan!\n";
}
