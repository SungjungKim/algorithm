/*
서로 값어치가 다른 N가지 종류의 우표가 있습니다. 이 때, 같은 종류의 우표를 여러 번 사용해도 되지만, 
모든 우표의 총 사용 회수가 K개 이하로 제한되어 있습니다. 이런 제한이 있을 때, 
우표를 사용하여 만들어 낼 수 있는 값어치를 1부터 차례대로 만들 때, 가장 큰 값어치를 알아내려고 합니다.
예를 들어, N=2이고 각 우표의 값어치가 1, 3이라고 하고, K=5로 정하여 봅시다. 
그러면 값어치가 5까지는 값어치가 1인 우표를 이용하여 만들 수 있고, 6부터 13까지는 다음과 같이 구할 수 있습니다.

6 = 3+3
7 = 3+3+1
8 = 3+3+1+1
9 = 3+3+3
10 = 3+3+3+1
11 = 3+3+3+1+1
12 = 3+3+3+3
13 = 3+3+3+3+1
14 = XX
15 = 3+3+3+3+3

여기서, 14는 주어진 5개의 우표를 이용하여 만들 수 없습니다.
따라서 값어치를 차례대로 만들어 나갈 때, 만들 수 있는 가장 큰 값어치는 13입니다.

우표를 사용하여 만들 수 있는 값어치를 차례대로 만들어 나갈 때, 만들 수 있는 가장 큰 값어치를 출력하세요.

제한 시간: 3초 (java: 6초)

[입력]
입력에는 여러 테스트 케이스가 포함될 수 있다. 입력의 첫째 줄에는 테스트 케이스의 수 T가 주어지고, 
이후 차례로 T개의 테스트 케이스가 주어진다 (T ≤ 30)
각 테스트 케이스마다 첫 줄에 최대 사용 횟수 K와 우표의 종류 수 N가 공백으로 분리되어 주어진다. (1 ≤ N ≤ 200, 1 ≤ K ≤ 200)
두 번째 줄에 각 우표의 값어치가 공백으로 분리되어 주어진다. 각 값어치는 10,000이하의 자연수이다.

[출력]
각 테스트 케이스마다 첫 줄에 우표를 사용하여 만들 수 있는 값어치를 차례대로 만들어 나갈 때, 만들 수 있는 가장 큰 값어치를 출력한다.
(중요! 테스트 케이스 개수마다 #testcase번호를 출력 후 정답 출력)

-입출력 예-

입력
2
5 2
1 3
3 10
29 50 36 43 1 2 4 8 15 22
출력
#testcase1
13
#testcase2
56

*/


/*

VCPP, GPP에서 사용

*/
#include <iostream>
using namespace std;



int main() {
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */

	for (int itr = 0; itr<nCount; itr++) {
		cout << "#testcase" << (itr + 1) << endl;

		/*
		알고리즘이 들어가는 부분
		*/
		

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
}
