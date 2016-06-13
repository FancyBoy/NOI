#include <stdio.h>
int main()
{
char input_1;
int input_2;
float input_3;
double input_4;
//单个字符要用%c
scanf("%c",&input_1);
scanf("%d",&input_2);
scanf("%f",&input_3);
scanf("%lf",&input_4);
printf("%c %d %.6f %.6lf",input_1,input_2,input_3,input_4);
}
