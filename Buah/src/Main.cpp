#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int jml_nilai;
    cout << "Jumlah input : "; cin >> jml_nilai;
    
    int nilai[jml_nilai];
    int temp;

    for(int x = 0; x < jml_nilai; x++){
        cout << "Nilai ke-" << x << " : "; cin >> nilai[x];
    }

    for(int a = 1; a <= jml_nilai; a++){
        for(int b = 0; b < jml_nilai-1; b++){
            if(nilai[b] > nilai[b+1]){
                temp = nilai[b];
                nilai[b] = nilai[b+1];
                nilai[b+1] = temp;
            }
        }
    }

    cout << "Hasil sorting : "<< endl;
    for(int c = 0; c < jml_nilai; c++){
        cout << "Nilai ke-" << c << " : " << nilai[c] << endl;
    }

    /* 1 = 4, 7, 10, 9, 3
        2 = 4, 7, 10, 9, 3
        3 = 4, 7, 9, 3, 10
        4 = 4, 7, 9, 3, 10
        
        1 = 4, 7, 9, 3, 10
        2 = 4, 7, 9, 3, 10
        3 = 4, 7, 3, 9, 10
        4 = 4, 7, 3, 9, 10
        
        1 = 4, 7, 3, 9, 10
        2 = 4, 3, 7, 9, 10
        3 = 4, 3, 7, 9, 10
        4 = 4, 3, 7, 9, 10
        
        1 = 3, 4, 7, 9, 10*/
    return 0;
}