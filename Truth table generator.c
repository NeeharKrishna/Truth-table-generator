#include <stdio.h>
int main()
{
    int A, B, result;
    int choice;
    printf("Choose the Boolean expression:\n");
    printf("1. A AND B\n");
    printf("2. A OR B\n");
    printf("3. A XOR B\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\nA B | Result\n");
    printf("------\n");
    for (A = 0; A <= 1; A++)
    {
        for (B = 0; B <= 1; B++)
        {
            if (choice == 1)
                result = A && B;
            else if (choice == 2)
                result = A || B;
            else if (choice == 3)
                result = A ^ B;
            else
            {
                printf("Invalid choice!\n");
                return 0;
            }
            printf("%d %d |   %d\n", A, B, result);
        }
    }
    return 0;
}

