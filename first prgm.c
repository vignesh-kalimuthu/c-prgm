#include <stdio.h>
#include <string.h>
int main()
{
    int  regno,english,maths,physics,chemistry,computerscience;
    float total,average;
    char name[30];
    
    printf("Enter your name:\n");
    scanf("%s",&name);
    printf("Enter your RegNo:\n");
    scanf("%d",&regno);
    printf("Enter the Marks of Five Subjects:\n");
    scanf("%d%d%d%d%d",&english, &maths, &physics, &chemistry, &computerscience);
    total=english+maths+physics+chemistry+computerscience;
    average=total/5;
    printf("Total Marks=%.2f\n",total);
    printf("Average Marks=%.2f\n",average);
    
    return 0;
    
}   
