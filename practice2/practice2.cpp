/*
Date: Nov 12, 2020
Name: Andrew Kang
Goal:
study:
when to use unsigned char
when,how to use scanf
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#define MAX 1000



void convert(int);


int main(void)
{
	/*variables*/
	unsigned char str[MAX];

	/*menu*/
	while (1)
	{
		/*input and output*/
		printf("[0:Exit]Type any strings \n");
		int err = scanf("%s", str);
			/*error check*/
			if (err == 0)//when success return numer of inputs otherwise return 0 
			{
				printf("error\n");
				return 0;
			}

		/*menu choice*/
		for (int i = 0; str[i]; i++)//search all the words
		{
			if (str[i] == 48) //ascci for 0 is 48
			{
				printf("bye\n");
				return 0;
			}
			else
			{
			
				convert(str[i]);
			}
		
		
		}
		
	
	
	}



	return 0;
}


void convert(int input)
{




}