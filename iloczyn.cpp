#include<iostream>

void iloczyn(int *A, int *B, int N) {
    int sum = 1;
    for (unsigned j = 0; j < N; j++) {
         sum = 1;
         for (unsigned i = 0; i < N; i++) {
            if (i != j) {
                sum *= A[i];
            }
            B[j] = sum;
        }
    }
}



int main()
{
    int A[4] = {2, 1, 5, 9};
    int B[4];
    iloczyn(A, B, 4);
    for (int i = 0; i < 4; i++) {
        std::cout << B[i] << std::endl;
    }

return 0;
}
