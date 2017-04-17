#include <iostream>


template<int a>
struct sil {
    const static long long val = a * sil<a-1>::val;
};

template<>
struct sil<1> {
    const static long long val = 1;
};

/*
template<>
int sil<19>() {
    return 19;
}

template<>
int sil<18>() {
    return 18;
}
*/

int main()
{
  //  std::cout << sil<19>() << std::endl;
   // std::cout << sil<18>() << std::endl;
    std::cout << sil<20>::val << std::endl;
return 0;
}
