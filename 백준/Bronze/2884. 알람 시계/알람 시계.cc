#include<iostream>

int main()
{
    int ihh, imm;
    int iAnshh, iAnsmm;
    scanf("%d %d", &ihh, &imm);
    
    if (imm < 45)
    {
        if (ihh ==  0)
        {
            iAnshh = 23;
            iAnsmm = imm + 15;
        }
        else
        {            
            iAnshh = ihh-1;
            iAnsmm = imm + 15;
        }
    }
    else
    {
        iAnshh = ihh;
        iAnsmm = imm - 45;
    }
   
    printf("%d %d", iAnshh, iAnsmm);
    return 0;
}