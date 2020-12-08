#include <iostream>

using namespace std;

class Janela {
    public:
        float area;
        Janela() {
            cout << "criou objeto de Janela\n";
        }
        ~Janela() {
            cout << "destruiu objeto de Janela\n";
        }
};

class Parede {
    public:
        Janela janela;
        float area;
        Parede() {
            cout << "criou objeto de Parede\n";
        }
        ~Parede() {
            cout << "destruiu objeto de Parede\n";
        }
};

class Piso {
    public:
        float area;
        Piso() {
            cout << "criou objeto de Piso\n";
        }
        ~Piso() {
            cout << "destruiu objeto de Piso\n";
        }
};

class Teto {
    public:
        float area;
        Teto() {
            cout << "criou objeto de Teto\n";
        }
        ~Teto() {
            cout << "destruiu objeto de Teto\n";
        }
};

class Casa {
    public:
        Parede parede;
        Piso piso;
        Teto teto;
        Casa() {
            cout << "criou objeto de Casa\n";
        }
        ~Casa() {
            cout << "destruiu objeto de Casa\n";
        }
};

int main() {
    Casa casa;
    return 0;
}
