#include <iostream>

class D {
public:
   void foo() {
        std::cout << "Foooooo" << std::endl;
    }
};


class C: virtual  public D {
public: 
//    void foo() { std::cout << "sdfds";}
};

class B: virtual  public D {
public:
//    void foo() { std::cout << "sdfds";}
};

class A: public B, public C {
public:
//      void foo() { std::cout << "sdfdf"; }
};

int main() {
    A a;
    a.foo();
return 0;
}
