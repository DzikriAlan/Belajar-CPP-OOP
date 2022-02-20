//  #include <iostream>
//  #include <string>
//  using namespace std;
 
// /* alhamdulillah,
//    inheritance, itu class yang akan dimungkinkan untuk mengambil isi dari class lain
//    sebagai isi dari class tersebut. jadi biar kita tidak mengulang kode yang serupa 
   
//    public inheritance itu, maka akan membuat member dari baseclass yang memiliki
//    sifat private, protected, dan public akan menjadi diri mereka sendiri pada
//    derrivedclass tersebut  
   
//    protected inheritance itu, membuat member dari baseclass yang bersifat protected
//    dan public menjadi bersifat protected pada derrived class
   
//    private inheritance itu, membuat memberi dari baseclass yang bersifat protected
//    dan public menjadi bersifat private pada derrived class*/

//  // 1. kita buat baseclass pertama
//  class orang{
//      public:
//      string nama;
 
//      orang(string pNama):
//          nama(pNama){
//          cout<<"orang dibuat\n"<<endl;
//      }
//      ~orang(){
//          cout<<"orang dihapus\n"<<endl;
//      }
//  };
 
//  // 2. kita buat baseclass kedua
//  class manusia{
//      public:
//      string jenisKelamin;
 
//      manusia(string pJenisKelamin):
//          jenisKelamin(pJenisKelamin){
//          cout<<"manusia dibuat\n"<<endl;
//      }
//      ~manusia(){
//          cout<<"manusia dihapus\n"<<endl;
//      }
//  };

//  /* untuk constructor, yang keluar itu baseclass yang paling utama, kalo disini kan itu class orang dulu*/
// /* 3. nah ini inheritance nya. baseclass tadi di taro di samping nya derrived class, dan ":" sebagai pemisah.
//       dan sertakan juga tipe pewarisannya, apakah public, protected atau private*/
//  class pelajar: public orang, private manusia{
//      public:
//      string sekolah;
// /*4. nah karena, sudah menggunakan inheritance, maka parameter dari constructor derrivedclass bisa mengakses data member dari
//      baseclass*/
//      pelajar(string pNama, string pJenisKelamin, string pSekolah):
//      /* untuk destructor, yang keluar itu baseclass yang paling utama, kalo disini kan itu class manusia dulu*/
//          manusia(pJenisKelamin),  // 5. karena di class manusia make cons dan des tructor, maka nulisnya make nama classnya kalo ini kan manusia
//          orang(pNama),  // 5. karena di class orang make cons dan des tructor, maka nulisnya make nama classnya kalo ini kan orang
//          sekolah(pSekolah){
//          cout<<"pelajar dibuat\n"<<endl;
//      }
//      ~pelajar(){
//          cout<<"pelajar dibuat\n"<<endl;
//      }
//      string perkenalan(){
// /*6. karena kita make inheritance, maka kita dapat mengakses data member yang ada baseclass*/
//          return "Hallo, nama saya " + nama + " dengan jenis kelamin " + jenisKelamin + " dari sekolah " + sekolah + "\n\n";
//      }
//  };
 
//  int main(){
//      pelajar andi("andi laksono", "Laki-Laki", "belajarcpp");
//      cout<<andi.perkenalan();
 
//      return 0;
//  }

#include<iostream>
using namespace std;

class kojiro{
    protected:
        int umur;
        string nama;
    public:
        kojiro(int pumur, const char* pnama):umur(pumur), nama(pnama){}
};

class BaseClass1 : public kojiro{
    protected:
        int saku;
        string predikat;
    public:
        BaseClass1(int psaku, const char* ppredikat, int pumur, const char* pnama):
        saku(psaku), predikat(ppredikat), kojiro(pumur, pnama){}
        void perkenalan(){
            cout << "BaseClass1" << endl;
            cout << "Nama     : " << this->nama << endl;
            cout << "Umur     : " << this->umur << endl;
            cout << "Predikat : " << this->predikat << endl;
            cout << "Saku     : " << this->saku << endl << endl;
        }

        void perkenalan1(){
            cout << "kojiro" << endl;
            cout << "Nama : " << kojiro::nama << endl;
            cout << "Umur : " << kojiro::umur << endl << endl;
        }
};

int main(int argc, char const *argv[])
{
    BaseClass1 b(20000, "Baik", 20, "Achilles");
    b.perkenalan();
    kojiro a(19, "Madara");
    b.perkenalan1();
    
    return 0;
}