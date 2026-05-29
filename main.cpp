#include <iostream>

#include "login.h"
#include "tambah.h"
#include "lihat.h"
#include "selesai.h"
#include "hapus.h"
#include "simpan.h"

using namespace std;

int main(){

    int pilih;

    login();

    do{

        cout << "\n===== MENU =====\n";
        cout << "1. Tambah Tugas\n";
        cout << "2. Lihat Tugas\n";
        cout << "3. Tandai Selesai\n";
        cout << "4. Hapus Tugas\n";
        cout << "5. Simpan File\n";
        cout << "6. Keluar\n";

        cout << "Pilih menu : ";
        cin >> pilih;

        switch(pilih){

            case 1:
                tambah();
                break;

            case 2:
                lihat();
                break;

            case 3:
                selesai();
                break;

            case 4:
                hapus();
                break;

            case 5:
                simpan();
                break;

            case 6:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Menu tidak ada!\n";
        }

    }while(pilih != 6);

    return 0;
}
