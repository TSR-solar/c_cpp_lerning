## printf
printf还可以用来做计算。见下方代码(printf.c)：

```c
#include <stdio.h>

int main()
{
	printf("hello，114+514=%d\n", 114+514);
	return 0;
}
```
这个代码可以输出数字之间的运算；

```c
printf("hello，114+514=%d\n", 114 + 514);
```

%d 说明后面要有1个整数输出在这个位置上，在后面接一个逗号，填入计算式（当然也可以是一个数）；
则程序运行过程中，%d 将被替换为计算结果 114+514=628，所以输出：

> hello，114+514=628

在C语言中，四则运算符略有不同：
加号与减号不变；
**乘号为 * ，不是 ×**;  
**除号为 / ，不是 ÷** *（实际上也很难打出错误的那一个）* 

另外，还有**取余符号%**，读作“模”;  
514%14即为514/14=36...10，取余数10，所以514%14=10

## scanf

相对于printf用于输出，函数scanf可以用于输入数据用于计算;
不过最后还是要用printf输出计算后的数据;
例(scanf.c)：

```c
#include<stdio.h>
int main()
{
	int atk=0;//定义变量atk，初始值为0（也可以是其它数值，但必须是整数）
	printf("I have 100 hp now,and please attack me.\n All you need to do is to input your attack here:");
	scanf("%d",&atk);
	int hp = 100 - atk;//定义另一个变量hp，它的初始值为 100 - atk ;若先前输入20，则hp的初始值为 100 - 20 = 80 ;
	printf("OK,now I only have %d hp.\n", hp);
	return 0;
}
```

  运行代码，此时屏幕上显示：

>I have 100 hp now,and please attack me.\n All you need to do is to input your attack here:

此时可以在窗口输入内容；
若为整数，则 &atk 会将输入的内容存储到变量atk上；**若 &atk 没有 & ，代码会直接崩溃。**
若不为整数，则**直接忽略**你输入的内容，atk**仍为初始值0**；

接下来就很熟悉了，若输入20，则应该输出:
>OK,now I only have 80 hp.

注意：若攻击超过100，血量**可以为负**；

## stdio：C语言标准输入输出

都讲了C++的输出了，是时候讲一下stdio到底是什么了；

看到stdio.h时，会发现，std就是C++里面的标准命名空间，而i代表input，o代表output；  
因此，stdio的意思就是标准输入输出；

那我们就知道了，stdio包括stdin stdout，此外还有stderr，用来记录报错；

正是引入的头文件里面这些标准输入输出，让我们能够实现人机交互；  
通过向机器输入一些数据，让机器通过程序计算来向人类输出预期结果；

在C语言中，stdin和stdout主要是由scanf和printf函数来完成的；   
除此之外还有getchar/putchar;gets/puts等形式；

scanf用于从标准输入获取数据并格式化，而printf用于向标准输出发送数据并格式化;
没错，在这里标准输入就是键盘，标准输出就是你的电脑屏幕;

什么是格式化呢？就是通过一些特殊字符（如百分号或转义字符）将函数后面的参数转化;
比如%d可以转换为整型变量，%f可以转换为浮点型变量;
此外，还可以在百分号后面加上若干正则，来进一步修饰限制参数格式;