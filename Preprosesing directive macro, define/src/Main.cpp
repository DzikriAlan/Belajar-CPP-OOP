// yang ada "#" itu adalah preprosesing directive
#include<iostream>

#define PI 3.14535
#define BAHASA "Indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A:B)

// akhir dari preprosesing directive

// preprosesing directive tidak memakai memory!
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Nilai PI : " << PI << endl;
    cout << "Bahasa   : " << BAHASA << endl;
    cout << "Kuadrat  : " << KUADRAT(5) << endl;
    cout << "Max      : " << MAX(5,10) << endl;

    #undef BAHASA // undef untuk menghapus
    #define BAHASA "Inggris"
    cout << BAHASA << endl;
    
    return 0;
}
