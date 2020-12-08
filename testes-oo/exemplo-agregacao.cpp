#include <iostream>

using namespace std;

class Endereco {
    public:
        string logradouro;
        string complemento;
        string cep;
        string cidade;
        string uf;
        Endereco() {
            cout << "criou objeto de Endereco\n";
        }
        ~Endereco() {
            cout << "destruiu objeto de Endereco\n";
        }
        void mostrar() {
            cout << logradouro + complemento + "\n";
        }
};

class Pessoa {
    public:
        string nome;
        string cpf;
        Endereco* endereco;
        Pessoa() {
            cout << "criou objeto de Pessoa\n";
        }
        ~Pessoa() {
            cout << "destruiu objeto de Pessoa\n";
        }
        void mostrar() {
            cout << nome+"\n";
        }
        
};

int main() {

    Pessoa* pessoa = new Pessoa;
    pessoa->nome = "Ivo";

    pessoa->endereco = new Endereco;
    pessoa->endereco->logradouro = "Rua Palestra Italia, 1";
    pessoa->endereco->complemento = " Portao A";

    pessoa->mostrar();
    pessoa->endereco->mostrar();

    Endereco* allianzParque = pessoa->endereco;

    cout << "chamando funcao delete() para destruir objeto de Pessoa...\n";
    delete(pessoa);

    allianzParque->mostrar();

    return 0;
}