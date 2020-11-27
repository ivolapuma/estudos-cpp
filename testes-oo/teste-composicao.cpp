# include <iostream>

using namespace std;

/**
 * As associações entre as classes sao do tipo composição. Ao destruir o objeto de um, os demais
 * objetos tbm sao destruidos. 
 */

class Baz {
    public:
        int i;
        Baz() { cout << "criou objeto de Baz\n"; }
        ~Baz() { cout << "destruiu objeto de Baz\n"; }
};

class Bar {
    public:
        Baz baz;
        Bar() { cout << "criou objeto de Bar\n"; }
        ~Bar() { cout << "destruiu objeto de Bar\n"; }
};

class Foo {
    public:
        Bar bar;
        Foo() { cout << "criou objeto de Foo\n"; }
        ~Foo() { cout << "destruiu objeto de Foo\n"; }
};

int main() {
    Foo foo; // cria um objeto de Foo (chamada do construtor é implícita)
    // o destrutor será chamado automaticamente ao término do programa
    return 0;
    /*
    A saida dessa execucao sera:
    
    criou objeto de Baz
    criou objeto de Bar
    criou objeto de Foo
    destruiu objeto de Foo
    destruiu objeto de Bar
    destruiu objeto de Baz
    */
}