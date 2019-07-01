#include <iostream>
#include <windows.h> 

int main(){
    for(;;){
    /* CPU
	Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz

	基本速度:	1.99 GHz
	ソケット:	1
	コア:	4
	論理プロセッサ数:	8
	仮想化:	有効
	L1 キャッシュ:	256 KB
	L2 キャッシュ:	1.0 MB
	L3 キャッシュ:	8.0 MB
    */
   // TO BE CHECKED ... 不是太懂,cpu使用率基本维持在18%上下浮动，调整数字到1,300,000后也没有太大变动。调整到多一个数量级以后cpu使用率曲线浮动更频繁幅度也加大。
   // 追记：原因应该是这台电脑CPU是四核的，所以这个程序就只是在让一个core的使用率在一半左右上下浮动，也就是12.5%左右。
        for (int i = 0; i < 9600000; i++);
        Sleep(1000);
    }
    return 0;
}