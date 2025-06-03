#include <iostream>
using namespace std;

class baseClass {
    public: 
        virtual void perkenalan() final{
            cout << "Halo nama saya function dari base class";
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalan1() {
            cout << "Halo nama saya function dari derived class";
        }
};

int main() {
    derivedClass a;
    a.perkenalan();
    
    return 0;
}