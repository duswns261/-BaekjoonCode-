#include <iostream>
#include <vector>

int main()
{
    int a = 0, b = 0, c = 0, res = 0;
    std::vector<int> va;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d ", &b);
        va.push_back(b);
    }
    scanf("%d", &c);
    for (int i = 0; i < va.size(); i++)
    {
        if (c == va.at(i)) res++;
    }
    printf("%d", res);
    return 0;
}