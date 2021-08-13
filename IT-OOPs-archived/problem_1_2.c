#include <stdio.h>

void addition()
{
    int a, b;
    printf("Enter digit a: ");
    scanf("%d", &a);
    printf("Enter digit b: ");
    scanf("%d", &b);
    
    printf("%d", a+b);

}

int subtraction()
{
    int a, b;
    printf("Enter digit a: ");
    scanf("%d", &a);
    printf("Enter digit b: ");
    scanf("%d", &b);

    return a-b;
}

int division(int a, int b)
{
    return a/b;
}

void multiplication(int a, int b)
{
    printf("%d", a*b);
}

__int32_t main()
{
    int op;
    int a, b;
    printf("# For addition press 1\n# For subtraction press 2\n# For multiplication press 3\n# For division press 4\n");
    scanf("%d", &op);

    switch (op) {
    
        case 1:
            addition();
            break;
        
        case 2:
            printf("%d", subtraction());
            break;

        case 3:
            printf("Enter digit a: ");
            scanf("%d", &a);
            printf("Enter digit b: ");
            scanf("%d", &b);
            multiplication(a, b);
            break;
        
        case 4:
            printf("Enter digit a: ");
            scanf("%d", &a);
            printf("Enter digit b: ");
            scanf("%d", &b);
            printf("%d", division(a, b));

        default:
        break;
    }

}
