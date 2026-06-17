//(ax+b)/(ax-b)
# include  <stdio.h>
void main(){
    int a,b,x;

    printf("Enter value of \'a\',\'b\'nad \'x\'");
    scanf("%d %d %d ",&a,&b,&x);
    int eq;
    eq= a*x+b/a*x-b;
    printf("Then answer is =%d",eq);
 getchar();
}
