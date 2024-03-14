
#include <iostream>

import Lista;


int main()
{
    Lista::List<int> lista;
    lista.addElement(34);
    lista.addElement(23);
    lista.addElement(12);
    for (int i = 0; i < lista.getSize(); i++) {
        std::cout << lista.getElementAt(i) << std::endl;
    }

}


