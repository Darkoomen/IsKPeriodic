#include "Periodic.h"


bool prefix(std::string &txt, int i, int k)
{
	int len = txt.length();
	if ((i + k) > len)
		return false;
	for (int j = 0; j < k; j++)
	{
		if (txt[i] != txt[j])
		{
			return false;
		}
		i++;
	}
	return true;
}

bool isKPeriodic(std::string &txt, int k)
{
	int len = txt.length();
	for (int i = k; i < len; i += k)
	{
		if (!prefix(txt, i, k))
		{
			return false;
		}
	}
	return true;
}