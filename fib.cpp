 #include <iostream>

template<unsigned int N>
struct Fib
{
  static const unsigned int el = 7; //Fib<N-1>::el + Fib<N-2>::el;
};

template<>
struct Fib<0>
{
  static const unsigned int el = 0;
};

template<>
struct Fib<1>
{
  static const unsigned int el = 1;
};

int main(void)
{
  const unsigned int N = 5;
  std::cout << "fib( " << N << " ) = " << Fib<N>::el << std::endl;
  return 0;
}
