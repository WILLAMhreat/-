#include<stdio.h>
int findnumber(int a, int b) {
	int c=1;
	while (c != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	if (a == 1) {
		return 1;
	}
	else {
		return 0;
	}
}
int main(){
	int sum = 0;
	for (int i = 1; i <= 2020; i++) {
		for (int j = 1; j <= 2020; j++) {
			if (findnumber(i, j)) {
				sum++;
			}
	   }
	}
	printf("%d", sum);
	return 0;//answer 2481215

}