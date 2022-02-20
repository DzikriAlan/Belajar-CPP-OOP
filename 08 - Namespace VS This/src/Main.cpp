// #include<iostream>
// #include<string>
// using namespace std;

// class ClassTypes{
//     public:
//         string datastr;
//         double datadouble;
//         double m_datadouble;

//         ClassTypes(const char* datastr, double datadouble){
//             // dengan menggunakan namespace dari class
//             ClassTypes::datastr = datastr;

//             // dengan menggunakan "this"
//             cout << this << endl;
//             cout << this->datastr << endl;
//             this->datadouble = datadouble;

//             // dengan menggunakan penamaan;
//             m_datadouble = datadouble;
//         }
// };

// namespace koni{
//     // member functionn
// class Player{
//     public:
//         string name;
//         double power;
//         int healt;

//         Player(const char* name, double power){
//             Player::setName(name);
//             this->setPower(power);
//         }

//         void setName(const char* name){
//             this->name = name;
//         }

//         void setPower(double power){
//             this->power = power;
//         }

//         void setHealt(int);
//     };
// };


// void koni::Player::setHealt(int Healt){
//    this->healt = Healt;
// }

// int main(int argc, char const *argv[])
// {
//     ClassTypes* object1 = new ClassTypes("Object1", 0.5);
//     cout << object1->datastr << endl;
//     cout << object1->datadouble << endl;
//     cout << object1->m_datadouble << endl;

//     koni::Player* player1 = new koni::Player("Madara", 99.9);
//     cout << player1->name << endl;
//     player1->setHealt(10);
//     cout << player1->healt << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Shinobi{
    public:
        string nama;
        double chakra;

        Shinobi(const char* nama, double chakra){
            this->nama = nama;
            this->chakra = chakra;

            cout << this << endl;
            cout << this->nama << endl;
        }
};

namespace kaguya{
    class Kage{
        public:
            string daerah;
            int biju;

            Kage(const char* daerah, int biju){
                this->daerah = daerah;
                this->biju = biju;
            }

            void setDaerah(const char* daerah){
                this->daerah = daerah;
            }
    };
};

int main(int argc, char const *argv[])
{
    Shinobi* naruto = new Shinobi("Naruto", 99.99);
    cout << naruto->chakra << endl;

    kaguya::Kage* darui = new kaguya::Kage("Kumogakure", 8);
    cout << "\n" << darui->daerah << endl;
    cout << darui->biju << endl;
    darui->setDaerah("Amegakure");
    cout << darui->daerah << endl;
    
    return 0;
}
