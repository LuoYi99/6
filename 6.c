/*
题目：
要求键盘随便输入一个十进制数，然后转换成十六进制打印出来
*/
/*
思路：
由十进制转换成二进制数的方法：除以2，留结果、余数
猜想：除以16，留结果、余数
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double n,y;//n存储需要转换的数据，y存储n的小数部分
	int x,i=10;//x存储n的整数部分，i是对小数部分进制转换的次数(浮点存储有有效值)
	printf("请输入需要转换的十进制数:\n");
	scanf("%lf",&n);
	x=(int)n;
	y=n-x;
	printf("转换的十六进制数约为:\n");
	while(x!=0)
	{
		switch(x%16)//判断对应的十六进制数
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:printf("%d",x%16);break;
		case 10:printf("a");break;
		case 11:printf("b");break;
		case 12:printf("c");break;
		case 13:printf("d");break;
		case 14:printf("e");break;
		case 15:printf("f");break;
		}
		x/=16;
	}
	printf(".");
	while(i)
	{
		switch((int)(y*16))//判断对应的十六进制数
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:printf("%d",(int)(y*16));break;
		case 10:printf("a");break;
		case 11:printf("b");break;
		case 12:printf("c");break;
		case 13:printf("d");break;
		case 14:printf("e");break;
		case 15:printf("f");break;
		}
		y=y*16-(int)(y*16);//留下小于1的小数
		i--;
	}
	printf("\n");
	return 0;
}