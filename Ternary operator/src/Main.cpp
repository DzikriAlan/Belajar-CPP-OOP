// #include<iostream>
// #include<string>

// using namespace std;

// // ternary operator = ?
// // ternary operator itu untuk ngecek, apakah kondisi tersebu itu benar atau tidak, misalnya gini
// // kondisi ? hasil1 : hasil2

// int main(int argc, char const *argv[])
// {
//     int a,b;
//     string hasil1, hasil2, output;

//     hasil1 = "Madara";
//     hasil2 = "Hagoromo";

//     a = 5;

//     cout << "Masukkan angka?"; cin >> b;

//     //       kondisi | perbandingan
//     output = (a < b) ? hasil1 : hasil2;

//     cout << output << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    string kondisi, hasil1, hasil2;

    a = 5;

    cout << "Masukkan angka : "; cin >> b;

    hasil1 = "Madara";
    hasil2 = "Hagoromo";

    kondisi = (a > b)? hasil1:hasil2;

    cout << kondisi;

    return 0;
}
