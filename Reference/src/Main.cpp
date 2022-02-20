#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;
    cout << "Alamat  a : " << &a << endl;
    cout << "Nilai   a : " << a << endl << endl;
    
    // reference
    int &b = a;
    cout << "Alamat  b : " << &b << endl;
    cout << "Nilai   b : " << b << endl << endl;

    b = 3;
    cout << "Nilai   a : " << a << endl;
    cout << "Nilai   b : " << b << endl << endl;
    
    a = 4;
    cout << "Nilai   a : " << a << endl;
    cout << "Nilai   b : " << b << endl << endl;

    // kenapa mereka sama?, karena ALAMAT MEREKA SAMAAA CUY

    return 0;
}
