#include <stdio.h>
#include <string.h>

int main() {
	// variabel
	char nim[20], nama[100], kode[5];
	char jurusan[20];

	// Input NIM
	printf("Masukkan NIM \t: ");
	scanf("%s", nim);
	// Input Nama 
	fgets(nama, 100, stdin);
	printf("Masukkan Nama \t: ");
// 	scanf("%s", nama);
	scanf("%[^\n]%*c", nama);
	// Input Kode Jurusan
	printf("Masukkan Kode Jurusan (TI, SI, MN, AK) \t: ");
	scanf("%s", kode);

	// Cetak NIM
	printf("NIM \t\t\t: %s\n", nim);
	// Cetak Nama
	printf("Nama \t\t\t: %s\n", nama);
	// Cetak Kode Jurusan
	printf("Kode Jurusan \t: %s\n", kode);

	// Tentukan Jurusan
	if (strcmp(kode, "TI") == 0) {
		strcpy(jurusan, "Teknik Informatika");
	} else if (strcmp(kode, "SI") == 0) {
		strcpy(jurusan, "Sistem Informasi");
	} else if (strcmp(kode, "MN") == 0) {
		strcpy(jurusan, "Manajemen");
	} else if (strcmp(kode, "AK") == 0) {
		strcpy(jurusan, "Akuntansi");
	} else {
		strcpy(jurusan, "Tidak diketahui");
	}

	// Cetak Jurusan
	printf("Jurusan \t\t: %s\n", jurusan);

	return 0;
}