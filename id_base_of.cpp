#include <iostream>
#include <type_traits>
using namespace std;

//template <class C, class P>
//struct HelpClass {
//     static const bool output = is_base_of<C,P>::value;

//};

template <class C, class P>
bool IsDeriveFrom() {
    return   is_base_of<C, P>::value;

}


class A {};
class B : public A {};
class C {};


int main()
{
     cout <<  IsDeriveFrom<A, A>();

return 0;
}
