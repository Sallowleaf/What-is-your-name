#include <iostream>
#include "stdafx.h"
#include <string>



int main()
{
	std::cout << "What is your name?/n";
	std::string Name;
	std::cin >> Name;
	std::cout <<"Are you sure" << Name << "is your real name?";
	std::string Answer;
	std::cin >> Answer;
		
		if (Answer == "yes")
		
		{
			std::cout << "Ok, Hello," << Name << "\n";
		}
		
		else

		{
			std::cout << "I don't have time for this, Go away.\n";
		}
    return 0;
}

