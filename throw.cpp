#include <iostream>

class A {
public:
    A() {   }
    ~A() {
std::cout << "Niszczę obiekt";
    niszcz();
    throw 45;
    }
 void niszcz() { throw 52; }
};

int main(int argc, const char * argv[]) {
    try {

        A *an = new A;
     throw 42;
 //    throw 52;
    delete an;

    } catch(int a) {
        std::cout << a;
    }

return 0;
}
