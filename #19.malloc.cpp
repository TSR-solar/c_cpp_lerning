/*
指针也可以用于运算，可以对一个指针进行加减，或自增自减；
运算后的结果就是指针所指的地址加或减了一个数字；
注意：加减的数字必须是指针字节内存的倍数！

除此之外，两个指针之间也可以相减；得到的是指针之间的字节数减一，再除以变量的大小；
	如以下的程序：

	int a[6] = { 0 };
	int* p = a;
	int* q = &a[6];
	printf("%d\n", q - p);

由于a[0]和a[6]之间有28个字节，减一后除以4（int），最后输出6；（6-0=6）

指针如变量一样有许多类型；但还有额外的类型，就是 void* 类型；
它表示该指针所指的变量类型未知；
由于变量类型未知，所以无法通过取值运算符访问指针所指的变量数值；
但变量本身类型没有变化；
void* 类型所占的字节数也为1；
*/

#include <stdio.h>
/*
在实际情况中，有时我们事先不知道数组的内存，或者数组的内存要循环使用；
这时，我们就需要使用malloc函数，来进行动态内存分配；*/
//不过在使用malloc系列的函数时，我们要先加入如下代码：
#include <stdlib.h>
/*
malloc函数的使用方法是在malloc函数中用小括号输入一个数字，这个数字就是指针的内存大小（单位：字节）
注意：指针返回的就是 void 类型的指针，所以还需要用强制转换运算符来把malloc得到的内存返回；
*/
//如下面的例子：
int main()
{
	int i = 0;
	int* a = (int*)malloc(10*sizeof(int));
/*
malloc函数是从系统内存中借来的空间，不是自己地址的空间；
所以，使用完数组之后，还得还给系统；
这时就需要使用free函数；
*/
	free(a);	//就这么使用
/*
当你没有使用free函数时，占用的内存就会积累下来，直到程序结束再释放；
如果你非常不幸地把内存用完了，malloc找不到新的内存了，就会返回0地址；
而若返回了0地址，程序立即结束；

值得一提的是，free函数只能释放申请来的地址，而地址不能有任何变化；
这也就是说，a++后就不能再使用free函数；
*/
	return 0;
}