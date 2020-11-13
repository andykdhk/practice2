/*
Date: Nov 12, 2020
Name: Andrew Kang
Goal:
study:
all about scanf and fgets
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <string.h>
#define MAX 1000

/*function definition*/
void convert(char);


int main(void)
{
	/*variables*/
	char str[MAX];

	/*menu*/
	while (1)
	{
		/*input and output*/
		printf("[0:Exit]Type any strings \n");
		int err = scanf("%[^\n]%*c", str);
	
		
		/*menu choice*/
		for (int i = 0; str[i]; i++)//search all the words
		{
			
			if (str[i] == 48) 
			{
				printf("bye\n");
				return 0;
			}
			else
			{			
				convert(str[i]);
				
			}
		
		
		}
		
	
		printf(".\n");
	}

	

	return 0;
}


void convert(char input)
{
	/*case for small*/
	if (input >= 97 && input <= 122)
	{
		printf("%c", input - 32);
	
	}
	/*case for capital*/
	else if (input >= 65 && input <= 90)
	{
		printf("%c", input + 32);
	
	}
	/*case for space*/
	else if (input == 32)
	{
		printf(" ");
	
	}
	/*case for exception*/
	else
	{
		printf("*");
	}

}


/*
People (and especially beginners) should never use scanf("%s") or 
gets() or any other functions that do not have buffer overflow protection, 
unless you know for certain that the input will always be of a specific format (and perhaps not even then).
emember than scanf stands for "scan formatted" and there's precious little less formatted than user-entered data. 
It's ideal if you have total control of the input data format but generally unsuitable for user input.



		
int err = scanf("%[^\n]%*c", str);//%c represents a character just like %d represents a integer, %*c all characters. So totally it means read all characters until you encounter a new line character
			/*error check*/
			/*if (err == 0)//when success return numer of inputs otherwise return 0
			{
				printf("Error: at scanf() return %d\n",err);
				return 0;




*/

/*
scanf() does not contain \n
fgets() contain \n 


fgets(str,strlen(str), stdin);
str[strlen(str) - 1] = '\0'; // get rid of \n

*/