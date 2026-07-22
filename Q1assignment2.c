 Q1

// num is divisible by 4,6
#include <stdio.h>
void main()
{ 
int num;
printf("Enter a number");
scanf("%d",&num);
if (num%4==0 && num%6==0)
{
    printf("number is divisible by 4 and 6 ");
}
else
{
printf("number is not divisible");
}

}   


Q2
// num is divisible by 4,6
#include <stdio.h>
void main()
{ 
int num;
printf("Enter a number");
scanf("%d",&num);
if (num%4==0 && num%5!=0)
{
    printf("number is divisible by 2 and not by 5 ");
}
else
{
printf("condition is not satisfied ");
}

}


Q3
// student get scholarship on the basis of marks and attendance
#include <stdio.h>
void main()
{ 
int marks ,attendance;
printf("Enter percentage of attendace ");
scanf("%d",&attendance);
if (marks>=75 && attendance>=80)
{
    printf("student get scholarship ");
}
else
{
printf("student not get scholarship ");
}

}

Q4
// age adult teenager child or senior citizen
#include <stdio.h>
void main()
{ 
int age;
printf("Enter the age of a person ");
scanf("%d",&age);
if (age>=60)
{
    printf("person is senior citizen");
}
 else if (age>=18)
{
printf("person is adult");
}
else if (age<18 && age>13)
{ 
printf("person is teenager");
}
else if (age<13)
{
    printf("it is a child")

}
}

Q5

// check wheather three sides can form a valid triangle 
#include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }

}

Q6

// check middle value among three number
#include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
        printf("Middle value = %d", a);
    else if ((b > a && b < c) || (b < a && b > c))
        printf("Middle value = %d", b);
    else
        printf("Middle value = %d", c);
}



Q7 
// sqrt given quadratic value 
#include <stdio.h>
void main()
{
    #include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);

        printf("Roots are real and different\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2*a);

        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %.2f", root1);
    }
    else
    {
        printf("Roots are imaginary");
    }
}


Q8

// write the month name using switch case
#include <stdio.h>
void main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid month number!");
    }
}
      

Q9

// write the Day name using switch case
#include <stdio.h>
void main()
{
    int Day;

    printf("Enter day number (1-7): ");
    scanf("%d", &Day);

    switch(Day)
    {
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("Invalid day number!");
    }

}
      

Q10
// write no. of days in a month switch case
#include <stdio.h>
void main()
{
    int m ;
    printf("Enter number (28/29,30,31): ");
    scanf("%d", &m);

    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
            printf("31 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
          printf("30 days");
          break;
          case 2:
          printf("28/29 days");
            break;
            default:
            printf("invalid month");

}
      
Q11
// insurance premium category 
#include <stdio.h>
void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age<25)
        printf("High Premium");
    else if(age<=50)
        printf("Medium Premium");
    else
        printf("Low Premium");


}
      

Q12

// arithmatic operations using switch
#include <stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter a value: ");
    scanf("%d%d",&a,&b);
    
    switch(ch)
    {
        case '+':
        printf("%d",a+b);
        break;
         case '-':
        printf("%d",a-b);
        break;
         case '*':
        printf("%d",a*b);
        break;
         case '/':
        printf("%d",a/b);
        break;
    } 
}

Q13

//person eligible for license 
#include<stdio.h>
void main()
{  
    int age;
    printf("Enter the age of person: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Person is eligible for license");
    }
    else
    {
        printf("Person is not eligible for license");
    }
}



