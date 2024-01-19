/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 01, 2024;
 Name        : Average 3;
 Source      : Beecrowd;
 Description : Calculate Average in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);

	float average = ((a * 2) + (b * 3) + (c * 4) + d) / 10;

	if (average >= 7.0)
	{
		printf("Average: %.1f\n", average);
		printf("Student passed.\n");
	}
	else if (average < 5.0)
	{
		printf("Media: %.1f\n", average);
		printf("Student failed.\n");
	}
	else
	{
		printf("Media: %.1f\n", average);
		printf("Student on exam.\n");

		float examGrade;
		scanf("%f", &examGrade);

		printf("Exam score: %.1f\n", examGrade);

		average = (average + examGrade) / 2;

		if (average > 5.0)
		{
			printf("Student passed.\n");
			printf("Final grade: %.1f\n", average);
		}
		else
		{
			printf("Student failed.\n");
			printf("Final grade: %.1f\n", average);
		}
	}

	return 0;
}
