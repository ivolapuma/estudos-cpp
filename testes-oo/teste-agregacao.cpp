# include <iostream>

using namespace std;

/**
 * As associações entre as classes são do tipo agregação, ao destruir o objeto de um, 
 * os objetos associados nao serao destruidos.
 */

class Baz {
    public:
        int i;
        Baz() { cout << "criou objeto de Baz\n"; }
        ~Baz() { cout << "destruiu objeto de Baz\n"; }
};

class Bar {
    public:
        Baz *baz;
        Bar() { cout << "criou objeto de Bar\n"; }
        ~Bar() { cout << "destruiu objeto de Bar\n"; }
};

class Foo {
    public:
        Bar *bar;
        Foo() { cout << "criou objeto de Foo\n"; }
        ~Foo() { cout << "destruiu objeto de Foo\n"; }
};

int main() {
    Foo *foo = new Foo;
    foo->bar = new Bar;
    foo->bar->baz = new Baz;
    cout << "chamando delete...\n";
    delete(foo);
    /*
    A saida dessa execucao sera:
    
    criou objeto de Foo
    criou objeto de Bar
    criou objeto de Baz
    chamando delete...
    destruiu objeto de Foo
    */
    return 0;
}