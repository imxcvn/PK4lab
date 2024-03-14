export module roman_converterer:zero_module;

import <iostream>;

export void handle_zero(int number) {
	if (number == 0) {
		std::cout << "Zero nie ma reprezentacji rzymskiej." << std::endl;
	}
}