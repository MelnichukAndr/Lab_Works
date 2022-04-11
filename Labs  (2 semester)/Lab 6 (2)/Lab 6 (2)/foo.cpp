#include "foo.h"
void foo(char* S, char* S1, int num, int amount)
{
	int prob1 = 0;
	while (prob1 != num - 1 && *S != '\0')
	{
		if (*S == ' ') prob1++;
		S++;
	}
	int prob2 = 0;
	while (prob2 != amount && *S != '\0')
	{
		if (*S == ' ') prob2++;
		*S1 = *S;
		S1++; S++;
	}
	*S1 = '\0';
}
void counter(char* S, int* count)
{
	int slovo;
	int i = 0;
	while (*(S + i) == ' ' && *(S + i) != '\0')
		i++;
	slovo = 0;
	while (*(S + i) != '\0') {
		if (*(S + i) != ' ' && slovo == 0)
		{
			slovo = 1;
			*count = *count+1;
		}
		else if (*(S + i) == ' ')
			slovo = 0;
		i++;
	}
}