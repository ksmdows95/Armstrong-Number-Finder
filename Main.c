#include <stdio.h>
#include <math.h>

int  ArmsNums(int arms, int us)
{
	if (arms <= 0)
	{
		return 0;
	}
	else
	{
		int rem, rem3;
		rem = arms % 10;
		rem3 = pow(rem, us);
		return rem3 + ArmsNums(arms / 10, us);
	}
}

int main()
{
	int num, tnum, counter = 0;
	printf("Lutfen sayinizi girin: ");
	scanf("%d", &num);
	for (tnum = num; tnum > 0; tnum /= 10)
	{
		counter++;
	}
	if (num == ArmsNums(num, counter))
	{
		printf("Sayiniz bir Armstrong sayisidir.\n");
	}
	else
	{
		printf("Sayiniz bir Armstrong sayisi degildir.\n");
	}
}