#include <stdio.h>

int main() {
	int i = 7;
	for(int x = 0; x < 100; x++) {
		printf("%d ", i);
		if(i % 2 == 0) {
			i /= 2;
		}
		else {
			i *= 3;
			i++;
		}
	}
	return 0;
}
