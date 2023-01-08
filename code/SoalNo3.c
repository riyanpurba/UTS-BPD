#include <stdio.h>

int main() {
  // Menerima input data perjalanan Adi dan Budi
  int jarak, kecepatan_adi, kecepatan_budi, frekuensi_adi, frekuensi_budi, detik = 0, jarak_adi = 0, jarak_budi = 0;
  printf("Input jarak (meter) antara Adi dan Budi: ");
  scanf("%d", &jarak);
  printf("Input kecepatan (meter/detik) awal jalan Adi: ");
  scanf("%d", &kecepatan_adi);
  printf("Input kecepatan (meter/detik) awal jalan Budi: ");
  scanf("%d", &kecepatan_budi);
  printf("Input frekuensi (detik) perubahan kecepatan Adi: ");
  scanf("%d", &frekuensi_adi);
  printf("Input frekuensi (detik) perubahan kecepatan Budi: ");
  scanf("%d", &frekuensi_budi);
  
  // Loop sampai Adi dan Budi bertemu
  while (jarak_adi < jarak && jarak_budi < jarak) {
    detik++;
    
    // Mengubah kecepatan Adi sesuai frekuensi yang ditentukan
    if (detik % frekuensi_adi == 0) {
      kecepatan_adi++;
    }
    
    // Mengubah kecepatan Budi sesuai frekuensi yang ditentukan
    if (detik % frekuensi_budi == 0) {
      kecepatan_budi++;
    }
    
    // Menambah jarak perjalanan Adi dan Budi sesuai kecepatan yang telah ditentukan
    jarak_adi += kecepatan_adi;
    jarak_budi += kecepatan_budi;
    
    // Mencetak pergerakan Adi dan Budi setiap detiknya
    printf("Detik ke-%d: Adi berada di jarak %d meter, Budi berada di jarak %d meter\n", detik, jarak_adi, jarak_budi);
  }
  
  // Mencetak detik dan jarak Adi dan Budi bertemu
  printf("Adi dan Budi bertemu pada detik ke-%d di jarak %d meter\n", detik, jarak_adi < jarak ? jarak_adi : jarak_budi);
  
  return 0;
}