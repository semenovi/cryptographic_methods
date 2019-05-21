#ifndef CRYPTOGRAPHIC_METHODS
#define CRYPTOGRAPHIC_METHODS

#include <string>

class trithemius
{
	std::string encode;
	std::string input_key;
	std::string input_phrase;
	void generate_encode_table();
	char get_encrypted_char(char current);
public:
	trithemius() {};
	std::string get_encrypt(std::string _input_key, std::string _input_phrase);
};

#endif