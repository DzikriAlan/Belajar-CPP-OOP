// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a = 5;

//     // pointer
//     int *aPtr = nullptr;
//     aPtr = &a;

//     // int a mempunyai nilai dan address (alamat)
//     cout << "Nilai dari a  : " << a << endl;
//     cout << "Alamat dari a : " << aPtr << endl;

//     // deferencing, mengambil data dari sebuah pointer
//     a = 9;
//     cout << "Mengambil nilai dari pointer aPtr : " << *aPtr << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;

    int *aPtr = nullptr;
    aPtr = &a;

    cout << "Nilai  a : " << a << endl;
    cout << "Alamat a : " << aPtr << endl;
    
    a = 2;
    cout << "Mengambil nilai dari pointer aPtr : " << *aPtr << endl;

    return 0;
}