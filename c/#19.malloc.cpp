/*
ָ��Ҳ�����������㣬���Զ�һ��ָ����мӼ����������Լ���
�����Ľ������ָ����ָ�ĵ�ַ�ӻ����һ�����֣�
ע�⣺�Ӽ������ֱ�����ָ���ֽ��ڴ�ı�����

����֮�⣬����ָ��֮��Ҳ����������õ�����ָ��֮����ֽ�����һ���ٳ��Ա����Ĵ�С��
	�����µĳ���

	int a[6] = { 0 };
	int* p = a;
	int* q = &a[6];
	printf("%d\n", q - p);

����a[0]��a[6]֮����28���ֽڣ���һ�����4��int����������6����6-0=6��

ָ�������һ�����������ͣ������ж�������ͣ����� void* ���ͣ�
����ʾ��ָ����ָ�ı�������δ֪��
���ڱ�������δ֪�������޷�ͨ��ȡֵ���������ָ����ָ�ı�����ֵ��
��������������û�б仯��
void* ������ռ���ֽ���ҲΪ1��
*/

#include <stdio.h>
/*
��ʵ������У���ʱ�������Ȳ�֪��������ڴ棬����������ڴ�Ҫѭ��ʹ�ã�
��ʱ�����Ǿ���Ҫʹ��malloc�����������ж�̬�ڴ���䣻*/
//������ʹ��mallocϵ�еĺ���ʱ������Ҫ�ȼ������´��룺
#include <stdlib.h>
/*
malloc������ʹ�÷�������malloc��������С��������һ�����֣�������־���ָ����ڴ��С����λ���ֽڣ�
ע�⣺ָ�뷵�صľ��� void ���͵�ָ�룬���Ի���Ҫ��ǿ��ת�����������malloc�õ����ڴ淵�أ�
*/
//����������ӣ�
int main()
{
	int i = 0;
	int* a = (int*)malloc(10*sizeof(int));
/*
malloc�����Ǵ�ϵͳ�ڴ��н����Ŀռ䣬�����Լ���ַ�Ŀռ䣻
���ԣ�ʹ��������֮�󣬻��û���ϵͳ��
��ʱ����Ҫʹ��free������
*/
	free(a);	//����ôʹ��
/*
����û��ʹ��free����ʱ��ռ�õ��ڴ�ͻ����������ֱ������������ͷţ�
�����ǳ����ҵذ��ڴ������ˣ�malloc�Ҳ����µ��ڴ��ˣ��ͻ᷵��0��ַ��
����������0��ַ����������������

ֵ��һ����ǣ�free����ֻ���ͷ��������ĵ�ַ������ַ�������κα仯��
��Ҳ����˵��a++��Ͳ�����ʹ��free������
*/
	return 0;
}