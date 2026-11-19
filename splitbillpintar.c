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


// Header & Fungsi Utama (#include <stdio.h> & int main()):

// #include <stdio.h> adalah perpustakaan wajib di C agar kita bisa memakai perintah cetak dan input.
// int main() adalah gerbang utama tempat program mulai dijalankan oleh komputer.

//  Input dan Output yang Berbeda:

// Kalau di Python pakai print() dan input(), di bahasa C kita menggunakan printf untuk menampilkan teks ke layar dan scanf untuk menerima input dari pengguna.

// Penentuan Tipe Data di Awal:

// // aDi C, setiap variabel harus didefinisikan jenisnya di depan. Contohnya int untuk angka bulat (seperti jumlah orang atau porsi), dan double untuk angka pecahan (seperti harga atau hasil pembagian desimal agar komanya tidak hilang).

// Khusus pada pembagian ongkir, ada trik khusus menggunakan (double) di depan variabel untuk memastikan hasil komanya tetap akurat.

// Format Cetak Khusus di C:

// Saat mencetak hasil desimal, printf menggunakan format %.2f agar angka di belakang koma dibatasi hanya 2 angka saja (supaya terlihat rapi seperti format uang rupiah, contoh: 103333.33).