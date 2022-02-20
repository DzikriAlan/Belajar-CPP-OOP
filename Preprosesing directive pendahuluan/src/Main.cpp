#include<iostream>

#define PI 3.1459    // preprosesor directive itu, ga pake memory
// kalo ada (#) itu tidak memakai memory

using namespace std;

double pi = 3.14562; // kalo ini memakai memory

int main(int argc, char const *argv[])
{
    cout << "Nilai  pi : " << pi << endl;
    cout << "Alamat pi : " << &pi << endl << endl;
    cout << "Nilai  PI : " << PI << endl;
    //cout << "Alamat PI : " << &PI << endl; 
    // diatas akan error karena ya emang dia (preprosesor directiv) mah ga punya memory
    
    return 0;
}
