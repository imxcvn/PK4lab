
#include <iostream>

import modlista;


int main()
{
    Konto konto{ "Adam", "Nowak" };
    std::cout << konto.getImie() << " " << konto.getNazwisko() << std::endl;

}


