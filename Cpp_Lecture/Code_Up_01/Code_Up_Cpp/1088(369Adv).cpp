#include<iostream>

using namespace std;

int main()
{
	int i, n;
	cin >> n;
	for (i = 1; i <= n; i++) //i�� �ʱⰪ���� n���� �ݺ�
	{
		if (i % 3 == 0) //3�� ���
			cout << ""; //3�� ����� ��� �������
		else
			cout << i << " ";
	}
	cout << endl;

	return 0;
}