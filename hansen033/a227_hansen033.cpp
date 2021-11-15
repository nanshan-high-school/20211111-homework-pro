#include <iostream>
using namespace std;

void HanoiTower(int amount, char from, char target, char temp){
	if(amount==1){
		printf("Move ring 1 from %c to %c\n", from, target);
		return;
	}
	HanoiTower(amount-1, from, temp, target);
	printf("Move ring %d from %c to %c\n", amount, from, target);
	HanoiTower(amount-1, temp, target, from);
}

int main(){
	int N;
	while(cin >> N){
		HanoiTower(N, 'A', 'C', 'B');
	}
}