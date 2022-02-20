// #include<iostream>
// #include<string>
// #include<chrono>

// using namespace std;

// using Clock = std::chrono::high_resolution_clock;
// using TimePoint = std::chrono::time_point<Clock>;

// class kosong{
//     public:
//         int data(){
//             return 1;
//         }
// };

// class isi{
//     public:
//         int dataint1;  // 4 byte
//         int dataint2;  // 4 byte
//         double datadouble; // 8 byte
//         string datastr;    // 16 byte
// };

// class Mahasiswa{
//     public:
//         string nama;
//         string nim;
//         string jurusan;

//         Mahasiswa(const char* nama){
//             Mahasiswa::nama = nama;
//         }
// };

// int main()
// {
//     // besaran memory untuk sebuah object
//     // kita akan menampilkan besar dari class kosong
//     cout << "Alokasi class kosong adalah : " << sizeof(kosong) << " byte" << endl;
//     cout << "Alokasi class isi adalah    : " << sizeof(isi) << " byte" << endl;

//     // address
//     string a;
//     string b;
//     Mahasiswa object1 = Mahasiswa("Khabib");
//     Mahasiswa* object2 = new Mahasiswa("Nurmagomedov");
//     string c;
//     string d;
//     cout << "\nAddress Stack" << endl;
//     cout << "&a       : " << &a << endl;
//     cout << "&b       : " << &b << endl; // ini stack karena, ada kalo ada variabel bersama "*" dan variabel saat dicout nya bersama "&" maka yang keluar adalah memory stacknya
//     cout << "&object1 : " << &object1 << endl;
//     cout << "&object2 : " << &object2 << endl;
//     cout << "object2  : " << object2 << endl; // ini heap, karena si object 2 itu kan alamatnya new Mahasiswa("Nurmagomedov");
//     cout << "&c       : " << &c << endl;
//     cout << "&d       : " << &d << endl;


//     return 0;
// }
#include<iostream>
#include<string>
#include<chrono>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong{
    public:
        int data(){
            return 1;
        }
};

class Isi{
    public:
        int dataInt1; // 4 byte
        int dataInt2; // 4 byte
        double dataDouble; // 8 byte
};

class Mahasiswa{
    public:
        string nama;

        Mahasiswa(const char* nama){
            this-> nama = nama;
        }
};

int main(int argc, char const *argv[])
{
    // klia akan menampilkan besar dari class kosong
    cout << "Alokasi class kosong adalah : " << sizeof(Kosong) << " byte" << endl;
    cout << "Alokasi class Isi adalah    : " << sizeof(Isi) << " byte" << endl;

    // address
    string a;
    string b;
    Mahasiswa object1("Ucup");
    Mahasiswa* object2 = new Mahasiswa("Otong");
    string c;
    string d;
    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl; // ini sgack, karena object2 kan sebuah variabel, nah ketika dikasih & maka yang akan keluar itu memory dari variabel itu sendiri
    cout << object2 << endl; // ini hesp, karena object2 itu nilainya tuh alamat dari new
    cout << &c << endl;
    cout << &d << endl;

    // seberapa cepat kita membuat memori
    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    *tStackStart = Clock::now();
    Mahasiswa object3("Ucup");
    *tStackEnd = Clock::now(); 
    
    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa* object4 = new Mahasiswa("Otong");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di stack adalah " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di heap adalah " << durasi.count() << endl;
    return 0;
}
