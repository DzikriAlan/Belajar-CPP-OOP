// #include<iostream>
// #include<string>
// using namespace std;

// /*Alhamdulillah,
//     static member variabel adalah member variabel yang menggunakan keyword static
//     membuat member variabel tersebut bersifat dimiliki oleh semua object
    
//     member variabel tersebut hanya akan ada satu dan akan dimiliki oleh class
//     dan semua object yang menggunakan class tersebut. jadi jika melakukan perubahan
//     nilai pada member variabel statis melalui class atau salah satu object maka akan
//     mempengaruhi semua object yang menggunakan class tersebut
    
//     static member function adalah member function yang menggunakan keyword static
//     yang akan bersifat dimiliki oleh semua object termasuk class tersebut class tersebut.
//     member function tersebut akan hanya ada satu dan bisa di gunakan di semua object yang
//     menggunakan class tersebut. dan juga static member function akan ada meskipun belum ada
//     instance dari class
    
//     untuk mengakses static member function memiliki dua cara sama seperti kita melakukannya
//     pada static member variable, yang pertama kita bisa melakukannya melalui object, dengan
//     menambahkan member akses operator " . " di antara nama object dan nama member.*/

// class Mahasiswa{
//     private:
// // 1. deklarasikan data member static nya di private
//         static int s_nilai;
//     public:
//         int nilai;
//         string nama;

//         void setnilai();
//         void tampil();
// // 2. agar dapat mengubah variabel static, kita juga harus menggunakan function yang static juga
//         static void setSnilai(int);
//         static int getSnilai(){return s_nilai;}  
//         Mahasiswa(const char* pnama):nama(pnama){setnilai();}
// };

// int Mahasiswa::s_nilai = 0;
// // kenapa setnilai tidak static?, karena setnilai itu hasil dari fungsi nya itu tidak mengeluarkan variabel static
// // dia mengeluarkan VARIABEL NILAI(yang tidak static) yang nilainya itu variabel static yang di increment kan
// void Mahasiswa::setnilai(){
//     nilai = ++s_nilai;
// }

// void Mahasiswa::tampil(){
//     cout << "Nama  : " << nama << endl;
//     cout << "Nilai : " << nilai << endl << endl;
// }

// void Mahasiswa::setSnilai(int psnilai){s_nilai = psnilai;}


// int main(int argc, char const *argv[])
// {
//     Mahasiswa achilles("Achilles");
//     achilles.tampil();
//     Mahasiswa hector("Hector");
//     hector.tampil();

//     hector.setSnilai(9);
//     cout << "set menjadi 9 " << endl << endl;

//     Mahasiswa hagoromo("Hagoromo");
//     hagoromo.tampil();
//     Mahasiswa madara("Madara");
//     madara.tampil();

//     madara.getSnilai();
   
//     return 0;
// }

#include<iostream>
using namespace std;

class Mahasiswa{
    private:
        static int s_nilai;
    public:
        int nilai;
        string nama;

        int getNilai();
        static void setSnilai(int psnilai){s_nilai = psnilai;}
        static int getSnilai(){return s_nilai;}
        void display();
        Mahasiswa(const char* pnama):nama(pnama){getNilai();}
};

int Mahasiswa::s_nilai = 0;

int Mahasiswa::getNilai(){return nilai = ++s_nilai;}

void Mahasiswa::display(){
    cout << "Nama   : " << nama << endl;
    cout << "Nilai  : " << nilai << endl;
}

int main(int argc, char const *argv[])
{
    Mahasiswa a("Achilles");
    a.display();
    Mahasiswa b("Madara");
    b.display();
    cout << endl;

    cout << "set menjadi 9" << endl << endl;
    b.setSnilai(9);

    Mahasiswa c("Tsunade");
    c.display();
    Mahasiswa d("Sakura");
    d.display();
    cout << endl;

    cout << "Nilai static sekarang : " << d.getSnilai() << endl;
    
    
    return 0;
}