export module roman_converterer;
export import :zero_module;

import <iostream>;
import <string>;

export void convert_to_roman(int number) {
	handle_zero(number);
    int num[] = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
    std::string sym[] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
    int i = 12;
    while (number > 0)
    {
        int div = number / num[i];
        number = number % num[i];
        while (div--)
        {
            std::cout << sym[i];
        }
        i--;
    }
}