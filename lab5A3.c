#include<stdio.h>
void main()
{
	char i;
	printf("Enter a Character:");
	scanf(" %c",&i);
	switch(i)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("%c is vowel.",i);
				break;
		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': printf("%c is consonant.",i);
					break;
		default : printf("Envalid Character.");	
	}
}
