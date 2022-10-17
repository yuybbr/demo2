#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
#include <stdlib.h>
#include<string.h>



void main()
{
	/*float fac_list[31][31] = { 0 };
	printf("%f\n", fac_list[2][2]);*/

	FILE *p = fopen("fac_key.txt", "w");

	float fac_list[50] = { 0,    1,    4,    9,    16,   25,   36,   49,   64,   81,   100,  121,  144,
					169,  196,  225,  256,  289,  324,  361,  400,  441,  484,  529,  576,  625,
					676,  729,  784,  841,  900,  961,  1024, 1089, 1156, 1225, 1296, 1369, 1444,
					1521, 1600, 1681, 1764, 1849, 1936, 2025, 2116, 2209, 2304, 2401 };

	for (int i = 0; i <=50; i++){
		fprintf(p, "%s", " {");
		if (i == 0) {
			fprintf(p, "%.4f", 0.0);
			fprintf(p, "%s\n", "},");
			continue;
		}
		for (int j = 0; j <= i; j++){
			printf("%f  %f\n", fac_list[j], fac_list[i]);
			float fac = (fac_list[j]) / (fac_list[i]);

			fprintf(p, "%.4f,", fac);

		}
		fprintf(p, "%s\n", "},");
	}
	fclose(p);
	

}