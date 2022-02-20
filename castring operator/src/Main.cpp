// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a = 5;
//     float b = 6.67f;
//     char c = 'd';

//     // (int) dan (char) itu adalah castring operator, bentuk umumnya (tipedata)
//     cout << a + (int)b << endl;

//     cout << (char)(c+a) << endl; // ini akan i, karena dikasihnya (char)
//     // nah kenapa i?, karena d itu kalo di ascii itu nilainya 100, jadi pas di tambah 5 maka
//     // dia akan bernilai 105, dan 105 itu huruf i (kalo di ascii) nya

//     return 0;
// }

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    cout << a + (int)b << endl;
    cout << (char)(c + a) << endl;

    return 0;
}
