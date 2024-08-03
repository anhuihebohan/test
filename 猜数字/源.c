#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int input = 0;




void menu()
{
	printf("********************************\n");
	printf("******* 》按1开始游戏***********\n");
	printf("******* 》按0退出游戏***********\n");
	printf("********************************\n");
	printf("********************************\n");
	printf("************   请选择   ********\n");
}

void game()

{
	int z = 5;
	
	srand((unsigned int)time(NULL));
	int n = 0;//用户猜数字
	int r = rand() % 100 + 1;//让随机数始终小于100
	while (z)
	{
		printf("请猜数字\n");
	

		scanf("%d", &n);
		if (n == 123) {
			z = 100;
		}
		else if (n < r) {
			printf("small");
			z--;
			printf("回答错误，你还有 %d 次机会\n", z);
		}

		else if (n > r) {
			printf("big");
			z--;
			printf("回答错误，你还有%d次机会\n", z);
		}
		
		else
		{
			printf("right it is %d\n", r);
			break;
		}

	
		
	}

}
int main()
{
	
	do {
		menu();
		scanf("%d", &input);
	
		
	
		switch (input)
		{
		case 1:
			
			printf("猜数字\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			break;
		}




	} while (input);
	return 0;
}