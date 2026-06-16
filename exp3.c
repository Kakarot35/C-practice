# include<stdio.h>

int main ()
{
    int i,j,n,type,isPrime;
    
    printf("Welcome to our program\n");

    printf("Enter between 1-3:");
    scanf("%d ", &type);

    switch(type){
        case 1 :
    printf("Welocme to n even number series\n");
    printf("Enter your n terms:");
    scanf("%d",&n);

    printf("your even number are:");

    for ( i = 0; i<=n; i++)
    {
        
       if (i%2 == 0)
       {
           printf("%d\n",i); 
       }
    }
            break;
        case 2 :
    printf("Welocme to n odd number series\n");
    printf("Enter your n terms:");
    scanf("%d",&n);

    printf("your odd number are:");

    for ( i = 0; i<=n; i++)
    { 
        if (i%2 != 0)
        {
          printf("%d\n",i);
        }
    }
            break;
        case 3 :
        printf("welcome to n terms of prime number\n");

    printf("Enter your n terms:");
    scanf("%d", &n);

    printf("your prime number are:");


    for ( i = 2; i <=n; i++)
    {
        isPrime=1;

        for (j = 2 ; j<=i/2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0 ;
                break;
            }
        }
            if ( isPrime == 1)
            {
                
                printf("%d  ", i);
            }  
    }
    }
return 0 ;
}
