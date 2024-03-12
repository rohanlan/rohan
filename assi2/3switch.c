#include <stdio.h>
int main()
{
    int Employeeid;
    printf("Enter Employee id: ");
    scanf("%d", &Employeeid);
    int Departmentno;
    printf("Enter Department no: ");
    scanf("%d", &Departmentno);
    char dsgncode;
    printf("Enter Designation Code: ");
    scanf(" %c", &dsgncode);

    printf("Employee with employee id %d is working in ", Employeeid);

    switch (Departmentno)
    {
    case 10:
        printf("Marketing department as");
        break;

    case 20:
        printf("Management department as ");
        break;

    case 30:
        printf("Sales department as");
        break;

    case 40:
        printf("Designing department as");
        break;
    }
    switch (dsgncode)
    {
    case 'M':
        printf(" Manager");
        break;

    case 'S':
        printf(" Supervisor");
        break;

    case 's':
        printf(" Security Officer");
        break;

    case 'C':
        printf(" Clerk");
        break;
    }
}