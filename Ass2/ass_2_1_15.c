#include <stdio.h>

// STRUCTURE
struct data
{
	float a, b;
};

// FUNCTION- 'dif'
float dif(struct data i)
{
	float c;
	c = i.a - i.b;
	if (c >= 0)
		return c;
	else
		return -c;
};

// MAIN FUNCTION
int main()
{
	struct data t;
	char c;
	printf("Enter two decimal numbers (upto 4 decimal places)-\n");
	scanf("%f%f", &t.a, &t.b);
	printf("Difference=%.4f\n", dif(t));
rp:
	printf("\nDo you want more (Y/N): ");
	fflush(stdin);
	c = getchar();

	if (c == 'Y' || c == 'y')
	{
		printf("Enter two decimal numbers (upto 4 decimal places)-\n");
		scanf("%f%f", &t.a, &t.b);
		printf("Difference=%.4f\n", dif(t));
		goto rp;
	}
	else if (c == 'N' || c == 'n')
		printf("\nFinish.");
	else
	{
		printf("Wrong input\n");
		goto rp;
	}
	return 0;
}
