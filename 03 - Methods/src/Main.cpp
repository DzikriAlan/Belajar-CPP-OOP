#include<iostream>
#include<string>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        double ipk;

        Mahasiswa(string nama, double ipk){
            Mahasiswa::nama = nama;
            Mahasiswa::ipk = ipk;
        }

        // Methode tanpa parameter dan tanpa return
        void tampilkandata(){
            cout << "Nama saya " << nama << ", IPK saya adalah " << ipk << endl; 
        }

        // Methode dengan parameter dan tanpa return
        void ubahNama(const char* namaBaru){
            Mahasiswa::nama = namaBaru;
        }

        // Methode tanpa parameter dan dengan return
        string getNama(){
            return Mahasiswa::nama;
        }

        double getIPK(){
            return ipk;
        }

        // Methode dengan parameter dan dengan return
        double katrolipk(const double &tambahanNilai){
            return Mahasiswa::ipk + tambahanNilai;
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mhs1("Sasuke", 20.7);
    Mahasiswa mhs2("Naruto", 31.2);
    mhs1.tampilkandata();
    mhs2.tampilkandata();

    mhs1.ubahNama("Uchiha Madara");
    mhs1.tampilkandata();

    string dataNama = mhs1.getNama();
    
    cout << "dataNama : " << dataNama << endl;
    cout << "DataIPK  : " << mhs1.getIPK() << endl;
    cout << "Nilai katrol : " << mhs1.katrolipk(2) << endl;
    
    return 0;
}