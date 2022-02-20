// #include<iostream>
// #include<string>
// // 1.include file header fstream
// #include<fstream>
// /*Alhamdulillah,
//     membuat database itu menyimpan data yang sudah kita buat ke dalam database*/

// using namespace std;

// class Mahasiswa{
//     public:
//         string nama;
//         string nim;
//         string jurusan;

//         Mahasiswa(string nama, string nim, string jurusan){
//             Mahasiswa::nama = nama;
//             Mahasiswa::nim = nim;
//             Mahasiswa::jurusan = jurusan;
//         }

//         string stringify(){
//             return "\n" + nama + " " + nim + " " + jurusan;
//         }
// };

// class DBase{
//     public:
//     // 2. deklarasikan variabel dengan tipe data ofstream dan ifstream
//         ifstream in;
//         ofstream out;
//         string filename;
//         string line;

//         DBase(const char* filename){
//             DBase::filename = filename;
//         }
// /* 3. buat save function yang berparameter class Mahasiswa (class yang berisi data yang ingin di save ke
//     data base)*/
//         void save(Mahasiswa data){
//             cout << data.nama << endl;
//             cout << data.nim << endl;
//             cout << data.jurusan << endl;

// // 4. buat/buka file sebagai tempat data yang ingin disimpan
//             DBase::out.open(DBase::filename, ios::app); // app
//             // nah data strinfify ini contohnya yang akan dimasukkan ke file yang sudah dibuat/buka tadi
//             DBase::out << data.stringify();
// // 5. Kalo udah, di tutup
//             DBase::out.close();
//         }

//         void showall(){
// // 6. buka file yang sudah di buat tadi, menggunakan in yang bertipe data ifstream
//             DBase::in.open(DBase::filename);
//             int index = 0;
// // 7. buat while lalu isi parameternya dengan getline
//             // agar mudah dibaca, getline((in) file yang ingin di pindahkan isinya, (line) isinya mau di taro dimana, kalo ini kan ke line)
//             while(getline(in, line)){
//                 cout << ++index << ". " << line << endl;
//             }
// // 8. Kalo udah. di tutup
//             DBase::in.close();
//         }
// };

// int main()
// {
//     DBase database = DBase("Data.txt");
//     database.showall();

//     // input user
//     string nama, nim, jurusan;
//     cout << "MASUKKAN DATA MAHASISWA" << endl;
//     cout << "Nama    : "; cin >> nama;
//     cout << "NIM     : "; cin >> nim;
//     cout << "Jurusan : "; cin >> jurusan; 
    
//     Mahasiswa datamahasiswa = Mahasiswa(nama, nim, jurusan);

//     // save data ke database
//     database.save(datamahasiswa);

//     // tampilan seluruh data di database
//     database.showall();
//     return 0;
// }

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Mahasiswa{
    private:
        string nama;
        string kelas;
        string umur;
    public:
        Mahasiswa(string pnama, string pkelas, string pumur):
        nama(pnama), kelas(pkelas), umur(pumur){
            cout << "Nama  : " << this->nama << endl;
            cout << "Kelas : " << this->kelas << endl;
            cout << "Umur  : " << this->umur << endl << endl; 
        }

        string stringify(){
            return "\n" + nama + " " + kelas + " " + umur;
        }
};

class DBase{
    private:
        ofstream out;
        ifstream in;
        string filename;
        string line;
    public:
        DBase(const char* pfilename):filename(pfilename){}

        void save(Mahasiswa& data){
            DBase::out.open(DBase::filename, ios::app);
            DBase::out << data.stringify();
            DBase::out.close();
        }

        void showall(){
            DBase::in.open(DBase::filename, ios::in);
            int a;
            while(getline(in, line)){
                cout << ++a << ". " << line << endl;
            }
            DBase::in.close();
        }
};


int main(int argc, char const *argv[])
{
    DBase debes("DBase.txt");
    debes.showall();
    cout << endl;

    string nama, kelas, umur;
    cout << "MASUKKAN DATA MAHASISWA" << endl;
    cout << "Nama   : "; cin >> nama;
    cout << "Kelas  : "; cin >> kelas;
    cout << "Umur   : "; cin >> umur;
    cout << endl;

    Mahasiswa siswa(nama, kelas, umur);

    debes.save(siswa);
    debes.showall();

    
    return 0;
}