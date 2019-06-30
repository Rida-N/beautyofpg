#include <windows.h>
#include <time.h>
int main()
{
    // 仅仅能让cpu使用率维持在大约10%
    const int busyTime = 10;
    const int idleTime = busyTime;
    int startTime = 0;
    while (true)
    {
        startTime = GetTickCount();
        while((GetTickCount()-startTime)<=busyTime);

        Sleep(idleTime);
    }

    return 0;
}
