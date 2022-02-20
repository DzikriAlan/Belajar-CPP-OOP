#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int jml_buah;
    cout << "Jumlah barang : "; cin >> jml_buah;

    int buah[jml_buah];
    int max = jml_buah;
    int top = -1;
    int pilih;

    do{
        cout << "BELANJA BUAH" << endl;
        cout << "============" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Ubah" << endl;
        cout << "3. Selesai" << endl;
        cout << "Pilih : "; cin >> pilih;

        switch(pilih){
            case 1:
                if(top == max){
                    cout << "Keranjang penuh!" << endl;
                } else{
                    ++top;
                    cout << "Masukkan Nama Buah : "; cin >> buah[top];
                    cout << endl;
                    cout << "Buah " << buah[top] << " berhasil ditambahkan!" << endl;
                    cout << "====================================" << endl;
                    for(int a = 0; a < top; a++){
                        cout << a+1 << ". " << buah[a] << endl;
                    }
                }

        }
    } while();

    
    

    return 0;
}