/*
�������ַ����ͣ�
֮ǰ�ᵽ��char��
��ʵchar���˱�ʾ�����������Ա�ʾ�ַ���
��Ϊchar��character����д��
������ĸ�����ţ�����ͬʱҲ�������ַ���
*/

/*
�������char���ͱ�������ʹ��%c��
*/

/*
���ڼ�����ڲ�ȫ���Ƕ������������Ҫ��취���ַ�ת��Ϊ����������
���Ҫʹ��ASCII���룬ÿ���ַ���ASCII�е�һ�����ֱ���һһ��Ӧ��
�ٽ�ASCII����ת��Ϊ��������������ʵ���ַ��ڼ�����ڲ��ı��
*/

/*
��Ҫ��ʼ��char���͵ı���Ϊ�ַ����������ǲ������֣���������ϵ����ţ� ��1��
�������û�ӵ����ţ�char����洢���ֶ�Ӧ��ASCII������ַ���
���������û�ӵ����ţ�����ⲻ��һ���������ᱨ����
ֵ��һ����ǣ�����Ҳ��һ���ַ�����ʹ����������û���κζ�����
*/

/*
�ַ�Ҳ���Խ��м��㣬��ʵ�ʼ�������ַ���ASCII���룻
���磬 һ���ַ���һ�����ֵõ�ASCII����м����Ǹ���֮����ַ���
�����ַ����㣬�Ƚ��ַ�ת��ΪASCII���룬�������ת��Ϊ�ַ���
*/
//����������ӣ�
#include <stdio.h>
int main()
{
	char x = 'a' + 1;
	char y = 'b'-'a';
	printf("%c\n",x);
	printf("%d\n",y);
}
//���Եõ� x=��b'��y=1��

/*
����֮�⣬����һ��������ַ�����Ϊ�������ַ�����
�����Է�б�� \ ��ͷ�������ǿ���printf��������ݣ�
�����ַ���Ҫ����������Щ��

\b ����һ��         \"˫����
\t����һ������λ    \'������
\n����              \\��б�ܱ���
\r�س�

����\t�������������ڱ���λ��������ã�
*/

/*
��ʱ��������Ҫ�ڸ�����������֮����ת����
��ʱ�����Ǿ�Ҫ�õ�ǿ������ת������
���ĸ�ʽ�� ����������ֵ��
ͬʱ��Ҳ��һ����������������ȼ�Ϊ1�����κ��������㶼�ߣ�
*/