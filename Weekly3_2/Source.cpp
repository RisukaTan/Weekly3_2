#include<stdio.h>
int main() {
	float w, h, b;
	printf("  <<BODY MASS INDEX>>\n");
	printf("You weight is : ");
	scanf_s("%f", &w);
	printf("You hight is : ");
	scanf_s("%f", &h);
	h = h * h;
	b = w / h;
	if (b < 30) {
		if (b < 18.5) {
			printf("You are Underweight");
		}
		else if (b >= 18.5 || b <= 24.9)
		{
			printf("You are Normal");//65010536
		}
		else if (b >= 25 || b <= 29.9)
		{
			printf("You are Overweight");
		}
	}
	else
	{
		printf("You are Obese");
	}
}