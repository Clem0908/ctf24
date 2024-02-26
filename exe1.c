#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int ret = 0;
	int len = 0;

	if(argv[1] == NULL)
	{
		printf("Wrong password sry :(\n");
		return EXIT_FAILURE;
	}

	if(argv[1][0] == 'h')
	{
		if(argv[1][1] == 'i')
		{
			if(argv[1][2] == 'n')
			{
				if(argv[1][3] == 't')
				{
					printf("Ahoy :)\nI accept a password of 12 characters, good luck !\n");
					return EXIT_SUCCESS;
				}
			}
		}
	}

	int i = 0;
	while(argv[1][i] != '\0')
	{
		len++;
		i++;
	}

	if(len != 12)
	{
		printf("Wrong password sry :(\n");
		return EXIT_FAILURE;
	}

	if(argc == 2)
	{
		ret = execve("./exe2", argv, NULL);

		if(ret == -1)
		{
			printf("Wrong password sry :(\n");
			return EXIT_FAILURE;
		}
		return EXIT_SUCCESS;
	}

	printf("Wrong password sry :(\n");
	return EXIT_FAILURE;
}
