#include <stdio.h>

//����ü ����Ʈ �е�

int Sum(int x, int y)
{
	return x + y;
}

struct value {
	char a; // 1byte
	char b; // 1byte
	char c; // 1byte

	void Function()
	{
		printf("�Լ�\n");
		return 0;
	}
};

//CPU�� ������ �� �� 4 ����Ʈ�� �дµ� �������� �ʰ� �ϱ� ���� 4/ 4 /4 �� �е��� �߰��մϴ�.

// ����ü ���� ���� ū �ڷ����� �ǵ��� ����� ������.

struct data {

	//k,m�� 1byte ���� cpu�� ������ �ѹ��� ���� �� �ֵ��� 3byte�� �е��� �߰���
	//	[k][pa][pa][pa]		/	[i][i][i][i]	/	[m][pa][pa][pa]

	char k; // 1byte + padding 3byte
	int i; // 4byte
	char m;	// 1byte + padding 3byte

	// ����ü�� ũ��� ��� ������ ������ ���� ũ�Ⱑ �޶���
};

struct bit {
	char x; // 1byte
	char y; // 1byte
};
struct byte {
	// ��Ʈ �ʵ带 ��� �� �� ������ �̸��� �����ؼ� ��� �� �� �ֽ��ϴ�.
	char h : 7; // 1byte [ ] [ ] [ ]
	char n : 3; // 1byte     [ ] [ ]
				//   [n] [h] [h] [h] [h] [h] [h] [h] 
				//   [ ] [ ] [ ] [ ] [ ] [ ] [n] [n] 
};


//����ü

enum Map
{
	Village,
	Battle,
	Sea,
	Heaven,


};



int main()
{
	// ����ü
	// while ���� �̿��ؼ� ���� ���ϴ� ��ȣ�� ������ ���ϴ� ��ġ�� �̵��� �� �ֵ��� ����� ������.

	enum Map number;

	number = 1;

	switch (number)
	{
	case Village:
		printf("���￡ �����߽��ϴ�\n");
		break;
	case Battle:
		printf("�����忡 �����߽��ϴ�\n");
		break;
	case Sea:
		printf("�ٴٿ� �����߽��ϴ�\n");
		break;
	case Heaven:
		printf("��Ȱ ������ �����߽��ϴ�\n");
		break;
	}


	//���

	/*
	{
	int a;
	int sum = 0;
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d ", i);
			sum++;
		}
	}
	printf("\n%d�� ����� ���� %d", a, sum);

	}

	// 2^2 2^1 2^0
	//��Ʈ �ʵ�
	{
		printf("%d\n", sizeof(struct bit));
		printf("%d\n", sizeof(struct byte));
	}

	//����ü ����Ʈ �е�
	{
		struct value v;
		struct data data;

		int x, y;
		scanf_s("%d %d", &x, &y);
		int a = Sum(x, y);
		printf("%d\n", sizeof(v));
		printf("%d\n", sizeof(data));

		printf("%d", a);

		//Visual Studio 2022.
		//Visual Studio code.
	}
	*/
	return 0;
}