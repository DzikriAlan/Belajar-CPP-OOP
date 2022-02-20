#include<iostream>
using namespace std;

/* alhamdulillah, 
 * Polymorphism itu si baseclass bisa mengakses fungsi yang ada di derrivedclass.*/

// LANGKAH LANGKAH POLYMORPHISM

class BaseClass{
    // 1. data member di baseclass kita protected kan saja
    protected:
        int sisia, sisib;
    public:
    // 2. taro fungsi yang ada di derrivedclass ke baseclass, jangan lupa kasih virtual dan definisi nya di return 0 kan saja
        virtual int perkalian(int psisia, int psisib){return 0;}
};

// 3. pakai inheritance, seperti di bawah ini
class DerrivedClass:public BaseClass{
    public:
        int perkalian(int psisia, int psisib){
        // 4. Jabarkan bahwa data member a dan b yang ada di baseclass itu, nilainya sama dengan Aa dan Bb yang ada di parameter perkalian function
        sisia = psisia;
        sisib = psisib;
        return sisia * sisib;}
};

int main(int argc, char const *argv[])
{
    // 5. buat object dari baseclass, * itu menunjuk nilai kosong dari anakpointer
    BaseClass *anakpointer;
    // 6. buat object dari derrivedclass
    DerrivedClass anak;
    // 7. jabarkan bahwa baseclass itu samadengan alamatnya object anak dari derrivedclass
    anakpointer = &anak;
    // 8. nah, sekarang tinggal tunjuk fungsi yang ada di derrivedclass memakai object anakpointer dari baseclass
    cout << "Hasil perkalian " << anakpointer->perkalian(9,7) << endl;

    return 0;
}