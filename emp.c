
#include<stdio.h>

struct Employee
{
int Id;
char Name[25];
int Exp;
float Salary;
};

void main()
{
int i;
struct Employee Emp[ 5 ];

              for(i=0;i<5;i++)
        {

            printf("\nEnter details of  Employee");

            printf("\nEnter Employee Id : ");
            scanf("%d",&Emp[i].Id);

            printf("\nEnter Employee Name : ");
            scanf("%s",&Emp[i].Name);

            printf("\nEnter Employee Exp : ");
            scanf("%d",&Emp[i].Exp);

            printf("\nEnter Employee Salary : ");
            scanf("%f",&Emp[i].Salary);
        }

printf("\nDetails of Employees");
for(i=0;i<5;i++)
printf("\n%d %s %d %f",Emp[i].Id,Emp[i].Name,Emp[i].Exp,Emp[i].Salary);

}
