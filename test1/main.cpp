#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int type;
    int left, right;
    float result,choose;
    srand(unsigned(time(NULL)));
    while(1)
    {
		//����
		system("cls");
		//���������ֵ
		type = rand() % 4;
		left = rand() % 10;
		right = rand() % 10;

		switch(type)
		{
		case 0:
			printf("%d + %d = ?\n", left, right);
			scanf("%f", &result);
			if(left + right == result)
				printf("right��\n");
			else
				printf("wrong��The result is %d\n", left + right);
			break;
		case 1:
			//��֤���������ڼ���
		    if(left < right)
				break;
			printf("%d - %d = ?\n", left, right);
			scanf("%f", &result);
			if(left - right == result)
				printf("right��\n");
			else
				printf("wrong��The result is %d\n", left - right);
			break;
		case 2:
			printf("%d * %d = ?\n", left, right);
			scanf("%f", &result);
			if(left * right == result)
				printf("right��\n");
			else
				printf("wrong��The result is %d\n", left * right);
			break;
		case 3:
			//�жϳ����Ƿ�Ϊ0
			if(right == 0)
				break;
			printf("%d / %d = ?\n", left, right);
			printf("������ʱ�뱣����λС��:");
			scanf("%f", &result);
			if(fabs(float(left) / right - result) <= 0.001 )
				printf("right��\n");
			else
				printf("wrong��The result is %.3f\n", float(left) / right);
			break;
		}
		//��ֹ����
		system("pause");
		
	}
	
    return 0;
}