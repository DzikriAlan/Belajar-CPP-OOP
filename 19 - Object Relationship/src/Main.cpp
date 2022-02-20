// #include <iostream>
// #include <string>
// using namespace std;
 
// #include "jantung.h"
// #include "manusia.h"

// /* ini adalah salah satu tipe object relationships, namanya composition

//    composition merupakan relasi dengan model "bagian dari", masing masing
//    object akan saling bergantung, dan hubungan dari mereka akan menentukan
//    jangka hidup masing masing dari mereka.
// */
 
// int main(){
//     manusia *varManusia = new manusia("budi");
//     delete varManusia;
//     return 0;

//     // output
//     /*jantung dihidupkan
//       budi hidup        
//       budi mati
//       jantung dimatikan          
//     */
// }

// /* pada file main.cpp, dilakukan penghapusan memory terhadap object varManusia,
//    dengan dilakukan hal tersebut maka otomatis akan menghapus object varJantung
//    yang berada di dalam object varManusia*/

// #include <iostream>
// #include <vector>
// using namespace std;

// /* Association merupakan object yang independen tapi berelasi, masing-masing object
//    memiliki jangka hidup mereka sendiri dan tidak ada yang namanya kepemilikan.*/

// /* Contoh : hubungan antara dokter dan pasien, yang masing-masin memiliki jangka
//    hidupnya sendiri, dan mereka dapat memutuskan atau mengganti hubungan kapan saja.*/

// class dokter;
// class pasien{
// public:
//     string nama;
//     vector<dokter *> daftar_dokter;
//     pasien(string pNama):nama(pNama){
//         cout<<"Pasien \""<<nama<<"\" ada\n";
//     }
//     ~pasien(){
//         cout<<"Pasien \""<<nama<<"\" tidak ada\n";
//     }
//     void tambahDokter(dokter*);
//     void cetakDokter();
// };
 
// class dokter{
// public:
//     string nama;
//     vector<pasien *> daftar_pasien;
 
//     dokter(string pNama):nama(pNama){
//         cout<<"Dokter \""<<nama<<"\" ada\n";
//     }
//     ~dokter(){
//         cout<<"Dokter \""<<nama<<"\" tidak ada\n";
//     }
//     void tambahPasien(pasien*);
//     void cetakPasien();
// };
 
// void pasien::tambahDokter(dokter *pDokter){
//     daftar_dokter.push_back(pDokter);
// }
// void pasien::cetakDokter(){
//     cout<<"Daftar Dokter dari pasien \""<<this->nama<<"\":\n";
//     for (auto &a : daftar_dokter){
//         cout<<a->nama<<"\n";
//     }
//     cout<<endl;
// }
// void dokter::tambahPasien(pasien *pPasien){
//     daftar_pasien.push_back(pPasien);
//     pPasien->tambahDokter(this);
// }
// void dokter::cetakPasien(){
//     cout<<"Daftar Pasien dari dokter \""<<this->nama<<"\":\n";
//     for (auto &a : daftar_pasien){
//         cout<<a->nama<<"\n";
//     }
//     cout<<endl;
// }
 
// int main(){
//     dokter *varDokter = new dokter("budi");
//     dokter *varDokter2 = new dokter("tono");
//     pasien *varPasien = new pasien("andi");
//     pasien *varPasien2 = new pasien("doni");
 
//     varDokter->tambahPasien(varPasien);
//     varDokter->tambahPasien(varPasien2);
//     varDokter2->tambahPasien(varPasien);
 
//     varDokter->cetakPasien();
//     varDokter2->cetakPasien();
//     varPasien->cetakDokter();
//     varPasien2->cetakDokter();
 
//     delete varPasien;
//     delete varPasien2;
//     delete varDokter;
//     delete varDokter2;

//     // output
    
//     /*Dokter "budi" ada
//     Dokter "tono" ada
//     Pasien "andi" ada
//     Pasien "doni" ada
//     Daftar Pasien dari dokter "budi":
//     andi
//     doni

//     Daftar Pasien dari dokter "tono":
//     andi

//     Daftar Dokter dari pasien "andi":
//     budi
//     tono

//     Daftar Dokter dari pasien "doni":
//     budi

//     Pasien "andi" tidak ada
//     Pasien "doni" tidak ada
//     Dokter "budi" tidak ada
//     Dokter "tono" tidak ada*/

//     /*Pada contoh program di atas, terdapat 2 macam object, yaitu; dokter dan pasien.
//       Masing-masing object berdiri sendiri, dan dapat berelasi dengan banyak object 
//       lainnya, seperti 1 dokter dapat berelasi dengan 2 pasien, dan pasien juga bisa
//       memiliki relasi dengan dokter lebih dari satu.*/
 
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
 
#include "anak.h"
#include "ibu.h"

/* Aggregation merupakan relasi dengan model “memiliki”, dimana semua object memiliki
   jangka kehidupanya masing-masing dan adanya sebuah relasi kepemilikan lebih dari satu.*/

/* Contoh: hubungan antara anak dan orang tua, dimana masing-masing memiliki jangka
   kehidupan masing-masing, dan orang tua memiliki (banyak) anak.*/

int main(){
    ibu *varIbu = new ibu("dini");
    anak *varAnak = new anak("tono");
    anak *varAnak2 = new anak("rini");
 
    varIbu->tambahAnak(varAnak);
    varIbu->tambahAnak(varAnak2);
 
    varIbu->cetakAnak();
 
    delete varIbu;
    delete varAnak;
    delete varAnak2;

    // output
    /* Ibu "dini" ada
       Anak "tono" ada
       Anak "rini" ada
       Daftar Anak dari Ibu "dini":
       tono
       rini

       Ibu "dini" tidak ada
       Anak "tono" tidak ada
       Anak "rini" tidak ada*/

    /* Hampir mirip seperti association, tapi berbedaanya adalah, bahwa tidak semua object
       pada relasi tipe aggregation dapat memiliki banyak relasi ke object lainya, di atas
       dicontohkan bahwa hanya object ibu saja yang dapat memiliki banyak relasi ke object
       anak, tapi anak tidak bisa memiliki banyak relasi ke banyak object ibu.*/
 
    return 0;
}