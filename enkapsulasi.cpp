#include <iostream>
using namespace std;

class remoteLampu {
    private:
        string saklarno[10];

    public:
        void setSaklarNo(int i, string value) {
            saklarno[i] = value;
        }
        string getSaklarNo(int i) {
            return saklarno[i];

        }
};

