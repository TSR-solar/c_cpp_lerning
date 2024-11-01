/*
在生活中，常用到小数；
例如 10/3 ，结果为3.33333333（循环）；
但如用C语言计算，如  printf("%d\n",10/3) ，答案却是3！
这是因为10和3都是整数，在C语言中，整数的运算结果只能是整数；
所以，3.33333333（循环）进行了向下取整，得到10/3=3。
如此，便会得到10/3*3=9这样的离谱结果！

此时，有一个解决方案，就是利用C语言中的浮点数。
浮点数就是带小数点的数值。浮点这个词的本意就是指小数点是浮动的，
是计算机内部表达非整数（包含分数和无理数）的一种方式。*/

//如下面的例子：


#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	double g = 0;

	printf("小学除法运算器");

	printf("请依次输入被除数，除数:");

	scanf("%d %d", &a, &b);

	c = a / b; d = a % b;

	printf("%d÷%d=%d...%d\n", a, b, c, d);

	printf("来试试真·除法运算器吧！\n\n真·除法运算器\n");

	printf("请依次输入被除数，除数:");

	scanf("%d %d", &e,&f);

	g = e *1.0/ f;

	printf("%d÷%d=%f\n",e,f,g );

	return 0;

}

/*
以10/3为例，
用 “小学除法运算器”得到的结果为 10÷3=3...1 ；
而用“真·除法运算器”得到的结果为 10÷3=3.333333 ；
*/

/*
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	double g = 0;
——与int类似，double也是类型名称；
——只不过int类型的变量始终为整数，而double类型的变量始终为浮点数；
——因此，初始值a=b=c=d=e=f=0;而g=0.000000（其实还有更多位，但只显示6位小数）
*/

/*
    g = e *1.0/ f;
——需要注意的是，不能直接写 g = e / f ;
——因为上面提到，整数的运算结果只能是整数；
——而 e 和 f 都是 int 类型的变量，显然会抹掉结果的小数部分；
——这样，即使 g 是 double 类型的变量，也不会得到正确结果；
——比如，当 e=10 ，f=3 时，显示 10÷3=3.000000 ；
——
——而不幸的是，虽然问题出在 e 和 f 的类型名称 int 上，更改 int 为 double 并不能完全解决问题；
——因为，这样会让 e 变为10.000000， f 变为3.000000；
——显示 10.000000÷3.000000=3.333333；虽然结果对了，但是我输入的是整数，来这么多小数干啥！
——
——因此，我们不更改 int 为 double ，而是 e * 1.0 ；
——这样既利用1.0这个浮点数将结果设置为浮点数 3.333333 ，又不会影响结果；
——最终显示： 10÷3=3.333333 。
*/ 
    
/*
    printf("%d÷%d=%f\n",e,f,g );
——同理，在使用浮点数变量时，函数printf和scanf也有对应的改变；
——printf中 %d 变为 %f ；scanf中 %d 变为 %lf ；
*/

/*
如果在 double 类型的变量中，用了 %d ，会发生什么？
*/

// 下面是关于上述问题的探究。


/* 
   1.编写以下代码，输入1，观察输出结果；

   #include <stdio.h>
int main()
{
	int a ;
	
	scanf("%d", &a);
	
	printf("%d\n",a);
	
	return 0;
}
   
   2.改变变量类型名称，printf，scanf，重复上述操作；

   3.输出结果记录如下：

定义+scanf+printf:1

int   +%d +%d:1
int   +%d +%f:0.000000
int   +%lf+%d:0（代码报错）
int   +%lf+%f:0.000000（代码报错）
double+%d +%d:1
double+%d +%f:-92559592117457364459447783688012762948756726027711679117131776.000000
double+%lf+%d:0
double+%lf+%f:1.000000

结论：只有 printf 和 scanf 与变量类型配套，才能输出正确结果，否则输出离谱结果！
*/