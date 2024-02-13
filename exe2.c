#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argv[1][0x00] == 0x59)
	{
		if(argv[1][0x05] == 0x31)
		{
			if(argv[1][0x03] == 0x5a) 
			{
				if(argv[1][0x07] == 0x2e)
				{
					if(argv[1][0x09] == 0x44)
					{
						if(argv[1][0x0b] == 0x2c)
						{
							if(argv[1][0x01] == 0x7e)
							{
								if(argv[1][0x02] == 0x34)
								{
									if(argv[1][0x04] == 0x43)
									{
										if(argv[1][0x06] == 0x54)
										{
											if(argv[1][0x08] == 0x53)
											{
												if(argv[1][0x0a] == 0x72)
												{
													printf("Downloading...\n");
													return EXIT_SUCCESS;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return EXIT_FAILURE;
}
