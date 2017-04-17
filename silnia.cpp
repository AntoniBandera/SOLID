#include <iostream>

//template<int a>
//struct si<a> {
//    static const int value = 1;
//};
//   return a-1;
//}



//template<>
//struct silnia<3> {
 //   static const int el = 2;
//};

template<int T>
struct Silnia {
    static const int el = 2;

};
template<>
struct Silnia<3> {
    static const int el = 8;

};





int main()
{
     std::cout << Silnia<3>::el << std::endl;
return 0;
}
