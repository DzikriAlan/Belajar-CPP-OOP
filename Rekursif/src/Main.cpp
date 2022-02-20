#include<iostream>
using namespace std;

int faktorial(int a){
    if(a <= 1){
        cout << a << " = ";
        return a;
    } else{
        cout << a << " x ";
        return a * faktorial(a-1);
    }
}

int main(int argc, char const *argv[])
{
    int a;
    cout << "Angka : "; cin >> a;
    cout << endl;

    cout << "Hasil faktorial dari " << a << " adalah " << faktorial(a) << endl;
    
    return 0;
}