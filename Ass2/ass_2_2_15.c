#include <stdio.h>

// STRUCTURE
struct data
{
    float a, b, c;
};

// FUNCTION- 'input'
struct data input()
{
    struct data t;
    scanf("%f%f", &t.a, &t.b);
    return t;
};

// FUNCTION- 'dif'
void dif(struct data t)
{
    if ((t.a - t.b) >= 0)
        t.c = t.a - t.b;
    else
        t.c = t.b - t.a;
    printf("Difference= %.4f\n", t.c);
};

// MAIN FUNCTION
int main()
{
    int i, n;
    struct data t[25];
    printf("Enter number of times the difference has to be carried out: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter two decimal numbers (upto 4 decimal places)- \n");
        t[i] = input();
        dif(t[i]);
    }

    return 0;
}