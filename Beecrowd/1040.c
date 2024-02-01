/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 01, 2024;
 Name        : Average 3;
 Source      : Beecrowd;
 Description : Calculating Average in C.
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
		printf("Media: %.1f\n", average);
		printf("Aluno aprovado.\n");
	}
	else if (average < 5.0)
	{
		printf("Media: %.1f\n", average);
		printf("Aluno reprovado.\n");
	}
	else
	{
		printf("Media: %.1f\n", average);
		printf("Aluno em exame.\n");

		float examGrade;
		scanf("%f", &examGrade);

		printf("Nota do exame: %.1f\n", examGrade);

		average = (average + examGrade) / 2;

		if (average > 5.0)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", average);
		}
		else
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", average);
		}
	}

	return 0;
}
