#include<iostream>
#include<string>
using namespace std;
/*Alhamdulillah, 
    const function itu, misalkan di class 1 ngasih const function, di class dua bikin function yang sama mirip kaya const function,
    nah itu ga bisa diubah karena fungsi itu sudah ditetapkan const
    
    const object itu, nilai dari object kita tidak dapat diubah ubah lagi, misalkan kita membuat object beserta constructornya,
    nah ketika kita sudah naro nilai di parameter constructorna DAN saat kita membuat object lagi beserta constructornya juga,
    itu tidak akan bisa, karena object nya itu udah const sama constructor yang sebelumnya*/

class Country{
    public:
        string nama;
        Country(const char* nama){
            this -> nama = nama;
        }

        void setName(const char* nama){
            this -> nama = nama;
        }
// 1. tulis const di samping parameter fungsi
/*  const di fungsi, kalo tanpa const object bisa digunakan, biasanya dipakai mencegah overloading function*/
        void display()const{
            cout << "Nama : " << this->nama << endl;
        }
};

int main()
{
    Country indonesia = Country("Indonesia");

    // object const tidak bisa diubah isinya
// 2. tulis const sebelum nama classnya, agar object dari Country itu const sifatnya (tetap)
    const Country panama = Country("Panama");

    indonesia.display();
    cout << "Di set menjadi Arab" << endl;
    indonesia.setName("Arab");
    indonesia.display();

    cout << endl;

    panama.display();
// 3. ini ga bisa make setname, karena objectnya const
    // panama.setName("Swedia"); 
    
    panama.display();
    return 0;

    // intinya adalah const object harus memakai fungsi yang const juga ya bro!
}

