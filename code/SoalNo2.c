#include <stdio.h>

int main() {
	int alas, tinggi;

	printf("Masukkan alas segitiga: ");
	scanf("%d", & alas);
	printf("Masukkan tinggi segitiga: ");
	scanf("%d", & tinggi);

	if (alas == tinggi) {
		printf("Jenis Segitiga adalah segitiga sama kaki\n");
	} else {
		printf("Jenis Segitiga adalah segitiga sembarang\n");
	}

	float luas = (alas * tinggi) / 2.0;
	float keliling = alas + tinggi + (float) sqrt(alas * alas + tinggi * tinggi);

	printf("Luas segitiga: %.2f\n", luas);
	printf("Keliling segitiga: %.2f\n", keliling);

	return 0;
}