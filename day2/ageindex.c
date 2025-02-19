
#include <stdio.h>
void displayages(short int ages[],int n ,int index);
int main()
{
    short int ages[]= {45,42,14,30,70};
    displayages(ages,5,0);
    return 0;
}

void displayages(short int ages[],int n,int index)
{

  if(index== n)
  {
      return;
  }
  printf("%d  \t ",ages[index]);
  return displayages(ages,n,index+1);
}
