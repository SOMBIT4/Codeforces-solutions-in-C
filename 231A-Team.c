#include <stdio.h>
int main ()
{
    int i,count=0,t,a,b,c,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        sum=0;
        sum=sum+a+b+c;
        if(sum>=2){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
