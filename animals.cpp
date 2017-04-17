#include<iostream>
#include<typeinfo>
using namespace std;

class Animal {
    string name;
public:
    Animal() { cout << "Utowrzylem zwierze\n"; wydajDzwiek();}
    void oddychaj() {
        cout << "Odycham\n";
    }
    virtual void wydajDzwiek() { cout << "Zwierze wydaje dzwiek";}
    virtual ~Animal() {
        cout << "Usunalem zwierze\n";
        wydajDzwiek();
    }
};

class Dog : public Animal {
    string rasa;
public:
     Dog() { cout << "Utowrzylem psa\n";  wydajDzwiek();}

   void wydajDzwiek() {
        cout << "Szczekam\n";
   }
  ~Dog() {
        cout << "Usunalem psa\n";
        wydajDzwiek();
    }
};

class Cat : public Animal{
public:
   void wydajDzwiek() {
        cout << "Mial\n";
   }
   ~Cat() {
        cout << "Usunalem kota\n";
    }

};

class Fish {
public:
   void wydajDzwiek() {
        cout << "Bool Bool\n";
   }
};

int main()
{
   // Animal *kot1 = new Cat();
Animal     *pies1 = new Dog() ;
  //  Animal *pies2 = new Dog();
   // Fish *ryba1 = new Fish();

   // kot1->oddychaj();
//    pies1->oddychaj();
//    ryba1->oddychaj();
//    cout << typeid(*pies1).name() << endl;
//if (Animal == Animal) { cout << "Sa takie same\n"; }
   // delete kot1;
    delete pies1;
    //delete pies2;
   // delete ryba1;
return 0;
}
