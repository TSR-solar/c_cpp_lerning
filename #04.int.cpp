/*
֮ǰ���Ƕ�����������ñ������洢�ú���scanf��������ݣ�����printf����洢ֵ��
��ô���ڸ�������˽�һ�±�����

��Ҫ�ڳ����ﱣ������ʱ������Ҫһ����������������
��һ���������������ݣ������ܲμӵ�����ļ����У�

���������������scanf���޷�ʹ�ã���Ϊ���ݵò������棻
*/

/*
 ���������һ����ʽ���ǣ�<��������>  <��������>��
 int����һ���������ƣ�����֮�⻹�кܶ����������ƣ�
 ���������Լ�����ȡ��ֻ������ĸ�����ֺ��»���_��ɣ����ֲ����Գ����ڵ�һ��λ���ϣ����ִ�Сд��
 C���ԵĹؼ��֣���int�������������������ơ�
*/

/*
���ñ�������������ʱ�����ø�ֵ�������=����
��C�����У���=������ʾ��ȹ�ϵ�����Ǹ�ֵ�������Ƕ�̬���̣�

�� int a = 114 ���ͱ�ʾ��114������a��������У���������a��114��ȣ�
*/


//����֮�⣬��������scanfһ���������������߳�������������printfչʾ��������������µ����ӣ�

#include <stdio.h>
int main()
{
	int atk1 = 0 ;
	int atk2 = 0 ;
	const int ATK3 = 10 ;
	int originalhp = 100;

	printf("��������100��Ѫ;\n\n������3�����Ҫ������;\n\n��֪���3�Ĺ���Ϊ10;\n\n");

	printf("���������1�Ĺ���:");

	scanf("%d", &atk1 );

	printf("\n���������2�Ĺ���:");

	scanf("%d", &atk2 );
	
	int hp = originalhp - atk1 - atk2 - ATK3;

	printf("\n OK�������ڻ�ʣ��%d-%d-%d-%d=%d��Ѫ��\n ",originalhp,atk1,atk2,ATK3,hp);

	return 0;
	
}

/*
int atk1 = 0 ;
int atk2 = 0 ;
const int ATK3 = 10 ;
int originalhp = 100;
����intΪ������������ض�˵��
����const intΪ���峣��,��const int����ĳ�����ֵ��Զ���ᷢ���仯����˳��ô�д��ĸ��ʾ��ATK3)��
���������Ҫǿ���ø�ֵ����ʽ�ı䳣����ֵ���ᱨ����
����
��������const int ���������ڸ��賣�����֣��Ӷ�Ϊ����Ĺ۲��ߺͱ�д�ߴ������㣻
�������ķ����ڹ۲��߷��棬�����ڿ�����������ʶ�������ĺ��壬
����                      ��ATK3�����3�Ĺ�����������ֵΪ10��
����        �ڱ�д�߷��棬�����ڿ��Կ��ٵ��ҵ����޸ĳ�����
����                      �����޸����3�Ĺ�����ֻ���ҵ�ATK3��������10��
*/

/*
    printf("��������100��Ѫ;\n\n������3�����Ҫ������;\n\n��֪���3�Ĺ���Ϊ10;\n\n");

    printf("���������1�Ĺ���:");

	scanf("%d", &atk1 );

	printf("\n���������2�Ĺ���:");

	scanf("%d", &atk2 );

������������ʹ�ö��scanf������������������ҵĹ�����
����
����ע�⣺�ں���scanf�У�ֻ���������ݲ����س��󣬲Ż�ִ������Ĵ��룻
����      ͬ��������scanf�󣬻���ͣ������Ĵ��룻
*/

/*
    int hp = originalhp - atk1 - atk2 - ATK3;

	printf("\n OK�������ڻ�ʣ��%d-%d-%d-%d=%d��Ѫ��\n ",originalhp,atk1,atk2,ATK3,hp);

���������printfһ��չʾ�˶��������
�����������������������ǰ����뼸�� %d ���� %d ����Ҫչʾ�ı�����
������Ӧ�أ��ں��棬Ҫ��������ı������м��ö��Ÿ�����ע�����֮���˳��
*/

/*
һ�ִ�������ʾ����

                       ��������100��Ѫ;

                       ������3�����Ҫ������;

                       ��֪���3�Ĺ���Ϊ10;

                       ���������1�Ĺ���:20    

                       ���������2�Ĺ���:30     // 20 �� 30 Ϊ����ʱ�Լ����룬�ɸ��ġ�

                       OK�������ڻ�ʣ��100-20-30-10=40��Ѫ��
*/