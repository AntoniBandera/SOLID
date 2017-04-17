#include <iostream>
#include <type_traits>
using namespace std;

template <class C, class P>
struct HelpClass {
     static const bool output = is_base_of<C,P>::value;

};

template <class C, class P>
bool IsDeriveFrom() {
    bool t =     return HelpClass<C, P>::output;

    return HelpClass<C, P>::output;
}


class A {};
class B : public A {};
class C {};


int main()
{
     cout <<  IsDeriveFrom<B, A>();

return 0;
}
