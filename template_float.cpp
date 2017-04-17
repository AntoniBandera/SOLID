#include<iostream>

using namespace std;

template <typename T>
struct FigerA {
    FigerA() { cout << "I'm not special \n";}
};

template <>
struct FigerA<int> {
    FigerA() { cout << "I'm special \n";}
};


int main()
{
     FigerA<char> ch;
     FigerA<int> i;

return 0;
}
