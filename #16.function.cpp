/*
�ڴ�֮ǰ�������Ѿ�֪����printf��scanf��if��while��for�Ⱥ�����
Ȼ������Щ�����Ķ����Ǳ������еģ�
���Ҫ����һ���Լ�����ĺ���������ô���أ�
*/
//���忴��������ӣ�
#include <stdio.h>
int sumatk(int hp);
void judge(int hp, int originalhp);
int main()
{
	int originalhp,hp,n=0;
	const int ATK10 = 10;
	printf("������10�����Ҫ������;\n��֪���10�Ĺ���Ϊ10��\n�������ҵ�Ѫ����");
	scanf("%d", &originalhp);
	while (originalhp <= 0)
	{
		printf("\n��һ�����ڶ����棡��ô�������á�%d����ôһ��Ѫ�������Ҳ���һ����si����\n\n���������룺", originalhp);
		scanf("%d", &originalhp);
	}
	printf("�õģ�������һ����%d��Ѫ��",originalhp);
	hp = originalhp;
	do
	{
		printf("��%d�غϿ�ʼ��\n", n + 1);
		int sum = sumatk(hp)+ATK10;
		hp -= sum;
		printf("OK�����غ��ҹ����ܵ�%d���˺���\n�����ڻ�ʣ��", sum);
		judge(hp, originalhp);
		n++;
		if (hp > 0)
			printf("��Ȼ�Һܲ���si����������һ��Ҫ���أ�\n�����������\n\n\n\n");
	} while (hp > 0);
	printf("...\n�����ҵ�Ѫ���ľ��ˣ�\n������si�ˣ�\n");
	printf("��ֻ����%d�غϾ�սʤ���ң�\n", n);
	printf("��ϲ���أ��ټ���/(��o��)/~~\n");
	return 0;
}
int sumatk(int hp)
{
	int sumatk=0, player, atk;
	for (player = 1; player <= 10; player++)
	{
		printf("���������%d�Ĺ���:", player);
		scanf("%d", &atk);
		while (atk < 0)
		{
			printf("\n��֪���㲻�빥���ң���Ҳ������1�Ĺ������óɡ�%d������\n", atk);
			printf("\n����Ǹ��������Ҳ��������ƣ����������룺");
			scanf("%d", &atk);
		}
		sumatk += atk;
	}
	return sumatk;
}
void judge(int hp, int originalhp)
{
	int level = hp * 10 / originalhp;
	if (hp == originalhp)
		printf("%d��Ѫ��\n�Ҳ��㲢û���빥���ң�\nthank you very much!\n", hp);
	else if (level >= 6)
		printf("%d��Ѫ��\n�һ��ܽ�������л�����ʴȣ�\n", hp);
	else if (level >= 1)
		printf("%d��Ѫ��\n�Ҳ�Ѫ�ˣ����һ����ţ�\n", hp);
	else if (hp > 0)
		printf("%d��Ѫ��\nŶ�������ˣ��Ҳ����ٱ���һ�ξ�si�ˣ�\n", hp);
}
/*
����һ����������������ɣ�

����Ҫ���������ķ������ͺ��������ͣ�����д��������ǰ����ʽ���£�
�������� ������(������������)
���з�������������������ƣ�������int��double�ȣ�
��ô�ں�������󣬾�Ҫʹ��return��䷵��һ��ֵ���������������;��Ƿ������ͣ�
����һ�ַ����������⣬������void����������û�С�����void���������Ͳ���Ҫreturn��䷵��ֵ��
ע�⣺�κκ������ֻ�ܷ���1��ֵ����Ϊ�������Ա���ֻ����Ψһ���������Ӧ��

��������ָ�������������ݵ�����ֵ���붨��������ƣ�
����������Ȼ������void����ʱ�������������������κ�ֵ��

��void judge(int hp, int originalhp)
��������һ��������Ϊjudge�ĺ��������������䴫��2��ֵ�����ǽ������ζ��������hp��originalhp�����ղ������κ�ֵ��

�������Ҫ���Ϸֺţ�
*/

/*
�����Ķ�������ָ�ں����ڲ���������ı������е�һϵ�д��룻
���һ�б����Ǻ�������������˿��Խ������Ķ��������д��һ��
��һ�㲻��ô������Ϊ�Ѷ�����ں����Եô���������ۣ�
֮���ô���������Ҫִ�еĴ��룬���ɶ��壻
*/

/*
�������������Լ�����֮������ȫ����ɵģ�����ֻ�Ի��������ֵ����ϵ��
�����˵���������������ͺ����ж���������ȫ��ͬ�ı������������ǻ���Ӱ��ģ�
�����еı������Լ��������÷�Χ�������ڴ��������棻
һ���뿪�˴����ţ������ͻ᲻�����ڣ�ֱ����һ�ε��øú���ʱ�Ż���֣�
*/

/*
�ڵ��ú���ʱ���������뺯�����ͣ�ֻҪ���뺯�����������С��������Ҫ���ݵ����ɸ�ֵ���ɣ�
*/

/*
ֵ��ע����ǣ�mainҲ�Ǻ�����
��Ϊ������ڲ���һЩ���㣬main����ҲҪ����ֵ������int main����0��
��С�������棬�����ԷŽ�ȥvoid��Ȼ����������ԭ�򣬻��ǲ���Ϊ�ã�
*/