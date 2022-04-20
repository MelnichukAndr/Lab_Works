
#include "foo.h"

void left(char* s, char* s1, int n, int l)
{
	int k = 1; int j = 0;

	for (int i = 0; i < n + 1; i++, j++)
	{
		if (i < l * k)
		{
			*(s1 + j) = *(s + i);
		}
		if (i == l * k)
		{

			if (*(s + i) == ' ')
			{
				*(s1 + j) = '\n';
				k++;
			}
			if (*(s + i) != ' ')
			{
				*(s1 + j) = '\n';
				j++;
				*(s1 + j) = *(s + i);
				k++;
			}

		}

		if (i == n)
			*(s1 + j) = '\0';
	}

}
