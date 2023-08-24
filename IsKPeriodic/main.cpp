#include "Periodic.h"

int main()
{
	std::string txt;
	std::cout << "Input an one word: ";
	std::cin >> txt;
	int len = txt.length();
	int k;
	std::cout << "Input a number to check the periodic: ";
	std::cin >> k;

	isKPeriodic(txt, len, k) ? std::cout << "Yes" << std::endl : std::cout << "No";
}