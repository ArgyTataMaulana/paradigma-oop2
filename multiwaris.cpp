#include <iostream>
using namespace std;

class orang {
    public:
        int umur;
        orang(int Pumur):
        umur (Pumur) {
            cout << "orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

class pekerja : virtual public orang {
    public:
        pekerja(int Pumur) :
        orang(Pumur){
        cout << "pekerja dibuat\n" << endl;
        }
};

class pelajar : virtual public orang {
    public:
        pelajar(int Pumur) :
            orang(Pumur){
                cout << "pelajar dibuat\n" << endl;
            }
};

class budi : public pekerja, public pelajar {
    public:

        budi(int Pumur) :
        pekerja(Pumur),
        pelajar(Pumur),
        orang(Pumur) //hal ini dapat dilakukan jika menggunakan virtual
        {
            cout << "budi dibuat\n" << endl;
        }
};

