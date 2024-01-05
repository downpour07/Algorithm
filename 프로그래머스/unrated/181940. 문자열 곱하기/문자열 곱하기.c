#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int k)
{
	int my_string_length = strlen(my_string);
	int answer_length = my_string_length * k;
	char* answer = (char*)malloc((answer_length + 1));
	memset(answer, 0, (answer_length + 1));
	for (int i = 0; i < k; i++)
    {
		strcat(answer, my_string);
	}

	return answer;
}