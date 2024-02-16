#include <Header.h>
#include <iostream>

namespace mt
{
	std::string convert(int count)
	{
		std::string s = "";
		while (count > 0) {
			s += (count % 10) + '0';
			count /= 10;
		}
		std::string res = "";
		for (int i = s.length() - 1; i >= 0; i--) {
			res += s[i];
		}
		return res;
	}

	std::string Time()
	{
		
		std::time_t t = std::time(0);
		std::tm* now = std::localtime(&t);

		std::string data = convert(now->tm_year + 1900) + '-'
		+ convert(now->tm_mon + 1) + '-'
		+ convert(now->tm_mday) + '-'
		+ convert(now->tm_hour) + '-'
		+ convert(now->tm_min) + '-' + convert(now->tm_sec);

		return data;
	}
}
