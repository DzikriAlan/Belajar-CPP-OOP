#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct Mahasiswa{
    int pk;
    string nim;
    string nama;
    string jurusan;
};

int getOption();
void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa){
    data.seekp((posisi = 1)*sizeof(inputMahasiswa),ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa), sizeof(Mahasiswa));
}

void addDataMahasiswa(fstream &data){
    Mahasiswa inputMahasiswa;
    inputMahasiswa.pk = 1;
    cout << "Nama    : "; getline(cin,inputMahasiswa.nama);
    cout << "Jurusan : "; getline(cin,inputMahasiswa.jurusan);
    cout << "NIM     : "; getline(cin,inputMahasiswa.nim);

    writeData(data,1,inputMahasiswa);
}

int main(int argc, char const *argv[])
{
    fstream data;

    checkDatabase(data);

    int pilihan = getOption();
    char is_continue;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH){
        switch(pilihan){
            case CREATE:
                cout << "Menambah data Mahasiswa" << endl;
                addDataMahasiswa(data);
                break;
            case READ:
                cout << "Tampilkan data Mahasiswa" << endl;
                break;
            case UPDATE:
                cout << "Ubah data Mahasiswa" << endl;
            case DELETE:
                cout << "Hapus data Mahasiswa" << endl;
            default:
                cout << "Pilihan tidak temukan!" << endl;  
                break;
        }

        label:
            cout << "Lanjutkan?(y/t) : "; cin >> is_continue;
            if((is_continue == 'y') | (is_continue == 'Y')){
                pilihan = getOption();
            } else if((is_continue == 'n') | (is_continue == 'N')){
                break;
            } else{
                goto label;
            }
    }
    cout << "Program Selesai!" << endl;

    return 0;
}

void checkDatabase(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);

    // check file ada atau tidak
    if(data.is_open()){
        cout << "Database ditemukkan!" << endl;
    } else {
        cout << "Data tidak ditemukkan, buat database baru" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

int getOption(){
    int input;

    cout << "\nProgram CRUD data Mahasiswa" << endl;
    cout << "==============================" << endl;
    cout << "1. Tambah data Mahasiswa" << endl;
    cout << "2. Tampilkan data Mahasiswa" << endl;
    cout << "3. Ubah data Mahasiswa" << endl;
    cout << "4. Hapus data Mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=============================" << endl;
    cout << "Pilih [1-5] : "; cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}
