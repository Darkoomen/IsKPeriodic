#include "Periodic.h"


bool prefix(std::string txt, int len, int i, int k)
{
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

bool isKPeriodic(std::string txt, int len, int k)
{
	for (int i = k; i < len; i += k)
	{
		if (!prefix(txt, len, i, k))
		{
			return false;
		}
	}
	return true;
}