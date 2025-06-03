#include <iostream>
using namespace std;

class Seseorang {
    public:
    virtual void pesan() = 0;
    //virtual void pesan() {
    //cout << "pesan dari seseorang" << endl;
    //}
};

class Joko : public Seseorang {
    public:
        void pesan() {
            cout << "Pesan dari Joko" << endl;
        }
};