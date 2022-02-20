// #include<iostream>
// #include<string>

// using namespace std;

// /*alhamdulillah,
//     friend class adalah class yang memiliki hak spesial kepada class lainnya yang mendeklarasikan
//     class tersebut sebagai friend class, class tersebut akan memiliki kemampuan menagakses member
//     dari class yang bersifat hak akses private dan protected
    
//     friend function adalah function yang memiliki kemampuan spesial kepada class yang
//     mendeklarasikan function tersebut sebagai friend, function tersebut akan memiliki
//     kemampuan member dari class tersebut yang bersifat hak akses private dan protected*/

// // 1. deklarasikan nama class yang ingin menjadi teman dari class siswa
// class Siswa;
// class Mahasiswa{
//     private:
//         string nama;
//         int nilai;
//     public:
//         Mahasiswa(const char* nama, int nilai){
//             this->nama = nama;
//             this->nilai = nilai;
//         }

//         void tampil(){
//             cout << "Nama  : " << this->nama << endl;
//             cout << "Nilai : " << this->nilai << endl << endl;
//         }
// // 2. deklarasikan lagi nama class nya, serta tambahkan kata friend sebelum tulisan class
//         friend class Siswa;
// };

// // 3. buat class siswan yang sudah menjadi teman dari class Mahasiswa
// class Siswa{
//     private:
//         string sikap;
//         int saku;
//     public:
//         Siswa(const char* sikap, int saku){
//             this->sikap = sikap;
//             this->saku = saku;
//         }
// // 4. Sekarang bisa mengakses data member yang ada di class Mahasiswa di class siswa, disini perantaranya make function
//         void tampilmahasiswa(Mahasiswa murid){
//             cout << "After\n" << endl;
//             cout << "Nama  : " << murid.nama << endl;
//             cout << "Nilai : " << murid.nilai << endl << endl;
//         }
// // 5. untuk friend function, tuliskan kata friend sebelum menuliskan function yang ingin menjadi teman dari class siswa
//         friend void tampilsiswa(Siswa& murid);
// };
        
// // 6. buat function yang sudah menjadi teman dari class siswa, dan sekarang bisa mengakses data member  dari class siswa
// void tampilsiswa(Siswa& murid){
//     cout << "Sikap : " << murid.sikap << endl;
//     cout << "Saku  : " << murid.saku << endl << endl;
// }

// int main(int argc, char const *argv[])
// {
//     Mahasiswa* madara = new Mahasiswa("Madara", 11);
//     madara->tampil();
//     Mahasiswa* kaguya = new Mahasiswa("Kaguya", 22);
//     kaguya->tampil();
//     Mahasiswa* kakashi = new Mahasiswa("Kakashi", 44);

//     Siswa* sakura = new Siswa("Sakura", 23);
//     sakura->tampilmahasiswa(*kakashi);

//     tampilsiswa(*sakura);
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class siswa;
class Mahasiswa{
    private:
        int chakra;
        string daerah;
        string jutsu;
    public:
        Mahasiswa(const char* pdaerah, const char* pjutsu, int pchakra):
        daerah(pdaerah), jutsu(pjutsu), chakra(pchakra){}
        void tampilMahasiswa(Mahasiswa& data);
        friend class siswa;
};

class siswa{
    private:
        int umur;
        string nama;
        string kelas;
    public:
        siswa(int pumur, const char* pnama, const char* pkelas){
            this->umur = pumur;
            this->nama = pnama;
            this->kelas = pkelas;
        }

        void tampilMahasiswa(Mahasiswa& data){
            cout << "Daerah  : " << data.daerah << endl;
            cout << "Jutsu   : " << data.jutsu << endl;
            cout << "Chakra  : " << data.chakra << endl << endl;
        }

        friend void tampilsiswa(siswa& jangandata);
};

void tampilsiswa(siswa& jangandata){
    cout << "Umur  : " << jangandata.umur << endl;
    cout << "Nama  : " << jangandata.nama << endl;
    cout << "Kelas : " << jangandata.kelas << endl << endl;
}

int main(int argc, char const *argv[])
{
    Mahasiswa a("Konoha", "Jutsu", 9000);
    siswa c(19, "Achilles", "XI TKJ");
    tampilsiswa(c);
    c.tampilMahasiswa(a);
    
    return 0;
}