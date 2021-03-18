//에라토스테네스의 체 알고리즘
#include <stdio.h>
void printe(int a) {
	printf("%d\t",a);
}
int main() {
	int target;
	unsigned long long int primelist[100000];
	bool prime=true;
	int primeamount=0;//+1개가 실제 갯수
	printf("숫자 입력 : ");
	scanf_s("%d", &target);
	for (int i = 2; i <= target; i++) {
		prime = true;
		for (int j = 2; j < i; j++) {//1과 자기 자신 제외
			if (i % j ==0){//나눠지는게 하나라도 있으면
				prime = false;
				break;
			}
		}
		if (prime == true) {
			primelist[primeamount] = i;
			primeamount += 1;
		}
	}
	
	for (int i = 0; i < primeamount; i++) {
		printe(primelist[i]);
		if ((i+1) % 8 == 0) {
			printf("\n");
		}
	}
	printf("전체 소수 %d개", primeamount + 1);
}