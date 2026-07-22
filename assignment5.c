 1
 // 1 to n 

#include<stdio.h>

void main()
{
    int n,i;

    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }


//10 to n 

#include<stdio.h>

void main()
{
    int n,i;

    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }


// even no. between 1 to n 
#include<stdio.h>
void main()
{
    int n,i;

    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
        printf("%d ",i);
    }

   
}


//odd nos bw 1 to n 
#include<stdio.h>

void main()
{
    int n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        printf("%d ",i);
    }

}


//sum of nos 1 to n 
#include<stdio.h>

void main()
{
    int n,i,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("Sum = %d",sum);

}



//find factorial of a no.
#include<stdio.h>

void main()
{
    int n,i;
    long long fact=1;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("Factorial = %lld",fact);


}


//multiplication table 
#include<stdio.h>

void main()
{
    int n,i;

    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }

}


//check orime no.
#include<stdio.h>

void main()
{
    int n,i,flag=1;

    scanf("%d",&n);

    if(n<=1)
        flag=0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    
}

//HCF of two no.
#include<stdio.h>

void main()
{
    int a,b,i,hcf;

    scanf("%d%d",&a,&b);

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }

    printf("HCF = %d",hcf); 
}

//LCM of two no. 
#include<stdio.h>

void main()
{
    int a,b,max;

    scanf("%d%d",&a,&b);

    max=(a>b)?a:b;

    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("LCM = %d",max);
            break;
        }
        max++;
    }

} 

//Fibbonacci series
#include<stdio.h>

void main()
{
    int n,a=0,b=1,c,i;

    scanf("%d",&n);

    printf("%d %d ",a,b);

    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);

        a=b;
        b=c;
    }

}

//print all factors 
#include<stdio.h>

void main()
{
    int n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }

 
}

//count total factors 
#include<stdio.h>

void main()
{
    int n,i,count=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    printf("Total Factors = %d",count);

 
}


//power of no.
#include<stdio.h>

void main()
{
    int a,b,i;
    long long power=1;

    scanf("%d%d",&a,&b);

    for(i=1;i<=b;i++)
    {
        power=power*a;
    }

    printf("Answer = %lld",power);

    
}

//print series 9 99 999

#include<stdio.h>
 void main()
{
    int n,i;
    long long num=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        num=num*10+9;
        printf("%lld ",num);
    }

   
}

//print series 1 11 111
#include<stdio.h>
  void main()
{
    int n,i;
    long long num=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        num=num*10+1;
        printf("%lld ",num);
    }

   
}