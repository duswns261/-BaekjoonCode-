#include <iostream>

int main()
{
    int iCookSHour, iCookSMinute, iCookNeedTime;
    int iCookNeedHour, iCookNeedMinute;
    int iCookResHour, iCookResMinute;
    scanf("%d %d", &iCookSHour, &iCookSMinute);
    scanf("%d", &iCookNeedTime);
    iCookNeedHour = iCookNeedTime / 60;
    iCookNeedMinute = iCookNeedTime - (iCookNeedHour * 60);
    iCookResHour = iCookSHour + iCookNeedHour;
    iCookResMinute = iCookSMinute + iCookNeedMinute;
    if (iCookResMinute > 59)
    {
        iCookResHour += 1;
        iCookResMinute -= 60;
    }
    if (iCookResHour > 23) iCookResHour = iCookResHour - 24;
    printf("%d %d", iCookResHour, iCookResMinute);
    
    return 0;
}