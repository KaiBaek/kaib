#include <stdio.h>

void poin(int* nn){

	nn = 5;
}

int main(){


	int num = 3;

	poin(&num);

	printf("%d", num);
	return 0;

}