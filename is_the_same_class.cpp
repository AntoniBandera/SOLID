#include <iostream>
using namespace std;

template <typename T, typename U>
struct i_same {
    static const int value1 = 0;
};

template <class T>
struct i_same<T,T> {
     static const int value = 1;
};

template <class A, class B>
int IsSameClass() {
//    static const int value = 1;
    return i_same<A,B>::value1;
};


class Aa {
};
class Ba {};
int main()
{
    cout << IsSameClass<Aa,Ba>() << endl;
return 0;
}
