// #include<iostream>
// #include<string>

// using namespace std;

// // global scope
// int x = 10; // variabel global

// int ambilGlobal(){ // mengambil variabel global
//     return x;
// }

// int xLocal(){ // variabel local scopenya xLocal()
//     int x = 4;
//     return x;
// }

// int main(int argc, char const *argv[])
// {
//     cout << "1. Variabel global      : " << x << endl;

//     int x = 9; // variabel local untuk main
//     cout << "2. Variabel Local main  : " << x << endl; // ini nilainya 9, karena variabel globalnya ke overload sama variabel local
//     cout << "3. Variabel ambilGlobal : " << ambilGlobal() << endl;
//     cout << "4. Variabel local main  : " << x << endl;
//     cout << "5. Variabel xLocal      : " << xLocal() << endl;
//     cout << "6. Variabel local main  : " << x << endl;

//     cout << "7. Variabel local main  : " << x << endl;
//     {
//         cout << "8. Variabel local main : " << x << endl;
//         // block scope
//         int x = 1;
//         cout << "9. Variabel local main : " << x << endl;
//         cout << "10. Variabel global    : " << ambilGlobal() << endl; // cara lain ngakses v_global tanpa make ambilGloba(), yaitu make ::
//     }
//     cout << "11. Variabel local main : " << x << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int x = 10; // variabel global

int ambilGlobal(){
    return x;
}

int xLocal(){
    int x = 4;
    return x;
}

int main(int argc, char const *argv[])
{
    cout << "1. Variabel global     : " << x << endl;

    int x = 9;
    cout << "2. Variabel local      : " << x << endl;
    cout << "3. Variabel ambilGlobal : " << ambilGlobal() << endl;
    cout << "4. Variabel local       : " << x << endl;
    cout << "5. Variabel xLocal      : " << xLocal() << endl;
    cout << "6. Variabel local main  : " << x << endl;
    {
        cout << "7. Variabel local main  : " << x << endl;
        int x = 2;
        cout << "8. Variabel block       : " << x << endl;
        cout << "9. Variabel ambilGlobal : " << ambilGlobal() << endl;
        cout << "10. Variabel xLocal     : " << xLocal() << endl;
    }
    cout << "11. Variabel local main     : " << x << endl;
    return 0;
}
