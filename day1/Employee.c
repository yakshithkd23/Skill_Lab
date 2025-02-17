// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

void main() {
    
    int id;
    char name[255];
    float salary;
    int attendence;
    
    printf("enter the id");
    scanf("%d",&id);
    
    printf("enter the name");
    scanf("%s",name);
    
    printf("enter the salary");
    scanf("%f",&salary);
    
    printf("enter the numebr of says works");
    scanf("%d",&attendence);
    
    //process payroll
    float bonus;
    float gross_salary=0.0f;
    char grade[50]="good";
    
    //calculation
    if(attendence > 25)
    {
        bonus=salary*0.5;
    }
    else if(attendence < 10){
        bonus=-1.0f*((salary/100)*50);
    }
    
    //total calcultion
    gross_salary=salary+bonus;
    
    //grade
    if(attendence>25){
        strcpy(grade,"excellent");
    }
    else if(attendence<15){
        strcpy(grade,"need to be improvement");
    }
    printf("\t ID %d\n",id);
    printf("\t name %s \n",name);
    printf("\t salary %f\n",salary);
    printf("\t bonus %f\n",bonus);
    printf("\t total salary %f\n",gross_salary);
    printf("\t grade %s\n",grade);
}

