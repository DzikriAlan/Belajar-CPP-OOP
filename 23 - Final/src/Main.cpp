#include<iostream>
using namespace std;

/* final itu untuk mencegah terjadinya overriding terhadap suatu function pada sebuah class dan
   dapat pula untuk mencegah terjadinya inheritance pada suatu class*/

   // inikan contoh, program ini dijalankan akan error (yang penting mah jadi tahu maksud dari final itu sendiri*

class BaseClass final{
    protected:
        string nama;
    public:
        virtual void kembali(const char*pnama){
            this->nama = pnama;
            cout << "Hello world dari " << pnama << endl;
        }
};

class DerrivedClass : public BaseClass{
    protected:
        string nama;
    public:
        void kembali(const char*pnama) override {
            DerrivedClass::nama = pnama;
            cout << "Hello world from " << pnama << endl;
        }
};

int main(int argc, char const *argv[])
{
    BaseClass a;
    a.kembali("BaseClass");
    DerrivedClass b;
    BaseClass & c = b;
    c.kembali("DerrivedClass");

    return 0;
}