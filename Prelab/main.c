#include <stdio.h>

int main(){
	int n = 4;
	for(int i = 1; i < n; i++){
		for (int j = 0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
}

