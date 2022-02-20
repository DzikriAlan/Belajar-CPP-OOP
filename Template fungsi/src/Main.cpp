// #include <iostream>
// #include<string>
// using namespace std;

/* Alhamdulillah,
    Templates adalah salah satu fitur dari C++ yang memungkinkan anda untuk membuat sebuah program generik. 
    Dengan arti lain bahwa anda dimungkinkan untuk membuat sebuah function atau class yang dapat menyesuaikan 
    dan bekerja dengan tipe data yang berbeda.

    Dengan adanya template kita dimungkinkan membuat sebuah kode yang dapat digunakan berulangkali
    dan bersifat fleksibel dengan berbagai macam tipe data. Dan juga mempermudahkan kita dalam melakukan perawatan kode
    
    Singkatnya kompiler akan membuat function/class overloading dari template yang telah dibuat oleh programmer*/


 
// template <typename C>
// class Larik {
// private:
//     int size;
//     double kelas;
// public:
//     Larik(C psize, C pkelas):
//     size(psize), kelas(pkelas){
//         cout << "Constructor Larik" << endl;
//         cout << this->size << endl;
//         cout << this->kelas << endl << endl;
//     } //anggota function dengan template

//     void print(C data){
//         this->kelas = data;
//         cout << "print function" << endl;
//         cout << kelas << endl << endl;
//     }

//     int toInt(C data){
//         this->size = data;
//         return (int)size ;
//     }


//     C max(){
//         return (size>kelas)? size:kelas;
//     }

//     C min(C a, C b){
//         this->size = a;
//         this->kelas = b;
//         return (a>b)? a:b;
//     }
// };
 
// int main() {
//     // kalo mau ngeluarin data dengan tipe data yang dinginkan, berikan saja tipe data di samping objeknya
//     Larik <double>data(10, 12);

//     data.print(19.52);
//     data.print(19);
//     cout << "toInt function" << endl;
//     cout << data.toInt(10.1010101) << endl << endl;
//     cout << "max function" << endl;
//     cout << data.max() << endl << endl;
//     cout << "min function" << endl;
//     cout << data.min(10, 20) << endl;
  
//     return 0;
// }


#include<iostream>
using namespace std;

template<typename A, typename B>
class Mahasiswa{
    private:
        int a;
        double b;
    public:
        Mahasiswa(A a = 0, B b = 1):a(a), b(b){}
        void tambah(A a, B b){
            this->a = a;
            this->b = b;
            cout << a+b << endl << endl;
        }

        A banding(A a, B b){
            this->a = a;
            this->b = b;
            return (a>b? a : b);
        }

        auto kurang(A a, B b){
            this->a = a;
            this->b = b;
            return a-b;
        }


};

int main(int argc, char const *argv[])
{
    Mahasiswa a(9,7);
    a.tambah(3, 4);
    cout << a.banding(12.34, 12) << endl;
    cout << a.kurang(97.7, 12);



    
    return 0;
}