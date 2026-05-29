#include <iostream>
#include "data.h"
#include "lihat.h"

using namespace std;

void lihat(){

    cout << "\n=== DAFTAR TUGAS ===\n";

    if(jumlah == 0){
        cout << "Belum ada tugas.\n";
    }else{

        for(int i = 0; i < jumlah; i++){

            cout << "\nTugas ke-" << i + 1 << endl;
            cout << "Nama Tugas : " << tugas[i].nama << endl;
            cout << "Mata Kuliah : " << tugas[i].matkul << endl;
            cout << "Deadline : " << tugas[i].deadline << endl;
            cout << "Status : " << tugas[i].status << endl;
        }
    }
}
