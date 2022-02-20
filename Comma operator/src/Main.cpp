// #include<iostream>
// using namespace std;

// void tampil(int a){
//     cout << a << endl;
// }

// int main(int argc, char const *argv[])
// {
//     int a;
//     int b;
//     int c;

//     // a itu sebagai tuan rumah untuk b dan c, agar mereka ber3 bisa teroutput ke outputan
//     a = (b=3,tampil(b), c=2,tampil(c), a=7); 

//     cout << a << endl;

//     return 0;
// }

#include<iostream>
using namespace std;

void tampil(int a){
    cout << a << endl;
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    a = (b=1, tampil(b), c=2, tampil(c), a=2);

    cout << a << endl;

    return 0;
}
