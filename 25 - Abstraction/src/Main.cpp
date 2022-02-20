// // #include<iostream>
// // using namespace std;

// // /*Alhamdulillah,
// //   kesimpulan dari konsep abstractionn adalah dimana kita mendesain sebuah kode
// //   program dengan memisahkan antar muka (informasi yang disajikan) dan implementasi
// //   (informasi mekanisme kerja dan informasi yang berada di latar belakang)
  
// //   jadi dengan hal ini dapat memberikan kemudahan dalam mendalami dan menggunakan
// //   program, dan juga memudahkan pengembangan program di masa mendatang, karena ketika
// //   terjadi perubahan pada implementasi tidak akan jauh berpengaruh pada penggunaan
  
// //   abstraction itu tujuannya beda sama encapsulation, kalo encapsulation lebih berfokus
// //   kepada pembungkusan kode sedangkan abstraction berfokus pada penyajian kode*/

// // class lampu{
// //     private:
// //         bool menyala = 0; // disembunyikan
// //     public:
// //     // antar muka atau informasi penting yang dapat digunakan oleh pengguna
// //         void dinyalakan(){
// //             menyala = 1;
// //         }

// //         void dimatikan(){
// //             menyala = 0;
// //         }

// //         void status(){
// //             cout << (menyala? "lampu dinyalakan":"lampu dimatikan") << endl;
// //         }
// // };

// // int main(int argc, char const *argv[])
// // {
// //     lampu neon;
// //     neon.status();
// //     neon.dinyalakan();
// //     neon.status();
// //     neon.dimatikan();
// //     neon.status();
    
// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// class Lampu{
//     private:
//         bool menyala = 0;
//     public:
//         void dinyalakan(){
//             menyala = 1;
//         }

//         void dimatikan(){
//             menyala = 0;
//         }

//         void status(){
//             cout << (menyala? "Lampu dihidupkan": "Lampu dimatikan") << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     Lampu neon;
//     neon.status();
//     neon.dinyalakan();
//     neon.status();
//     neon.dimatikan();
//     neon.status();
    
//     return 0;
// }

#include<iostream>
using namespace std;

class lampu{
    private:
        int menyala = 0;
    public:
        void dinyalakan(){
            menyala = 1;
        }

        void dimatikan(){
            menyala = 0;
        }

        void status(){
            cout << (menyala? "Lampu dinyalakan" : "Lampu dimatikan") << endl;
        }
};

int main(int argc, char const *argv[])
{
    lampu neon;
    neon.status();
    neon.dinyalakan();
    neon.status();
    neon.dimatikan();
    neon.status();

    return 0;
}