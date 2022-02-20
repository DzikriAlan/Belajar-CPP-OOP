// #include<iostream>
// #include<string>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // perbandingan string
//     string input;
//     string nama_rahasia("Madara");

//     // kalot true, maka program while nya berjalan dan tidak akan berhenti (kalo ga ada break)
//     // tapi kalo false, program while itu tidak berjalan (langsung dilewatin ke perintah selanjutnya)
//     while(true){ 
//         cout << "Tebak nama : "; cin >> input;
//         if(input == nama_rahasia){
//             cout << "Tebakkan anda benar!" << endl;
//             break;
//         }

//         cout << "Tebakan anda salah!" << endl;
//     }

//     cout << "Program Selesai!" << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    string nama("Madara");

    while(true){
        cout << "Tebak nama : "; cin >> input;
        if(input == nama){
            cout << "Tebakkan anda benar!" << endl;
            break;
        }
        cout << "Tebakkan anda salah!" << endl;
    }
    
    cout << "Program Selesai!";

    return 0;
}