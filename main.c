#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int x;
	printf("��J�Ʀr�G");
	scanf("%d" , &x);
	while(x > 100 | x < 0){
		printf("��J���~");
	}
	switch(x/10) {
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:	
			printf("C");
			break;
		case 6:
			printf("D");
			break;	
		default:
			printf("E");
			break;
	}
	return 0;
}
