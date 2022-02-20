// #include<iostream>
// #include<string>
// using namespace std;

// class Player{
//     public:
//         string name;

//         // constructor
//         Player(const char*); // dalam bentuk prototype
//         void display();
//         string getName();
//         string setName(const char*);
// };

// int main(int argc, char const *argv[])
// {
//     Player* playerObject = new Player("Sakura");
//     playerObject-> display();

//     cout << "getName : " << playerObject->name << endl;

//     cout << "Rubah nama" << endl;
//     playerObject->setName("Hinata");
//     playerObject->display();

//     return 0;
// }

// // penjabaran method
// Player::Player(const char* name){
//     this->name = name;
// }

// void Player::display(){
//     cout << "Nama player : " << this->name << endl;
// }

// string Player::getName(){
//     return this->name = name;
// }

// string Player::setName(const char* names){
//     return this->name = names;
// }

#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
    private:
        string nama;
    public:
        Mahasiswa(const char*);
        void tampil();
        string getnama();
        string setnama(const char*);
};

Mahasiswa::Mahasiswa(const char* names){
    this->nama = names;
}

void Mahasiswa::tampil(){
    cout << "Nama player : " << this->nama << endl;
}

string Mahasiswa::getnama(){
    return this->nama;
}

string Mahasiswa::setnama(const char* aran){
    return this->nama = aran;
}

int main(int argc, char const *argv[])
{
    Mahasiswa* madara = new Mahasiswa("Raikage");
    madara->tampil();

    cout << "getNama : " << madara->getnama() << "\n\n";
    cout << "setNama" << endl;
    madara->setnama("Tsunade");
    madara->tampil();

    return 0;
}
