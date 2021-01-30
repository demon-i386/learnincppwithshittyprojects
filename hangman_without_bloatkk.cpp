#include <iostream>

int main() {
	unsigned int	x{ 0 };
	std::string	word("aviao");
	char		letter;

	std::cout << "letter: ";
	std::cin >> letter;

	for (int x = 0; x < word.size(); x++) {
		if (word.at(x) == letter) {
			std::cout << "wow ur a god in this game lmao ur really god, want a medal?: " << std::endl;
			return 0;
		}
		else {
			continue;
		}
	}
	std::cout << "lmao ur n00b fuckoff please" << std::endl;
}
