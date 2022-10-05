#include <stdio.h>

int main()
{
	float weight, height, bmi;
	printf("enter your weight(kg) and height(m):");
	scanf("%f %f", &weight, &height);
	bmi = (weight / (height*height));
	printf("your BMI is %f \n", bmi);
	printf("under weight: less than 18.5\n");
	printf("normal:       between 18.5 and 24.9\n");
	printf("overweight:   between 25 and 29.9\n");
	printf("obese:        30 or greater\n");


}
