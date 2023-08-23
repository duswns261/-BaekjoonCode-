#include <stdio.h>
#include <stdlib.h>

struct coord {
    int x;
    int y;
};

int compare(const void *a, const void *b) {
    coord A = *(coord *)a;
    coord B = *(coord *)b;
    
    if (A.y > B.y) {
        return 1;
    }
    else if (A.y == B.y)
    {
        if (A.x > B.x) {
            return 1;
        } else {
            return -1;
        }
    }
    return -1;
}

int main() {
    
    int iNum;
    scanf("%d", &iNum);
    
    coord arrCoord[iNum];
    int i = 0;
    while (i < iNum) {
        scanf("%d %d", &arrCoord[i].x, &arrCoord[i].y);
        i++;
    }
    qsort(arrCoord, iNum, sizeof(coord), compare);
    i = 0;
    while (i < iNum) {
        printf("%d %d \n", arrCoord[i].x, arrCoord[i].y);
        i++;
    }
    
    return 0;
}