#include <stdio.h>

int main() {
    int pilihan;

  printf("=== APLIKASI SPLITBILL PINTAR ===\n");
    printf("1. Hitung Patungan Makanan & Ongkir\n");
    printf("2. Hitung Sisa Kembalian Tunai\n");
    printf("Pilih menu (1/2): ");
    scanf("%d", &pilihan);

  if (pilihan == 1) {
        printf("\n--- MENU HITUNG PATUNGAN ---\n");
        double harga_satuan, ongkir, diskon, ongkir_bersih, ongkir_per_orang, total_bayar;
        int porsi, jumlah_orang;
 
  printf("Masukkan harga satuan makanan (Rp): ");
        scanf("%lf", &harga_satuan);
        printf("Masukkan jumlah porsi yang dibeli: ");
        scanf("%d", &porsi);
        
  printf("Masukkan total ongkir (Rp): ");
        scanf("%lf", &ongkir);
        printf("Masukkan total diskon ongkir (Rp): ");
        scanf("%lf", &diskon);
        printf("Masukkan jumlah orang yang patungan: ");
        scanf("%d", &jumlah_orang);

  // 1. Operator Perkalian (*) untuk total harga makanan
        double total_makanan = harga_satuan * porsi;

  // 2. Operator Pengurangan (-) untuk ongkir bersih
        ongkir_bersih = ongkir - diskon;

  // 3. Operator Pembagian (/) untuk bagi rata ongkir per orang
        ongkir_per_orang = ongkir_bersih / jumlah_orang;

  // 4. Operator Penjumlahan (+) untuk total akhir bayar per orang
        total_bayar = total_makanan + ongkir_per_orang;

  printf("\n-> Total Harga Makanan: Rp%.2f\n", total_makanan);
        printf("-> Ongkir Bersih: Rp%.2f\n", ongkir_bersih);
        printf("-> Total Bayar per Orang: Rp%.2f\n", total_bayar);

  } else if (pilihan == 2) {
        printf("\n--- MENU HITUNG KEMBALIAN ---\n");
        int uang_bayar, tagihan, sisa_uang;

  printf("Masukkan total uang tunai yang dibayar (Rp): ");
        scanf("%d", &uang_bayar);
        printf("Masukkan total tagihan belanja (Rp): ");
        scanf("%d", &tagihan);

  // 5. Operator Modulus (%) untuk mencari sisa / kelebihan uang
        sisa_uang = uang_bayar % tagihan;

  printf("\n-> Sisa Modulus / Sisa Kelebihan Uang: Rp%d\n", sisa_uang);

  } else {
        printf("\n[FAILED] Pilihan menu tidak valid!\n");
    }

  return 0;
}
