// #include <iostream>
// using namespace std;

// class baseClass {
// public:
//   virtual void perkenalan(){ //Overridden Function
//     cout<<"Hallo saya Function dari base class"; 
//   }
// };
// class derivedClass: public baseClass{
// public:
//   void perkenalan() override { //Overriding Function
//     cout<<"Hallo saya Function dari derived Class";
//   }
//   /*Keyword override memastikan fungsi yang akan di-override ada pada base class dan virtual.
//     Kalau fungsi pada base class yang akan di-override tidak virtual, maka akan compile error.*/
// };
// /* Function overriding adalah sebuah fitur dalam “inheritance pada C++” dimana kita dimungkinkan 
//    untuk membuat function yang sama persis di dalam derived class seperti function yang ada pada
//    base class. Hal ini seperti membuat versi function baru di dalam derived class, untuk menggantikan
//    peran function yang ada pada base class.*/

// /* function overriding itu....
//    Di lakukan dalam pewarisan.
//    Harus sama dengan satu sama lain.
//    Digunakan untuk menambahkan kemungkinan input atau argument yang bervariasi dan dapat diterima oleh function.*/
 
// int main() {
//   derivedClass d;
//   baseClass& a = d;
//   a.perkenalan();
 
//   return 0;
// }

#include<iostream>
using namespace std;

class BaseClass{
    protected:
        string nama;
    public:
        virtual void perkenalan(const char* pnama){
            nama = pnama;
            cout << "Hello world dari " << this->nama << endl;
        }
};

class BaseClass1 : public BaseClass{
    protected:
        string nama;
    public:
        void perkenalan(const char* pnama) override{
            BaseClass1::nama = pnama;
            cout << "Hello world from " << this->nama << endl;
        }
};

int main(int argc, char const *argv[])
{
    BaseClass a;
    a.perkenalan("BaseClass");
    BaseClass1 b;
    BaseClass & c = b;
    c.perkenalan("BaseClass1");

    return 0;
}