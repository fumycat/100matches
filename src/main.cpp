#include <stdio.h>

int main(){
	printf("TODO\n");
	
	int h = 100;
	int p = 0;
	int i;
	while (h){
		printf("Player %d turn. %d matches left.\n", p + 1, h);
		scanf("%d", &i);
		// TODO: check data type
		if (i < 2 || i > 10) {
			printf("Incorrect input. Please reapeat\n");
			continue;
		}
		// TODO: check i < h
        h -= i;
        p = 1 - p;
	}
	printf("Player %d won!\n", p + 1);
}
