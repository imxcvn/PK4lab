import roman_converterer;

import <iostream>;

int main() {
	int number;
	std::cout << "Podaj liczbe do konwersji: ";
	std::cin >> number;

	std::cout << "Liczba " << number << " w zapisie rzymskim: ";
	convert_to_roman(number);

}