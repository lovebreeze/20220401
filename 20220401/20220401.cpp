#include <stdio.h>

//구조체 바이트 패딩

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
		printf("함수\n");
		return 0;
	}
};

//CPU가 연산을 할 때 4 바이트씩 읽는데 끊어지지 않게 하기 위해 4/ 4 /4 로 패딩을 추가합니다.

// 구조체 안의 가장 큰 자료형이 되도록 배수로 정리함.

struct data {

	//k,m은 1byte 지만 cpu가 읽을떄 한번에 읽을 수 있도록 3byte의 패딩이 추가됨
	//	[k][pa][pa][pa]		/	[i][i][i][i]	/	[m][pa][pa][pa]

	char k; // 1byte + padding 3byte
	int i; // 4byte
	char m;	// 1byte + padding 3byte

	// 구조체의 크기는 멤버 변수의 순서에 따라 크기가 달라짐
};

struct bit {
	char x; // 1byte
	char y; // 1byte
};
struct byte {
	// 비트 필드를 사용 할 때 변수의 이름을 생략해서 사용 할 수 있습니다.
	char h : 7; // 1byte [ ] [ ] [ ]
	char n : 3; // 1byte     [ ] [ ]
				//   [n] [h] [h] [h] [h] [h] [h] [h] 
				//   [ ] [ ] [ ] [ ] [ ] [ ] [n] [n] 
};


//열거체

enum Map
{
	Village,
	Battle,
	Sea,
	Heaven,


};



int main()
{
	// 열거체
	// while 문을 이용해서 내가 원하는 번호를 누르면 원하는 위치에 이동할 수 있도록 만들어 보세요.

	enum Map number;

	number = 1;

	switch (number)
	{
	case Village:
		printf("마울에 도착했습니다\n");
		break;
	case Battle:
		printf("결투장에 도착했습니다\n");
		break;
	case Sea:
		printf("바다에 도착했습니다\n");
		break;
	case Heaven:
		printf("부활 신전에 도착했습니다\n");
		break;
	}


	//약수

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
	printf("\n%d의 약수의 갯수 %d", a, sum);

	}

	// 2^2 2^1 2^0
	//비트 필드
	{
		printf("%d\n", sizeof(struct bit));
		printf("%d\n", sizeof(struct byte));
	}

	//구조체 바이트 패딩
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