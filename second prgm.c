#include<stdio.h>
#include<string.h>
void main()
{
    int  regno,english,maths,physics,chemistry,computerscience;
    float total,average;
    char name [30];
    
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
    if(average<0||average>100)
      {
          printf("wrong entry");
      }
      else if(average<50)
      {
          printf("Grade U");
      }
      else if(average>=50&&average<60)
      {
          printf("Grade D");
      }
      else if(average>=60&&average<70)
      {
          printf("Grade C");
      }
      else if(average>=70&&average<80)
      {
          printf("Grade B");
      }
      else if(average>=80&&average<90)
      {
          printf("Grade A");
      }
      else 
      {
          printf("Grade S");
      }

  return 0;
}
