#include <iostream>

template <int Exp, int Value>
struct Pow {
    constexpr static int value = Value*Pow<Exp-1, Value>::value;
};

template<int Value>
struct Pow<1, Value>
{
    constexpr static int value = Value;
};


template<int Value>
struct Pow<0, Value>{
    constexpr static int value = 1;
};

int main()
{
    std::cout << Pow<2,3>::value << "\n";

    return EXIT_SUCCESS;
}