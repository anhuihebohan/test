#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int input = 0;




void menu()
{
	printf("********************************\n");
	printf("******* ����1��ʼ��Ϸ***********\n");
	printf("******* ����0�˳���Ϸ***********\n");
	printf("********************************\n");
	printf("********************************\n");
	printf("************   ��ѡ��   ********\n");
}

void game()

{
	int z = 5;
	
	srand((unsigned int)time(NULL));
	int n = 0;//�û�������
	int r = rand() % 100 + 1;//�������ʼ��С��100
	while (z)
	{
		printf("�������\n");
	

		scanf("%d", &n);
		if (n == 123) {
			z = 100;
		}
		else if (n < r) {
			printf("small");
			z--;
			printf("�ش�����㻹�� %d �λ���\n", z);
		}

		else if (n > r) {
			printf("big");
			z--;
			printf("�ش�����㻹��%d�λ���\n", z);
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
			
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			break;
		}




	} while (input);
	return 0;
}