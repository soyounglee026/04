#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	int sec, min;
	
	printf("input second : ");
	scanf("%i", &input);
	
	sec = input%60;
	min = input/60;
	
	printf("The time is %i : %i\n", min, sec);
	
	return 0;
}
