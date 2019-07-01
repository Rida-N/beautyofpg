#include "windows.h";
#include "stdlib.h";
#include "math.h";

const int SAMPLING_COUNT = 50;
const double PI = 3.1415926535;
const int TOTAL_AMPLITUDE = 300;
int main()
{
    // 成功让电脑CPU使用率成为一条sin曲线，啧啧，漂亮
    int busySpan[SAMPLING_COUNT];
    int amplitude =TOTAL_AMPLITUDE/2;
    double radian =0.0;
    double radianIncrement =2.0/(double)SAMPLING_COUNT;
    for (int i = 0; i < SAMPLING_COUNT; i++)
    {
        busySpan[i]= amplitude*(1+sin(PI*radian));
        radian+= radianIncrement; 
    }

    int startTime=0;
    /**
     * 永远循环
     */
    for (int j = 0;; j=(j+1)%SAMPLING_COUNT) // 漂亮的写法
    {
        startTime = GetTickCount();
        while(GetTickCount()-startTime<=busySpan[j]);
        Sleep(TOTAL_AMPLITUDE-busySpan[j]);
    }
    return 0;
    
}
