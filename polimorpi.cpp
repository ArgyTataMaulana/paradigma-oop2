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

class lia :public Seseorang {
    public:
    void pesan() {
        cout << "Pesan dari Lia" << endl;
    }
};

int main() {
    Seseorang* obyek;
    Joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    //a.Seseorang::pesan();
    //b.Seseorang::pesan();
    return 0;
}