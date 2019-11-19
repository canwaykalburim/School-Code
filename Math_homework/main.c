#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	FILE* fp;
	int nInput, mInput, i, j, rd = 0;
	double data = 0;
	double tmp[1000] = { 0 }, sampleMean = 0, populationMean = 0, sum;

	srand(time(NULL));

	fp = fopen("exam4.txt", "r");

	if (fp == NULL) {
		printf("Failed to read file");
		return -1;
	}

	printf("»Ì´Â È½¼ö: ");
	scanf("%d", &nInput);

	printf("¹Ýº¹ÇÒ È½¼ö: ");
	scanf("%d", &mInput);

	i = 0;

	while (fscanf(fp, "%lf", &data) != EOF) {
		tmp[i] = data;
		i++;
	}

	for (i = 0; i < mInput; i++) {
		sum = 0;
		for (j = 0; j < nInput; j++) {
			rd = (rand() % 1000);
			sum += tmp[rd];
		}
		sampleMean += sum / nInput;
	}

	for (i = 0; i < 1000; i++) {
		populationMean += tmp[i];
	}

	printf("Ç¥º»Æò±Õ: %lf\n¸ðÆò±Õ: %lf", (sampleMean / mInput), (populationMean / 1000));

	fclose(fp);

	return 0;
}