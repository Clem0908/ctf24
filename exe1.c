#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
	int ret = 0;
	int len = 0;

	if(argv[1] == NULL)
	{
		return EXIT_FAILURE;
	}

	int i = 0;
	while(argv[1][i] != '\0')
	{
		len++;
		i++;
	}

	if(len != 12)
	{
		return EXIT_FAILURE;
	}

	if(argc == 2)
	{
		ret = execve("./exe2", argv, NULL);

		if(ret == -1)
		{
			return EXIT_FAILURE;
		}
		return EXIT_SUCCESS;
	}

	return EXIT_FAILURE;
}
