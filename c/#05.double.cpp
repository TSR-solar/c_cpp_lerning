/*
�������У����õ�С����
���� 10/3 �����Ϊ3.33333333��ѭ������
������C���Լ��㣬��  printf("%d\n",10/3) ����ȴ��3��
������Ϊ10��3������������C�����У�������������ֻ����������
���ԣ�3.33333333��ѭ��������������ȡ�����õ�10/3=3��
��ˣ����õ�10/3*3=9���������׽����

��ʱ����һ�������������������C�����еĸ�������
���������Ǵ�С�������ֵ����������ʵı������ָС�����Ǹ����ģ�
�Ǽ�����ڲ��������������������������������һ�ַ�ʽ��*/

//����������ӣ�


#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	double g = 0;

	printf("Сѧ����������");

	printf("���������뱻����������:");

	scanf_s("%d %d", &a, &b);

	c = a / b; d = a % b;

	printf("%d��%d=%d...%d\n", a, b, c, d);

	printf("�������桤�����������ɣ�\n\n�桤����������\n");

	printf("���������뱻����������:");

	scanf_s("%d %d", &e,&f);

	g = e *1.0/ f;

	printf("%d��%d=%f\n",e,f,g );

	return 0;

}

/*
��10/3Ϊ����
�� ��Сѧ�������������õ��Ľ��Ϊ 10��3=3...1 ��
���á��桤�������������õ��Ľ��Ϊ 10��3=3.333333 ��
*/

/*
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	double g = 0;
������int���ƣ�doubleҲ���������ƣ�
����ֻ����int���͵ı���ʼ��Ϊ��������double���͵ı���ʼ��Ϊ��������
������ˣ���ʼֵa=b=c=d=e=f=0;��g=0.000000����ʵ���и���λ����ֻ��ʾ6λС����
*/

/*
    g = e *1.0/ f;
������Ҫע����ǣ�����ֱ��д g = e / f ;
������Ϊ�����ᵽ��������������ֻ����������
������ e �� f ���� int ���͵ı�������Ȼ��Ĩ�������С�����֣�
������������ʹ g �� double ���͵ı�����Ҳ����õ���ȷ�����
�������磬�� e=10 ��f=3 ʱ����ʾ 10��3=3.000000 ��
����
���������ҵ��ǣ���Ȼ������� e �� f ���������� int �ϣ����� int Ϊ double ��������ȫ������⣻
������Ϊ���������� e ��Ϊ10.000000�� f ��Ϊ3.000000��
������ʾ 10.000000��3.000000=3.333333����Ȼ������ˣ������������������������ô��С����ɶ��
����
������ˣ����ǲ����� int Ϊ double ������ e * 1.0 ��
��������������1.0������������������Ϊ������ 3.333333 ���ֲ���Ӱ������
����������ʾ�� 10��3=3.333333 ��
*/ 
    
/*
    printf("%d��%d=%f\n",e,f,g );
����ͬ������ʹ�ø���������ʱ������printf��scanfҲ�ж�Ӧ�ĸı䣻
����printf�� %d ��Ϊ %f ��scanf�� %d ��Ϊ %lf ��
*/

/*
����� double ���͵ı����У����� %d ���ᷢ��ʲô��
*/

// �����ǹ������������̽����


/* 
   1.��д���´��룬����1���۲���������

   #include <stdio.h>
int main()
{
	int a ;
	
	scanf_s("%d", &a);
	
	printf("%d\n",a);
	
	return 0;
}
   
   2.�ı�����������ƣ�printf��scanf���ظ�����������

   3.��������¼���£�

����+scanf+printf:1

int   +%d +%d:1
int   +%d +%f:0.000000
int   +%lf+%d:0�����뱨����
int   +%lf+%f:0.000000�����뱨����
double+%d +%d:1
double+%d +%f:-92559592117457364459447783688012762948756726027711679117131776.000000
double+%lf+%d:0
double+%lf+%f:1.000000

���ۣ�ֻ�� printf �� scanf ������������ף����������ȷ���������������׽����
*/