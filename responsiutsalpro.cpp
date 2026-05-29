#include <iostream>
#include <fstream>
using namespace std;

struct Tugas{
    string nama;
    string matkul;
    string deadline;
    string status;
};

Tugas tugas[100];
int jumlah = 0;

// LOGIN
void login(){

    string nama;
    string nim;

    cout << "===== LOGIN =====\n";

    cout << "Masukkan Nama : ";
    cin >> nama;

    cout << "Masukkan NIM  : ";
    cin >> nim;

    cout << "\nLogin Berhasil!\n";
}

// TAMBAH TUGAS
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

// LIHAT TUGAS
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

// TANDAI SELESAI
void selesai(){

    int nomor;

    cout << "\nMasukkan nomor tugas selesai : ";
    cin >> nomor;

    nomor--;

    tugas[nomor].status = "Selesai";

    cout << "Tugas selesai!\n";
}

// HAPUS TUGAS
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

// SIMPAN FILE
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

// MAIN
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
