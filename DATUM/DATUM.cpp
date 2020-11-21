#include<stdio.h>
void findday(int* x);
int main()
{
	int DM[2], totalday = 0;
	scanf_s("%d", &DM[0]); // Day
	scanf_s("%d", &DM[1]); // Month

	for (int i = 1; i < DM[1]; i++)
	{
		if (i == 1 || i == 2 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			if (i == 2) //February
			{
				totalday += 28;
			}
			else
			{
				totalday += 31;
			}
		}
		else
		{
			totalday += 30;
		}
	}
	totalday += DM[0];
	totalday = totalday % 7;
	findday(&totalday);
	return 0;
}
void findday(int* x)
{
	if (*x == 1)
	{
		printf("Thursday");
	}
	else if (*x == 2)
	{
		printf("Friday");
	}
	else if (*x == 3)
	{
		printf("Saturday");
	}
	else if (*x == 4)
	{
		printf("Sunday");
	}
	else if (*x == 5)
	{
		printf("Monday");
	}
	else if (*x == 6)
	{
		printf("Tuesday");
	}
	else if (*x == 0)
	{
		printf("Wednesday");
	}

}