#include <stdio.h>
int main()
{
int n,m;
int i,i_1,i_2,i_3,i_4;
scanf("%d %d",&n,&m);
int a[n+1];
int answer[m];
i_1=0;
for (i_3=0;i_3<=n;i_3++){
        scanf("%d",&a[i_3]);
}
for (i=1;i<=m;i++){
        int ans;
                for (i_4=0;i_4<=n;i_4++){
                        ans=a[i_4]*i^a[i_4];
						//printf("i=%d\tans=%d\n",i,ans);
					}
        if (ans==0){
                answer[i_1]=i;
                i_1++;
        }
}
//printf("\nThere are %d answers.They are:\n",i_1);
printf("%d\n",i_1);
for (i_2=1;i_2<=(i_1);i_2++){
        printf("%d",answer[i_2-1]);
}
return 0;
}
