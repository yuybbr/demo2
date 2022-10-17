#include <stdio.h>
#include <stdlib.h>

void find_class_name()
{

	FILE* p = fopen("20_beginbirth.txt", "w");
	int begin = 20;
	for (int i = 0; i <= 20; i++)
	{
		//fprintf(p, "%d\n", i);
		for (int j = 1; j <= 12; j++)
		{
			for (int k = 1; k <= 31; k++)
			{
				fprintf(p, "%d%02d%02d%02d\n", begin, i, j, k);
			}
		}
	}
	fclose(p);
}