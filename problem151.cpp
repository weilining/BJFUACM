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