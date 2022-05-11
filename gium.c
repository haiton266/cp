#include <stdio.h>
typedef enum
{
    false,
    true
} bool;
bool kt[10000001];
void snt(int n)
{
    for (int i = 2; i <= n; i++)
        kt[i] = true;
    kt[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (kt[i])
        {
            int j = 2;
            while (j * i <= n)
            {
                kt[j * i] = false;
                j++;
            }
        }
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    snt(num);
    for (int i = 2; i < num; i++)
        if (kt[i])
            printf("%d ", i);
    return 0;
}
