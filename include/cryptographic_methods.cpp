#include "cryptographic_methods.h"

void trithemius::generate_encode_table()
{
	int pos = 0;
	encode = input_key;
	for (int i = input_key.length; i < 28; i++)
	{
		for (char j = 97; j < 125; j++)
		{
			for (int k = 0; k < input_key.length; k++)
			{
				if ()
			}
		}
	}
}

char trithemius::get_encrypted_char(char current)
{
	for (int i = 0; i < input_phrase.length; i++)
	{
		if (encode[i] == current)
		{
			return encode[(i + 7) % 28];
		}
	}
}

std::string trithemius::get_encrypt(std::string _input_key, std::string _input_phrase)
{
	input_key = _input_key;
	input_phrase = _input_phrase;
	generate_encode_table();
	for (int i = 0; i < input_phrase.length; i++)
	{

	}
}