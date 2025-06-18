#include "phonebook.hpp"
#include <iostream>
#include <string>

int main() {
	PhoneBook phoneBook;
	std::string command;

	std::cout << "📞 Welcome to My Awesome PhoneBook!" << std::endl;
	std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;

	while (true) {
		std::cout << "👉 Enter command: ";
		std::getline(std::cin, command);

		if (std::cin.eof()) {
			std::cout << "\n👋 EOF detected. Exiting..." << std::endl;
			break;
		}

		if (command == "ADD") {
			phoneBook.addContact();
		}
		else if (command == "SEARCH") {
			phoneBook.searchContact();
		}
		else if (command == "EXIT") {
			std::cout << "👋 Goodbye!" << std::endl;
			break;
		}
		else {
			std::cout << "❌ Invalid command. Try ADD, SEARCH, or EXIT." << std::endl;
		}
	}

	return 0;
}
