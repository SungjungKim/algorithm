/*
세 개의 탑(1,2,3 번 탑) 있고 첫번 째 탑에 접시가 쌓여져 있다. 단 접시는 작은 접시 위에 큰 접시가 쌓일수는 없다.
1 번 탑에 놓여져 있는 모든 접시를 3 번 탑으로 옮기는 문제이다.
단, 접시는 한 번에 하나씩 옮길 수 있고 , 이동 중간 단계에서도 작은 접시가 큰 접시위 위로 쌓일수는 없다.

입력
입력의 첫째 줄에는 1 번 탑에 싸여져 있는 접시수가 입력된다. 접시수는 10 을 넘지 않는다.

출력
최소 이동 방법을 출력예의 형식으로 출력한다.

입출력 예
입력
3

출력
1 -> 3
1 -> 2
3 -> 2
1 -> 3
2 -> 1
2 -> 3
1 -> 3
*/

#include <iostream>
using namespace std;

void hanoi(int num_hanoi, int x, int y, int z) {
	if (num_hanoi > 0){
		hanoi(num_hanoi - 1, x, z, y);
		cout << x << " -> " << z << endl;
		hanoi(num_hanoi - 1, y, x, z);
	}
}


int main(void) {
	int num_hanoi;
	cin >> num_hanoi;

	hanoi(num_hanoi, 1, 2, 3);
}