// #include<iostream>
// #include<fstream>
// #include<string>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     ofstream myfile;

//     // ios::out = default, operasi output;
//     // ios::app = menuliskan pada akhir baris;
//     // ios::trunc = default, membuat file jika tidak ada, dan jika ada akan dihapus dan dibuat baru;

//     myfile.open("Data1.txt", ios::out);
//     myfile << "\ntuliskan pada data1";    
//     myfile.close();

//     myfile.open("Data2.txt", ios::trunc);
//     myfile << "\ntuliskan pada data2";    
//     myfile.close();

//     myfile.open("Data3.txt", ios::app);
//     myfile << "\ntuliskan pada data3";    
//     myfile.close();
    
//     return 0;
// }

#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream myfile;

    myfile.open("data1.txt", ios::out);
    myfile << "\nData1 dimasukkan kembali";
    myfile.close();

    myfile.open("data2.txt", ios::trunc);
    myfile << "\nData2 dimasukkan kembali";
    myfile.close();

    myfile.open("data3.txt", ios::app);
    myfile << "\nData3 dimasukkan kembali\n";
    myfile << 123456;
    myfile.close();

    myfile.open("data4.txt", ios::app);
    myfile << "\nData4 dimasukkan";
    myfile.close();

    myfile.open("data5.txt", ios::app);
    myfile << "\nData5 dimasukkan";
    myfile.close();

//     ifstream myfile;
//     string data;

//     myfile.open("data4.txt");
//     if(myfile.is_open()){
//         while(getline(myfile, data)){
//             cout << data << endl;
//         }
//     } else{
//         myfile.close();
//     }
    
    return 0;
}
