#include <iostream>
using namespace std;

template <typename T, typename U>
struct i_same {
    static const int value1 = 0;
};

template <typename T>
struct i_same<T,T> {
     static const int value1 = 1;
};

template <class A, class B>
int IsSameClass() {
    A a;
    B b;
    if (a==b) {}
    return 2;
};


class Aa {
};
class Ba {};
int main()
{
    cout << IsSameClass<Aa,Ba>() << endl;
return 0;
}
