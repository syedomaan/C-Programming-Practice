#include <stdio.h>
#include <math.h>
int main()
{
    int o,i,f=1,t;
    float a,b,x,n,d;

    printf("*****(ENTER OPERATION)******\n ~addition (1)\n ~subtraction (2)\n ~Multiplication (3)\n ~divition (4)\n ~square root (5)\n ~power (6)\n ~factorial (7)\n ~percentage (8)\n ~trigonometry funtion (9)\n");

    scanf("%d",&o);

    if(o==1 || o==2 || o==3 || o==4 || o==5 || o==6 || o==7 || o==8)
    {
        printf("enter a=\n");
        scanf("%f",&a);

        switch(o)
        {
        case 1:
            printf("enter b=\n");
            scanf("%f",&b);
            printf("a+b=%.2f\n",a+b);
            break;

        case 2:
            printf("enter b=\n");
            scanf("%f",&b);
            printf("a-b=%.2f\n",a-b);
            break;

        case 3:
            printf("enter b=\n");
            scanf("%f",&b);
            printf("a*b=%.2f\n",a*b);
            break;

        case 4:
            printf("enter b=\n");
            scanf("%f",&b);

            if(b==0)
            {
                printf("cannot divide by zero\n");
            }
            else
            {
                printf("a/b=%.3f\n",a/b);
            }
            break;

        case 5:
            if(a<0)
            {
                printf("invalid input\n");
            }
            else
            {
                printf("√%.1f=%.3f\n",a,sqrt(a));
            }
            break;

        case 6:
            printf("enter power=\n");
            scanf("%f",&b);

            if(a==0 && b<0)
            {
                printf("invalid power\n");
            }
            else
            {
                printf("%.1f to the power of %.1f =%.3f\n",
                       a,b,pow(a,b));
            }
            break;

        case 7:
            if(a>12 || a!=(int)a || a<0)
            {
                printf("enter a non-negative integer up to 12\n");
            }
            else
            {
                f=1;

                for(i=1; i<=a; i++)
                {
                    f=f*i;
                }

                printf("factorial of %.0f is =%d\n",a,f);
            }
            break;

        case 8:
            printf("%.1f %% of=\n",a);
            scanf("%f",&b);

            if(b==0)
            {
                printf("cannot divide by zero\n");
            }
            else
            {
                printf("%.2f %% %.2f=%.3f%%\n",
                       a,b,(a/100)*b);
            }
            break;
        }
    }

    if(o==9)
    {
        printf("(SELECT TRIGONMETRY FUNTION)\n sin (1)\n cos (2)\n tan (3)\n sec (4)\n cosec (5)\n cot (6)\n");

        scanf("%d",&t);

        switch(t)
        {
        case 1:
            printf("enter angle=\n");
            scanf("%f",&d);
            printf("sin(%.1f)=%.2f\n",
                   d,sin(d*3.14/180));
            break;

        case 2:
            printf("enter angle=\n");
            scanf("%f",&d);
            printf("cos(%.1f)=%.2f\n",
                   d,cos(d*3.14/180));
            break;

        case 3:
            printf("enter angle=\n");
            scanf("%f",&d);
            printf("tan(%.1f)=%.2f\n",
                   d,tan(d*3.14/180));
            break;

        case 4:
            printf("enter angle=\n");
            scanf("%f",&d);
            printf("sec(%.1f)=%.2f\n",
                   d,1/cos(d*3.14/180));
            break;

        case 5:
            printf("enter angle=\n");
            scanf("%f",&d);
            printf("cosec(%.1f)=%.2f\n",
                   d,1/sin(d*3.14/180));
            break;

        case 6:
            printf("enter angle=\n");
            scanf("%f",&d);
            printf("cot(%.1f)=%.2f\n",
                   d,1/tan(d*3.14/180));
            break;
        }
    }

    return 0;
}