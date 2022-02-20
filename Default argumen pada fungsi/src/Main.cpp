// #include<iostream>
// #include<string>
// using namespace std;

// // default argument atau nilai standardnya
// double volume_kubus(double p =1, double l = 1, double t = 2){
//     return p * l * t;
// }

// int main(int argc, char const *argv[])
// {
//     cout << "Volume kubus : " << volume_kubus(3,4,5) << endl;
//     cout << "Volume kubus : " << volume_kubus(3,4) << endl;
//     cout << "Volume kubus : " << volume_kubus(3) << endl;
//     cout << "Volume kubus : " << volume_kubus() << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

double volume_kubus(double p = 1, double l = 1, double t = 2){
    return p*l*t;
}

int main(int argc, char const *argv[])
{
    cout << "Volume kubus : " << volume_kubus(3,4,5) << endl;
    cout << "Volume kubus : " << volume_kubus(3,4) << endl;
    cout << "Volume kubus : " << volume_kubus(3) << endl;
    cout << "Volume kubus : " << volume_kubus() << endl;
    return 0;
}

