#include <iostream>


class Something {
public:
    Something() {
        topSecretValue = 42;
    }
public:
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

class ReplicaSomething {
public:
    int  getTopSecretValue() { return topSecretValue; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};


int main()
{
     Something a;
     ReplicaSomething* b = reinterpret_cast<ReplicaSomething*>(&a);
     std::cout << b->getTopSecretValue();
return 0;
}
