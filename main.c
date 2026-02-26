#include <stdio.h>
void decor(int d); // This function prints a decor (=) line based on the int 'd'.
void space(int s); // This function prints spaces ( ) based on the 's'.
int main(void)
{
    // the title and subtitle with decor and spacing
    int decore = 40;
    int space2 = 24;
    decor(decore);
    space(decore);
    printf("Pixel Name\n");
    space(space2);
    printf("Turn any name into art\n");
    decor(decore);

    // user input for symbol
    char symbol;
    int c;
    printf("\nnote: you can only use one of (a-z, A-Z, 0-9, or a special symbol) to draw with.");
    printf("\n- Enter a symbol: ");
    scanf(" %c", &symbol);
    while ((c = getchar()) != '\n' && c != EOF)
    {
    } // Clear the input buffer to prevent from any save in the next input
    while ((unsigned char)symbol >= 127) // Check if the input is non-ASCII character
    {
        printf("  Invalid choice :(\n");
        printf("- Please enter a valid symbol: ");
        scanf(" %c", &symbol);
        while ((c = getchar()) != '\n' && c != EOF)
        {
        } // clear the input buffer to prevent rewrite the while loop
    }
    printf("  %c Good choice :)\n\n", symbol);

    // user input for name
    char name[50];
    printf("note: you can only use one of (a-z, A-Z or 0-9) in the name.\n");
    printf("- Enter your name: ");
    scanf("%49s", &name);

    int i = 0;
    while (name[i] != '\0')
    {
        if (!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= '0' && name[i] <= '9')))
        {
            printf("  Invalid name :(\n");
            printf("- Please enter a valid name: ");
            scanf("%49s", &name);
            i = 0; // reset index to recheck the new name
        }
        else
        {
            i++;
        }
    }
    printf("  Beautiful! > <\n\n");

    // user input for size
    double size;
    printf("- Choose size (1-5): ");
    scanf("%lf", &size);

    while (size < 1 || size > 5)
    {
        printf("  Invalid size :(\n");
        printf("- Please choose a valid size (1-5): ");
        scanf("%lf", &size);
    }
    printf("  Perfect!\n\n");

    // final output name with symbol and size
    printf("- Beautiful + Perfect = %s: \n", name);

    return 0;
}

void decor(int d)
{
    for (int i = 0; i < d; i++)
    {
        printf("=");
    }
    printf("\n");
}

void space(int s)
{
    for (int i = 0; i < s / 3; i++)
    {
        printf(" ");
    }
}