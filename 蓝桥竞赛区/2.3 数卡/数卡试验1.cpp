#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	int number[100], flag[100] = {1};
	for (int i = 0; i < n; i++) {
		scanf_s("%d", number + i);
	}
	int k = 1;
	int j = 0;
	int count = 0,max;

	while(k<=n&&j<n) {
		if (flag[j]) {
			if (k == number[j]) {
				count = count + k;
				flag[j] = 0;
				k = 1;

			}
			else {
				k++;
			}
		}
		j++;
		
	}
	printf("%d", count);
	return 0;
}