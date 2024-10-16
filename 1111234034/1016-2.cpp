#include <stdio.h>
//題目2. 請建立C程式，輸入項目數量，並利用while迴圈計算出以下數列:
//pi = 4 - (4 / 3) + (4 / 5) - (4 / 7) + (4 / 9) - (4 / 11) + ...
//並且印出pi的結果。(項目數量愈多，精確度愈高)
int main() {
	float x, y, pi;
	int i;
	scanf_s("%f", &x);
	i = 1;
	y = 1;
	pi = 4;
	while (i <= x) {
		if (i % 2 == 0) {
			pi += 4 / (1 + y * 2);
		}
		else {
			pi -= 4 / (1 + y * 2);
		}
		i++;
		y++;
	}
	printf("%f", pi);
	return 0;
}