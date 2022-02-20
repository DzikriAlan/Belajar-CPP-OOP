#include<iostream>
#include<string>

using namespace std;

class Shinobi{
    private:
        string nama;
        int umur;
        double kekuatan;
    public:
    // 1. Tuliskan "=" serta data default di samping variabelnya 
        Shinobi(const char* pnama = "Naruto", int pumur = 20, double pkekuatan = 99.99):
        nama(pnama), umur(pumur), kekuatan(pkekuatan){}

        void display(){
            cout << "Nama      : " << this->nama << endl;
            cout << "Umur      : " << this->umur << endl;
            cout << "Kekuatan  : " << this->kekuatan << endl << endl;
        }
        
};

int main(int argc, char const *argv[])
{
    // 2. urutan isi parameternya, harus sesuai constructor di class, aslinya bisa sih ngakcak, tapi make cara lain. (pernah buat)
    Shinobi madara("Madara", 48, 7.77);
    madara.display();

    Shinobi kaguya("kaguya", 50);
    kaguya.display();

    Shinobi sasuke("sasuke");
    sasuke.display();

    Shinobi* naruto = new Shinobi();
    naruto->display();

    
    return 0;
}