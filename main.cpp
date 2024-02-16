#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <Header.h>

int main()
{

	auto time = std::time(nullptr);

	std::fstream file("assets/input.txt");

	std::string line, data;
	int count = 0;
	std::string num;
	while (!file.eof())
	{
		getline(file, line);
		std::cout << line << "\n";
		count++;
		num = mt::convert(count);
		data += line + "\n";
	}

	file.seekg(0);
	std::cout << data;
	//if (!count)
	//{
	//	file << convert(count + 1) + " ";
	//}
	//else
	//{
		//data += count + " ";
		file << data;
	//}

	file << num<<" "<<mt::Time();

	file.close();

}


