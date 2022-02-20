// #include<iostream>
// #include<string>
// #include<typeinfo>

// using namespace std;

// template<typename T, typename U>
// auto max(T a, U b){
//     return (a > b) ? T(a) : U(b);
// }

// int main(int argc, char const *argv[])
// {
//     int a = 15;
//     string b = "test";
//     double c = 15.567;
//     float d = 14.56f;
//     auto e = max(a,c);

//     cout << a << "\ttipe : " << typeid(a).name() << endl;
//     cout << b << "\ttipe : " << typeid(b).name() << endl;
//     cout << c << "\ttipe : " << typeid(c).name() << endl;
//     cout << d << "\ttipe : " << typeid(d).name() << endl;
//     cout << e << "\ttipe : " << typeid(e).name() << endl;
//     return 0;
// }

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

template<typename A, typename B>
A max(A a , B b){
    return (a>b ? a : b);
}

int main(int argc, char const *argv[])
{
    int a = 19;
    float b = 23.5f;
    double c = 23.456;
    string d = "Halo";
    auto e = max(a, b);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    /*kesimpulannya setelah belajar template dan auto itu, kalo kita ga di class, nentuin
        keluarannya itu make object, misal (<int>a("contructornya"). nah kalo ngga diklas
        kita make auto, jadi kita bikin variabel yang tipe datanya auto, abis itu nilainya
        itu bisa hasil  yang diperoleh (contohnya function max diatas).
        
        tapi kaya nya kalo make auto kaya diatas di class itu bisa */
    
    return 0;
}