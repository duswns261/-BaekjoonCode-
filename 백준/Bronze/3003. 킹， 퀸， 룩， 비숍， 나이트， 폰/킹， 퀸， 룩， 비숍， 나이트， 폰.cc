#include <iostream>

int main()
{
    int Input[6] = { 0,}, Output[6] = {0,}, Base[6] = {1, 1, 2, 2, 2, 8};
    
    for(int i=0; i<6; i++)
    {
        scanf("%d ", &Input[i]);
        if(Base[i] == Input[i])
            Output[i] = 0;
        else 
            Output[i] = Base[i]-Input[i];
        printf("%d ", Output[i]);
    }
    return 0;
}