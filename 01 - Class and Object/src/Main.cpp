// #include<iostream>
// #include<string>

// using namespace std;

// class Mahasiswa{
//     public:
//         string nama;
//         string NIM;
//         string jurusan;
//         double IPK;
// };

// int main()
// {
//     Mahasiswa data1;
//     data1.nama = "Golan";
//     data1.NIM = "1122";
//     data1.jurusan = "Teknik Hokage";
//     data1.IPK = 12.56;

//     Mahasiswa data2;
//     data2.nama = "Cyka";
//     data2.NIM = "2222";
//     data2.jurusan = "Teknik Mizukage";
//     data2.IPK = 22.56;

//     cout << "Data 1" << endl;
//     cout << "Nama    : " << data1.nama << endl;
//     cout << "NIM     : " << data1.NIM << endl;
//     cout << "Jurusan : " << data1.jurusan << endl;
//     cout << "IPK     : " << data1.IPK << endl << endl;

//     cout << "Data 2" << endl;
//     cout << "Nama    : " << data2.nama << endl;
//     cout << "NIM     : " << data2.NIM << endl;
//     cout << "Jurusan : " << data2.jurusan << endl;
//     cout << "IPK     : " << data2.IPK << endl << endl;

//     return 0;
// }
#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
    private:
        string nama;
        string nim;
        string jurusan;
        double ipk;
    public:
        Mahasiswa(const char* nama, const char* nim, const char* jurusan, double ipk){
            Mahasiswa::nama = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::jurusan = jurusan;
            Mahasiswa::ipk = ipk;

            cout << "Nama    : " << Mahasiswa::nama << endl;
            cout << "NIM     : " << Mahasiswa::nim << endl;
            cout << "Jurusan : " << Mahasiswa::jurusan << endl;
            cout << "IPK     : " << Mahasiswa::ipk << "\n\n";
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa sasuke("Sasuke", "1234", "Uchiha", 9.99);
    Mahasiswa naruto("Naruto", "5678,", "Uzumaki", 77.7);
    Mahasiswa kakashi("Kakashi", "234", "Hokage", 44.4);
    
    return 0;
}
