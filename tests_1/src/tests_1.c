/*
 ============================================================================
 Name        : tests_1.c
 Author      : eintetta
 Version     : v1
 Copyright   : Your copyright notice
 Description :  in C, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;
	while (card_name[0]!='X')
	{
		puts ("Value Card: ");
		scanf("%2s", card_name);
		int val = 0;
		switch (card_name[0])
		{
		case 'a':
		case 'b':
		case 'c':
			val = 10;
			break;
		case 'd':
			val=11;
			break;
		case 'X':
			continue;
		default:
			val = atoi(card_name);
			if (val<1 || val>10)
			{
				puts("no changes");
				continue;
			}
		}
		if (val>2 && val<7)
		{
			count++;
		}
		else if (val==10)
		{
			count--;
		}
		printf("sCoure: %i\n", count);
	}
	return 0;
}
