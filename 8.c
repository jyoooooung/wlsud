/*
#include <stdio.h>

int main(void)
{
	float num1 = 3.e5f;

	double num2 = -1.3827e-2;

	long double num3 = 5.21e+9l;

	printf("%f %f %Lf\n", num1, num2, num3);

	printf("%e %e %Le\n", num1, num2, num3);

	return 0;
}

//8.6 ��������

#include <stdio.h>

int main(void)
{
	float num1 = 1.97f;
	long double num2 = 5.524218l;
	double num3 = 3792.8e+4;

	printf("%f %Lf %f\n", num1, num2, num3);

	return 0;
}


//8.7 ��������
#include <stdio.h>

int main(void)
{
	double num1 = 0.4284;
	float num2 = 2.7f;

	printf("num1�� ũ�� : %d, num2�� ũ�� : %d\n", sizeof(num1), sizeof(num2));

	return 0;
}

#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = FLT_MAX;
	double num2 = DBL_MIN;
	long double num3 = LDBL_MAX;

	printf("%.2f\n", num1);
	printf("%e\n", num2);
	printf("%Le\n", num3);

	return 0;
}

*/

//8.9 ��������
#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = FLT_MIN;

	num1 = num1 / 100000000.0f;

	printf("%e\n", num1);

	return 0;
}