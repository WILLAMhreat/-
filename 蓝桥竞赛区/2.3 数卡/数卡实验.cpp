#include<stdio.h>
int main(void) {
	int n, a[100], flag[100];
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {
			flag[j] = 0;
		}

		int num = 1, pos = i, sum = 0, cnt = 0;

		while (1) {

			if (cnt == n || num > n) {
				break;
			}

			if (flag[pos] == 1) {//表示将这张卡拿掉
				if (pos == n) {
					pos = 1;//处理数组最后一个被拿走的情况
				}
				else {
					pos++;
					continue;//必须加，表示这张卡牌被拿走，直接进入下一个循环
				}
			}


			if (num == a[pos]) {
				sum = a[pos] + sum;
				cnt++;//记录被拿来几张卡
				num = 1;
				flag[pos] = 1;
				if (pos == n) {//注意循环圈的尾部处理
					pos = 1;
				}
				else {
					pos++;
				}
			}
			else {
				num++;
				if (pos == n) {
					pos = 1;
				}
				else {
					pos++;
				}
			}
		}

		if (sum > ans) {
			ans = sum;
		}
	}
	printf("%d", ans);
	return 0;
}