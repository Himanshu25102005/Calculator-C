#include <stdio.h>
#include <math.h>
double pi =3.14;
int add(int a , int b )
{
  return a+b;
}

int sub(int a,int b)
{
  return a-b;
}

int mul(int a,int b)
{
  return a*b;
}

int div(int a,int b)
{
  if(b==0)
  {
    return 0;
  }
  else
  {
    return a/b;
  }
}

int fact(int a)
{
  if (a==0)
  { 
    return 1;
  }
  if(a<0)
  {
    printf("Enter a positive response ");
    return 0;
  }
  if(a>0)
  {
    int x=1;
    for(int i =0;i<a;i++)
      {
        x = (a-i)*x;
      }
    return x;
  }
}

int mod(int a ,int b)
{
  if (b==0)
  {
    return 0;
  }
  else
  {
    return a%b;
  }
}

int square(int a)
{
  return a*a;
}

double DegreeToRadian(double degree)
{
  return degree*(pi/180);
}

double power(double a, double b)
{
  return pow(a,b);
}

double loga(a)
{
  return log10(a);
}

double root(a)
{
  return sqrt(a);
}

int main()
{
  int choice, x,y,res;
  double degree,temp,angle,base,exp;
printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. mod\n");
        printf("7. square\n");
        printf("8. trigonometric values\n");
        printf("9. Power\n");
        printf("10. Log(base 10)\n");
        printf("11. root\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

  switch(choice)
    {
      case 1: 
        printf("enter two numbers\n");
        scanf("%d%d",&x,&y);
        res = add(x,y);
        printf("Addition of %d and %d is %d\n",x,y,res);
      break;

      case 2:
        printf("Give two numbers\n");
        scanf("%d%d",&x,&y);
        res = sub(x,y);
        printf("Addition of %d and %d is %d\n",x,y,res);
      break;

      case 3:
        printf("Give two numbers\n");
        scanf("%d%d",&x,&y);
        res = mul(x,y);
        printf("  %d times %d is %d \n",x,y,res);
      break;

      case 4:
        printf("Give two numbers\n");
        scanf("%d%d",&x,&y);
        res = div(x,y);
        printf("  %d divided by %d is %d \n",x,y,res);
      break;

      case 5:
        printf("Give a number\n");
        scanf("%d",&x);
        res = fact(x);
        printf("  %d factorial is %d \n",x,res);
      break;

      case 6:
        printf("Give two numbers\n");
        scanf("%d%d",&x,&y);
        res = mod(x,y);
        printf("  %d/%d yields %d as remainder \n",x,y,res);
      break;

      case 7:
        printf("Give a number\n");
        scanf("%d",&x);
        res = square(x);
        printf("  %d times %d is %d \n",x,res);
      break;

      case 8:
        printf("Function Menu \n");
        printf("1. sine\n");
        printf("2. cosine\n");
        printf("3. tangent\n");
        printf("4. secant\n");
        printf("5. cosecant\n");
        printf("6. cotangent\n");
        printf("7. Exit\n");
        printf("Enter your choice:\n ");
        scanf("%d", &choice);

         printf("\n");
        
        switch(choice){

          case 1: 
          printf("Enter angle(in deg)\n");
          scanf("%lf",&degree);
          angle=sin(DegreeToRadian(degree));
          printf("sin(%lf) is %lf",degree,angle);
          break;

          case 2: 
          printf("Enter angle(in deg)\n");
          scanf("%lf",&degree);
          angle=cos(DegreeToRadian(degree));
          printf("cos(%lf) is %lf",degree,angle);
          break;

          case 3: 
          printf("Enter angle(in deg)\n");
          scanf("%lf",&degree);
          angle=tan(DegreeToRadian(degree));
          printf("tan(%lf) is %lf",degree,angle);
          break;

          case 4:
          printf("Enter angle(in deg)\n");
          scanf("%lf",&degree);
          temp=cos(DegreeToRadian(degree));
          angle=1/temp;
          printf("sec(%lf) is %lf",degree,angle);
          break;

          case 5: 
          printf("Enter angle(in deg)\n");
          scanf("%lf",&degree);
          temp=cos(DegreeToRadian(degree));
          angle=1/temp;
          printf("cosec(%lf) is %lf",degree,angle);
          break;

          case 6:
          printf("Enter angle(in deg)\n");
          scanf("%lf",&degree);
          temp=tan(DegreeToRadian(degree));
          angle=1/temp;
          printf("cot(%lf) is %lf",degree,angle);
          break;

          case 7:
          printf("Exiting....\n");
          return 0;

          default:
          printf("Invalid choice .\n");
        }
        
         break;

         case 9:
        printf("enter base and exponent\n");
        scanf("%lf%lf",&base,&exp);
        if(base==0)
        {
          printf("%lf^%lf = 0\n",base,exp);
        }
        else if(exp==0)
        {
          printf("%lf^%lf = 1 \n",base,exp);
        }
        else 
        {
        temp=power(base,exp);
          printf("%lf^%lf = %lf\n",base,exp,temp);
        }
      break;

      case 10:
        printf("Enter argument \n");
        scanf("%lf",&base);
        temp=loga(base);
        printf("log%lf=%lf",base,temp);
        
      break;

      case 11:
        printf("Give the number \n");
        scanf("%lf",&base);
        temp=root(base);
        printf("Root(%lf)=%lf",base,temp);
        
      break;
      case 12:
                printf("Exiting...\n");
                return 0; 
            default:
                printf("Invalid choice. Please try again.\n");
    }
  }