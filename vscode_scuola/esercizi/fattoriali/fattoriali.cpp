#include <iostream>

int storeNum()
{
    int n;
    std::cout << "Inserisci un numero";
    std::cin >> n;
    return n;
}


// 4! = 4*3*2*1

int fattoriale(int base)
{
    if (base == 0)
    {
        return 1;
    }
    return fattoriale(base - 1) * base;
}

int main()
{
    std::cout<<fattoriale(storeNum());
}