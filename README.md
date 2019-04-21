[TOC]

# BJFUACM



###排序输出

[http://www.bjfuacm.com/problem/151](http://www.bjfuacm.com/problem/151)
描述

给你一些整数，请将它们排序后输出。


输入

输入首先包含一个正整数T(0<T<100)，表示测试数据组数。

接下来T组测试数据。

每组测试数据首先包含一个正整数m(m<=5000000),表示本组测试数据包含的数据个数,然后是m行,每行一个正整数n(n<=100000)


输出

对每组测试数据，请将所有数据排序后输出，为了简单一点，相同的数只需要输出一次，每个数据占一行。

输入样例 1 

```
2
3
112
111
112
6
1
12345
98765
12008
12010
2009
```

输出样例 1

```
111
112
1
2009
12008
12010
12345
98765
```

提示

本题的测试数据比较多,请使用scanf与printf而不是cin与cout来避免超时

来源

BJFUACM

思路：

创建模板，出现的数令为1，顺序输入。
```c++
#include <iostream>
#include <cstdio>   //freopen函数在这个文件中

using namespace std;  //这里是从文件读入，写到文件output中（屏幕没有显示，因为改变了输出流）

#define N 100000+5

int main() {
#ifndef ONLINE_JUDGE    //if not define 如果没有定义这个的话就执行下面
    freopen("input.txt", "r", stdin);   //只改变输入流的文件指针，读入这个文件的内容（必须要有input这个文件）stdin是标准输入流的文件指针
    freopen("output.txt", "w", stdout);  //只改变输出流的文件指针，写入output内（如果没有output这个文件就会自动生成）stdout是标准输出流的文件指针
#endif

    int t,m;
    scanf("%d",&t);
    for (int i = 0; i < t; ++i) {
        int array[N]={0};
        scanf("%d",&m);
        for (int j = 0; j < m; ++j) {
            int temp;
            scanf("%d",&temp);
            array[temp]=1;
        }
        for (int k = 0; k < N; ++k) {
            if(array[k]){
                printf("%d\n",k);
            }
        }
    }

    return 0;
}
```