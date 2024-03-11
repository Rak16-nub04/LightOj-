#include <stdio.h>
int main()
{
    int n,a,b;

    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&a);
        if(a<=10)
        printf("%d %d\n",(a-a), a );

        else
            printf("%d 10\n",(a-10));
    }
}
