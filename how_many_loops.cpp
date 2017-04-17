#include<iostream>
#include<stdio.h>

int main()
{
   char t = 100;
   int i = 2 * t;

for (unsigned char j = 0;  j <  i; j++) {
       //std::cout << "I = " << i << std::endl;
    std::cout << sizeof(char) <<std::endl;
    std::cout << (unsigned)t - 101 <<std::endl;
printf("%d\n", j);
   }

return 0;
}
