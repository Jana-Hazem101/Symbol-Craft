#include <stdio.h>
void decor(int d);                                       // This function prints a decor (=) line based on the int 'd'.
void space(int s);                                       // This function prints spaces ( ) based on the 's'.
void print_name_art(char name[], char symbol, int size); // This function takes the name, symbol, and size to print the name in art form.
int main(void)
{
    char again;
    int c;
    // it will repeat until the user chooses to exit by entering n or N
    do
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
        print_name_art(name, symbol, (int)size);

        decor(decore);
        printf("  Try another name? (y/n): ");
        scanf(" %c", &again);
        // try again question if not valid
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        while (again != 'y' && again != 'Y' && again != 'n' && again != 'N')
        {
            printf("  Invalid choice :( please enter y or n: ");
            scanf(" %c", &again);
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
        }
        printf("\n");

        // out of the program
    } while (again == 'y' || again == 'Y');

    printf("  Goodbye! See you next time :)\n");

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

void print_name_art(char name[], char symbol, int size)
{
    // A-Z
    int A[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}};
    int B[5][5] = {{1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 0}};
    int C[5][5] = {{0, 1, 1, 1, 1}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {0, 1, 1, 1, 1}};
    int D[5][5] = {{1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 0}};
    int E[5][5] = {{1, 1, 1, 1, 1}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 1}};
    int F[5][5] = {{1, 1, 1, 1, 1}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}};
    int G[5][5] = {{0, 1, 1, 1, 1}, {1, 0, 0, 0, 0}, {1, 0, 1, 1, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 1}};
    int H[5][5] = {{1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}};
    int I[5][5] = {{0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}};
    int J[5][5] = {{0, 0, 1, 1, 1}, {0, 0, 0, 1, 0}, {0, 0, 0, 1, 0}, {1, 0, 0, 1, 0}, {0, 1, 1, 0, 0}};
    int K[5][5] = {{1, 0, 0, 0, 1}, {1, 0, 0, 1, 0}, {1, 1, 1, 0, 0}, {1, 0, 0, 1, 0}, {1, 0, 0, 0, 1}};
    int L[5][5] = {{1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 1}};
    int M[5][5] = {{1, 0, 0, 0, 1}, {1, 1, 0, 1, 1}, {1, 0, 1, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}};
    int N[5][5] = {{1, 0, 0, 0, 1}, {1, 1, 0, 0, 1}, {1, 0, 1, 0, 1}, {1, 0, 0, 1, 1}, {1, 0, 0, 0, 1}};
    int O[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int P[5][5] = {{1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}};
    int Q[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 1, 1, 0}, {0, 1, 1, 0, 1}};
    int R[5][5] = {{1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 0}, {1, 0, 0, 1, 0}, {1, 0, 0, 0, 1}};
    int S[5][5] = {{0, 1, 1, 1, 1}, {1, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 0, 0, 1}, {1, 1, 1, 1, 0}};
    int T[5][5] = {{1, 1, 1, 1, 1}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}};
    int U[5][5] = {{1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int V[5][5] = {{1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 0, 1, 0, 0}};
    int W[5][5] = {{1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 1, 0, 1}, {1, 1, 0, 1, 1}, {1, 0, 0, 0, 1}};
    int X[5][5] = {{1, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 0, 1, 0, 0}, {0, 1, 0, 1, 0}, {1, 0, 0, 0, 1}};
    int Y[5][5] = {{1, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}};
    int Z[5][5] = {{1, 1, 1, 1, 1}, {0, 0, 0, 1, 0}, {0, 0, 1, 0, 0}, {0, 1, 0, 0, 0}, {1, 1, 1, 1, 1}};

    // a-z
    int a[5][5] = {{0, 1, 1, 1, 0}, {0, 0, 0, 0, 1}, {0, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int b[5][5] = {{1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 0}};
    int c[5][5] = {{0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {0, 1, 1, 1, 0}};
    int d[5][5] = {{0, 0, 0, 1, 0}, {0, 0, 0, 1, 0}, {0, 1, 1, 1, 0}, {1, 0, 0, 1, 0}, {1, 1, 1, 0, 1}};
    int e[5][5] = {{0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1}, {1, 0, 0, 0, 0}, {0, 1, 1, 1, 0}};
    int f[5][5] = {{0, 0, 1, 1, 1}, {0, 1, 0, 0, 0}, {1, 1, 1, 0, 0}, {0, 1, 0, 0, 0}, {0, 1, 0, 0, 0}};
    int g[5][5] = {{0, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 1}, {0, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int h[5][5] = {{1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}};
    int i[5][5] = {{0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}};
    int j[5][5] = {{0, 0, 0, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 1, 0}, {0, 1, 1, 0, 0}};
    int k[5][5] = {{1, 0, 0, 0, 0}, {1, 0, 0, 1, 0}, {1, 1, 1, 0, 0}, {1, 0, 0, 1, 0}, {1, 0, 0, 0, 1}};
    int l[5][5] = {{0, 1, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}};
    int m[5][5] = {{0, 0, 0, 0, 0}, {1, 1, 0, 1, 1}, {1, 0, 1, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}};
    int n[5][5] = {{0, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}};
    int o[5][5] = {{0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int p[5][5] = {{1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}};
    int q[5][5] = {{0, 1, 1, 1, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 1}, {0, 0, 0, 0, 1}, {0, 0, 0, 0, 1}};
    int r[5][5] = {{0, 0, 0, 0, 0}, {1, 0, 1, 1, 0}, {1, 1, 0, 0, 0}, {1, 0, 0, 0, 0}, {1, 0, 0, 0, 0}};
    int s[5][5] = {{0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 0, 0, 0}, {0, 0, 1, 1, 1}, {1, 1, 1, 1, 0}};
    int t[5][5] = {{0, 1, 0, 0, 0}, {1, 1, 1, 0, 0}, {0, 1, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 1, 0}};
    int u[5][5] = {{0, 0, 0, 0, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 0, 0, 1, 1}, {0, 1, 1, 0, 1}};
    int v[5][5] = {{0, 0, 0, 0, 0}, {1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 0, 1, 0, 0}};
    int w[5][5] = {{0, 0, 0, 0, 0}, {1, 0, 0, 0, 1}, {1, 0, 1, 0, 1}, {1, 1, 0, 1, 1}, {1, 0, 0, 0, 1}};
    int x[5][5] = {{0, 0, 0, 0, 0}, {1, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 1, 0, 1, 0}, {1, 0, 0, 0, 1}};
    int y[5][5] = {{1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 1}, {0, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int z[5][5] = {{0, 0, 0, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 1, 0}, {0, 1, 1, 0, 0}, {1, 1, 1, 1, 1}};

    // 0-9
    int n0[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 1, 1}, {1, 0, 1, 0, 1}, {1, 1, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int n1[5][5] = {{0, 0, 1, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}};
    int n2[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {0, 0, 1, 1, 0}, {0, 1, 0, 0, 0}, {1, 1, 1, 1, 1}};
    int n3[5][5] = {{1, 1, 1, 1, 1}, {0, 0, 0, 1, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 1, 0}, {1, 1, 1, 1, 1}};
    int n4[5][5] = {{1, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {1, 1, 1, 1, 1}, {0, 0, 0, 0, 1}, {0, 0, 0, 0, 1}};
    int n5[5][5] = {{1, 1, 1, 1, 1}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {0, 0, 0, 0, 1}, {1, 1, 1, 1, 0}};
    int n6[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int n7[5][5] = {{1, 1, 1, 1, 1}, {0, 0, 0, 0, 1}, {0, 0, 0, 1, 0}, {0, 0, 1, 0, 0}, {0, 1, 0, 0, 0}};
    int n8[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};
    int n9[5][5] = {{0, 1, 1, 1, 0}, {1, 0, 0, 0, 1}, {0, 1, 1, 1, 1}, {0, 0, 0, 0, 1}, {0, 1, 1, 1, 0}};

    // pointers for A-Z
    int (*upper[26])[5] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z};
    // pointers for a-z
    int (*lower[26])[5] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
    // pointers for numbers
    int (*nums[10])[5] = {n0, n1, n2, n3, n4, n5, n6, n7, n8, n9};

    // length of the name
    int name_len = 0;
    while (name[name_len] != '\0')
        name_len++;

    int (*letters[50])[5]; // pointer array to store the letters of the name (up to 50 characters)
    int valid_len = 0;

    for (int i = 0; i < name_len; i++)
    {
        char cur = name[i];
        int (*letter)[5] = NULL;

        if (cur >= 'A' && cur <= 'Z')
            letter = upper[cur - 'A'];
        else if (cur >= 'a' && cur <= 'z')
            letter = lower[cur - 'a'];
        else if (cur >= '0' && cur <= '9')
            letter = nums[cur - '0'];

        if (letter != NULL)
            letters[valid_len++] = letter;
    }

    // all charachter of the name next to each other
    for (int row = 0; row < 5; row++)
    {
        // print each row of the letters and repeat it to scale the output
        for (int s_row = 0; s_row < size; s_row++)
        {

            for (int i = 0; i < valid_len; i++)
            {

                for (int col = 0; col < 5; col++)
                {
                    for (int s_col = 0; s_col < size; s_col++)
                    {
                        if (letters[i][row][col] == 1)
                            printf("%c", symbol);
                        else
                            printf(" ");
                    }
                }
                // print 2 spaces between letters
                printf("  ");
            }
            printf("\n");
        }
    }
}
