// #include<iostream>
// using namespace std;

// void fungsi(int *b){
//     cout << "Address a : " << b << endl;
//     cout << "Nilai   a : " << *b << endl;
// }

// void kuadrat(int *valPtr){
//     *valPtr = (*valPtr)* (*valPtr);
// }

// int main(int argc, char const *argv[])
// {
//     int a = 5;
//     fungsi(&a); // pointer dengan input pointer

//     kuadrat(&a);
//     cout << "Kuadrat dari a : " << a;

//     return 0;
// }

#include<iostream>
using namespace std;

void tampil(int *a){
    cout << "Address a : " << a << endl;
    cout << "Nilai   a : " << *a << endl;
}

int kuadrat(int *a){
    return (*a)*(*a);
}

int main(int argc, char const *argv[])
{
    int a = 5;
    tampil(&a);
    cout << "Kuadrat dari nilai a : " << kuadrat(&a);

    return 0;
}
