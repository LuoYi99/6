/*
��Ŀ��
Ҫ������������һ��ʮ��������Ȼ��ת����ʮ�����ƴ�ӡ����
*/
/*
˼·��
��ʮ����ת���ɶ��������ķ���������2�������������
���룺����16�������������
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double n,y;//n�洢��Ҫת�������ݣ�y�洢n��С������
	int x,i=10;//x�洢n���������֣�i�Ƕ�С�����ֽ���ת���Ĵ���(����洢����Чֵ)
	printf("��������Ҫת����ʮ������:\n");
	scanf("%lf",&n);
	x=(int)n;
	y=n-x;
	printf("ת����ʮ��������ԼΪ:\n");
	while(x!=0)
	{
		switch(x%16)//�ж϶�Ӧ��ʮ��������
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
		switch((int)(y*16))//�ж϶�Ӧ��ʮ��������
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
		y=y*16-(int)(y*16);//����С��1��С��
		i--;
	}
	printf("\n");
	return 0;
}