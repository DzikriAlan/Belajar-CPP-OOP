#include<iostream>

#define ID 1
#if ID == 1
    #define LANG "Indonesia"
#else
    #define LANG "English"
#endif
// wah mantappp, sama kaya analogi if yang ada di main!

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Bahasa dipilih : " << LANG << endl;
    
    return 0;
}
