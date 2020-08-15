#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score;
	printf(" your score :");
	scanf("%d", &score);
	if (score <= 100 && score >= 0)
	{
		if (score >= 80)
		{
			printf(" your grade is _A_");
		}
		else if (score >= 70)
		{
			printf(" your grade is _B_");
		}
		else if (score >= 60)
		{
			printf("your grade is _C_ ");
		}
		else if (score >= 50)
		{
			printf("your grade is _D_");
		}
		if (score < 50)
		{
			printf("your grade is _F_");
		}
	}
	else { printf("ERROR"); }
}




