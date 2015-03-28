/*
���� ������� �̹��� ���𵨸� ��ȹ�� �ϰ� �ִ�. ȿ������ ���̳� ������ ���Ͽ� ������ ���� ������ ȿ������ ���̳��� ������ �����ϰ� �ִ�. 
������, ���� �� �������� ���̳����� ������ �Ϳ��� ������ ������ ���� �ð��� ���� ���. 
�� ������ �� ���� ���̳� �Ƿ� ������ ����� �ص� �ʹ��� �پ��ϱ� �����̴�. 
�׷��� �� ��Ҹ� �� ���� ���̳��Ƿ� ������ ����� ���ϴ� ������ ������ ���� ���̿� ����ϴ� �ð��� ���.

���� ���, 1000���� ������ 300+700���� ������ 500+500���� ������ 1000�̶� �ð��� ���. ��ü ������ �ϳ��� ���̳��Ƿ� �����Ѵ�. 
�ѹ��� �ϳ��� ���̳����� 2���� ������ �۾��� �����̳��� -1���� �����ν� ���̳����� �����ϴ� �۾��� �Ϸ�ȴ�.
���̳� ���� ������ ������ ���� ��ü ��Ƽ���� �����ϴ� �۾��� �ҿ�Ǵ� �ð��� �޶�����. 
���� ���, 800���� 100+200+500�� �� ���̳��Ƿ� �����ٰ� ����. 
���� ��ü�� 100+700���� ���� ��, 700 ���� 200+500���� ������ �� 800+700=1500 ��ŭ�� �ð��� ���. 
�׷��� 300+500���� ���� ���� ��, 300���� 100+200���� ������ 800+300=1100 ��ŭ�� �ð��� ���.

���� ��� ��ڰ� ���� ���� �ð��� ��ü�� ���̳��� ������ ���� �� �ִ� ������ ���Ϸ� �Ѵ�. 
�ش� ������ �־����� ��, ��ü ���̳����� ��ȹ�� ��� ������ ���� ���� ȿ�������� �ҿ�Ǵ� �ð��� ���ϴ� ���α׷��� �ۼ��϶�.

[�߰�����]
4
10 10 10 10
���� ���� ���̽��� �־����� �Ǹ�, �� ������ 40�̵Ǿ� ���� ��� 40, ���� 20,20���� ������ ���� 10, 10���� �������µ� ����� 20, 20�� �߰��Ǿ� �� 40+20+20 = 80 �� 80�� ����� �ҿ�ǰ� �ȴ�.

[�Է�]
ù° �ٿ� ���̽��� ���� T�� �־�����, ���� ���ʷ� T�� �׽�Ʈ ���̽��� �־�����.
�� ���̽��� ù �ٿ��� ���̳����� �� �� N�� �־�����.(1��N��10000)
���� �ٿ��� �� �μ����� ����� ������ ũ��(S)�� ������ ���̿� �ΰ� N���� ������ �־�����. (10��S��5000)

[���]
�� �࿡ �ּ� �� �ҿ�ð��� ����Ѵ�.
( �߿�! �׽�Ʈ ���̽� �������� #testcase��ȣ�� ��� �� ���� ��� )

[STL��� �Ұ�]

[����� ��]

�Է�
2
3
500 100 200
4
30 40 10 20

���
#testcase1
1100
#testcase2
190

*/

/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;


void sort(int *room, int num_room) {
	for (int i = 0; i < num_room; i++) {
		for (int j = 0; j < num_room - 1; j++) {
			if (room[j] > room[j + 1]) {
				int temp = room[j];
				room[j] = room[j + 1];
				room[j + 1] = temp;\
			}
		}
	}
}


/*
sum : bottom -> top
*/
void process(int *room, int num_room, int &total) {
	int cache = 0;

	for (int i = 0; i < num_room-1; i++) {
		cache = room[i] + room[i + 1];
		room[i + 1] = cache;
		total += cache;
	}
}


int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for (int itr = 0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr + 1) << endl;

		/*
		�˰������� ���� �κ�
		*/

		int num_room;
		int total = 0;
		int room[10000] = { 0, };

		cin >> num_room;
		for (int i = 0; i < num_room; i++)
			cin >> room[i];

		sort(room, num_room);
		process(room, num_room, total);
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}