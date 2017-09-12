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
		//清屏
		system("cls");
		//生成随机数值
		type = rand() % 4;
		left = rand() % 10;
		right = rand() % 10;

		switch(type)
		{
		case 0:
			printf("%d + %d = ?\n", left, right);
			scanf("%f", &result);
			if(left + right == result)
				printf("right！\n");
			else
				printf("wrong！The result is %d\n", left + right);
			break;
		case 1:
			//保证被减数大于减数
		    if(left < right)
				break;
			printf("%d - %d = ?\n", left, right);
			scanf("%f", &result);
			if(left - right == result)
				printf("right！\n");
			else
				printf("wrong！The result is %d\n", left - right);
			break;
		case 2:
			printf("%d * %d = ?\n", left, right);
			scanf("%f", &result);
			if(left * right == result)
				printf("right！\n");
			else
				printf("wrong！The result is %d\n", left * right);
			break;
		case 3:
			//判断除数是否为0
			if(right == 0)
				break;
			printf("%d / %d = ?\n", left, right);
			printf("除不尽时请保留三位小数:");
			scanf("%f", &result);
			if(fabs(float(left) / right - result) <= 0.001 )
				printf("right！\n");
			else
				printf("wrong！The result is %.3f\n", float(left) / right);
			break;
		}
		//防止闪退
		system("pause");
		
	}
	
    return 0;
}