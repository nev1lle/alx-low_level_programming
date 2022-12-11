#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void password(passwordlength)
{
	int passwordlength = 0;
	char list[] =
		"1234567890QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm~`!@#$%^&*()-_+={}[]|/*-+\\\"\':;?.>,<";
	srand(time(NULL));/** 
			   * time = seed value which changes everytime the
			   * program runs.
			   */

	if (passwordlength > 0)
	{
		for (int i = 0; i < passwordlength; i++)
			printf("%c", list[rand() % (sizeof list - 1)]);
	}

	return(0);
}
