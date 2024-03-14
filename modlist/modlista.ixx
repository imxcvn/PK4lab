export module modlista;
import <memory>;
import <string>;

export class Konto;

class Konto {
private:
	std::string imie;
	std::string nazwisko;
public:
	Konto(const std::string& i, const std::string& n) {
		imie = i;
		nazwisko = n;
	}
	const std::string& getImie() {
		return imie;
	}
	const std::string& getNazwisko() {
		return nazwisko;
	}
};