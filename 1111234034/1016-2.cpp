#include <stdio.h>
//�D��2. �Ыإ�C�{���A��J���ؼƶq�A�çQ��while�j��p��X�H�U�ƦC:
//pi = 4 - (4 / 3) + (4 / 5) - (4 / 7) + (4 / 9) - (4 / 11) + ...
//�åB�L�Xpi�����G�C(���ؼƶq�U�h�A��T�׷U��)
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