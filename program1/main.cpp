#include <stdio.h>
int main()
{
    double num1, num2;
    char op;
    double result;
    printf("Enter two numbers and an operator: ");
    scanf("%lf %c %lf", &num1, &op, &num2);
    switch (op)
    {
    case '+':
    {
        result = num1 + num2;
        printf ("%lf", result);
        break;
    }
    case '-':
    {
        result = num1 - num2;
        printf("%lf", result);
        break;
    }    
    case '*':
    {
        result = num1 * num2;
        printf("%lf", result);
        break;
    }    
    case '/':
    { 
        if (num2 == 0)
        {
            printf("divide by 0\n");
            
        }else{
            result = num1 / num2;
            printf("%lf", result);
        }
        
        break;
    }
    default:
        printf("Op is not supported.\n");
    
    return 0;   
	}
}
