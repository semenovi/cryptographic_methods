#include "cryptographic_methods.h"
#include <iostream>
#include <conio.h>

void main_menu()
{
	int key = 0;
	int pos = 0;
	while (key != 27)
	{
		std::system("cls");
		std::cout << "Choose cryptographic method:" << std::endl << std::endl;
		pos == 0 ? std::cout << " >  " : std::cout << "    ";
		std::cout << "trithemius" << std::endl;
		pos == 1 ? std::cout << " >  " : std::cout << "    ";
		std::cout << "second" << std::endl;
		pos == 2 ? std::cout << " >  " : std::cout << "    ";
		std::cout << "third" << std::endl;
		key = _getch();
		if (key == 0 || key == 224)
		{
			key = _getch();
		}
		if (key == 72)
		{
			pos = (pos + 3 + 2) % 3;
		}
		else if (key == 80)
		{
			pos = (pos + 1) % 3;
		}
		else if (key == 13)
		{
			if (pos == 0)
			{
				trithemius_menu();
			}
		}
	}
}

void trithemius_menu()
{
	int key = 0;
	int pos = 0;
	char* input_key = "";
	char* input_phrase = "";
	while (key != 27)
	{
		std::system("cls");
		std::cout << "Enter key:" << std::endl << std::endl << " >  ";
		std::cin >> input_key;
		std::cout << "Enter phrase:" << std::endl << std::endl << " >  ";
		std::cin >> input_phrase;
		trithemius f;
		f.get_encrypt(input_key, input_phrase);
		std::cout << "Encrypted:" << f.get_encrypt(input_key, input_phrase) << std::endl;
		std::cout << "Press esc to continue" << std::endl;
		key = _getch();
		if (key == 27)
		{
			main_menu();
		}
	}
}

int main(int argc, char * argv[])
{
	// esc - 27
	// enter - 13
	// up - 224 72
	// down - 224 80
	int key = 0;
	std::system("color f0");
	main_menu();
	return 0;
}