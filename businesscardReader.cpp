#include <iostream>
#include <fstream>
#include <string>

std::string name;
std::string lastName;
int phoneNumber;


int main() {

	std::fstream file;
	file.open("Business_Card.txt", std::ios::in);

	if (file.good() == false) {
		std::cout << "File doesn't exist!";
		exit(0);
	}

	std::string line;
	int lineNumber = 1;

	while (std::getline(file, line)) {
		switch (lineNumber) {
		case 1: {
			name = line;
			break;
		}
		case 2: {
			lastName = line;
			break;
		}
		case 3: {
			phoneNumber = atoi(line.c_str());
			break;
		}
		}

		lineNumber++;
	}

	file.close();

	std::cout << name << std::endl;
	std::cout << lastName << std::endl;
	std::cout << phoneNumber << std::endl;

	return 0;
}