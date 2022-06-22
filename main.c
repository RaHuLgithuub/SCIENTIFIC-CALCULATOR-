#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #define pi 3.14159
 int main(void)
 {
    int c,i,p,q,a;
    float x, y, ans;
    do {
printf("\nSelect operation: (0 to exit):\n");
        printf(" 1 for Addition\n 2  Subtraction\n 3 for Multiplication\n 4 for Division\n 5 for Square root\n 6 for          Square of x \n 7 for cube of x \n 8 for x^y\n 9 for 1/x \n 10 for  x^(1/3) \n 11 for x^(1/y)\n");
printf(" 12 for 10^x \n 13 for x! \n 14 for percentage \n 15 for Modulus\n 16 for log10(x)\n 17 for sin(x)\n 18 for cos(x) \n 19 for tan(x) \n 20 for Cosec(X)\n 21 for sec(x) \n 22 for cot(x)\n");
        printf(" Enter you choice: ");
        scanf("%d",&c);
        if(c==0)
        exit(0);
        switch(c){
            case 1:
            printf("Enter the value of x and y respectively:");
            scanf("%f %f",&x,&y);
            ans=x+y;
            printf("\n Answer is: %f",ans);
            break;

            case 2:
            printf("Enter the value of x and y respectively:");
            scanf("%f %f",&x,&y);
            ans=x-y;
            printf("\n Answer is: %f",ans);
            break;

            case 3:
            printf("Enter the value of x and y respectively: ");
            scanf("%f %f",&x,&y);
            ans=x*y;
            printf("\n Answer is: %f",ans);
            break;

            case 4:
            printf("Enter the value of x and y respectively: ");
            scanf("%f %f",&x,&y);
            ans=x/y;
            printf("\n Answer is: %f",ans);
            break;

            case 5:
            printf("Enter the value of x:");
            scanf("%f",&x);
            ans=sqrt(x);
            printf("\nAnswer is:%f",ans);
            break;

            case 6:
            printf("Enter the value of X:");
            scanf("%f",&x);
            ans= x*x;
            printf("\n Answer is:%f",ans);
            break;

            case 7:
            printf("Enter the value of x: ");
            scanf("%f",&x);
            ans=pow(x,3);
            printf("\nAnswer is: %f",ans);
            break;

            case 8:
            printf("Enter the value of x and y respectively: ");
            scanf("%f %f",&x,&y);
            ans=pow(x,y);
            printf("\nAnswer is :%f",ans);
            break;

            case 9:
            printf("Enter the value of x: ");
            scanf("%f",&x);
            ans=pow(x,-1);
            printf("\nAnswer is: %f",ans);
            break;

            case 10:
            printf("Enter the value of x: ");
            scanf("%f",&x);
            ans=pow(x,(1/3));
            printf("\n Answer is: %f",ans);
            break;

            case 11:
            printf("Enter the value of x and y respectively: ");
            scanf("%f %f",&x,&y);
            ans=pow(x,(1/y));
            printf("\nAnswer is: %f",ans);
            break;

            case 12:
            printf("Enter the value of x: ");
            scanf("%f",&x);
            ans=pow(10,x);
            printf("\nAnswer is: %f",ans);
            break;

            case 13:
            printf("Enter the value of x: ");
            scanf("%f",&x);
            ans=1;
            for(i=1;i<=x;i++) {
                ans*=i;
            }
            printf("Answer is: %.f",ans);
            break;

            case 14:
            printf("Enter the value of x: ");
            scanf("%f",&x);
            printf("\n Enter how much percent:");
            scanf("%f",&y);
            ans=(x * y) /100;
            printf("\nAnswer is: %.2f",ans);
            break;

            case 15:
            printf("Enter the value of x and y respectively: ");
            scanf("%d %d",&p,&q);
            a=p%q;
            printf("\nAnswer is: %d",a);
            break;

            case 16:
            printf("Enter the value of x: ");
            scanf("%f",&x);
            ans=log10(x);
            printf("\n Answer is: %.2f",ans);
            break;

            case 17:
            printf("Enter x (in degrees): ");
            scanf("%f",&x);
            ans= sin(x*pi/180);
            printf("\nAnswer is: %.2f",ans);
            break;

            case 18:
            printf("Enter x (in degrees): ");
            scanf("%f",&x);
            ans=cos(x*pi/180);
            printf("\nAnswer is: %.2f",ans);
            break;

            case 19:
            printf("Enter x (in degrees): ");
            scanf("%f",&x);
            ans=tan(x*pi/180);
            printf("\nAnswer is: %.2f",ans);
            break;

            case 20:
            printf("Enter x (in degrees): ");
            scanf("%f",&x);
            ans=1 / (sin(x*pi/ 180));
            printf("\nAnswer is: %.2f",ans);
            break;

            case 21:
            printf("Enter x (in degrees): ");
            scanf("%f",&x);
            ans=1 / cos(x*pi / 180);
            printf("\nAnswer is: %.2f",ans);
            break;

            case 22:
            printf("Enter x (in degrees): ");
            scanf("%f",&x);
            ans=1 / tan(x*pi / 180);
            printf("\n Answer is: %.2f",ans);
            break;

            default:
            printf("\n Invalid Choice");
        }
    }
    while(c);
    return 0;
}
