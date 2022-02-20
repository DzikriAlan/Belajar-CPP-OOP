// #include<iostream>
// using namespace std;

// void kuadrat(int &b){
//     b = b*b;
// }

// int main(int argc, char const *argv[])
// {
//     int a = 2;
//     cout << "Address a : " << &a << endl;
//     cout << "Nilai   a : " << a << endl;

//     int &b = a;
//     cout << "Address b : " << &b << endl;
//     cout << "Nilai   b : " << b << endl;

//     kuadrat(b);
//     cout << "Kuadrat   b : " << b << endl;
//     cout << "Kuadrat   a : " << a << endl;

//     return 0;
// }

#include<iostream>
using namespace std;

void kuadrat(int &b){
    b = b*b;
}

int main(int argc, char const *argv[])
{
    int a = 2;
    cout << "Address a : " << &a << endl;
    cout << "Nilai   a : " << a << endl << endl;

    int &b = a;
    cout << "Address b : " << &b << endl;
    cout << "Nilai   b : " << b << endl << endl;

    kuadrat(b);
    cout << "Kuadrat a : " << a << endl;
    cout << "Kuadrat b : " << b << endl; 

    return 0;
}
