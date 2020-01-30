#include<stdio.h>
int main()
{
    int n, count=0;
    scanf("%d",&n);
    while (n--)
    {
        int in;
        bool ox = false;
        scanf("%d", &in);
        if (in > 1)
        {
            for (size_t i = 2; i < in; i++)
            {
                if (in % i == 0)
                {
                    ox = true;
                }
            }
            if (!ox)
            {
                count++;
            }
        }   
    }
    printf("%d", count);

    return 0;
    
}