print("=== APLIKASI SPLITBILL PINTAR ===")
print("1. Hitung Patungan Makanan & Ongkir")
print("2. Hitung Sisa Kembalian Tunai")

# Meminta pilihan menu dari pengguna
pilihan = input("Pilih menu (1/2): ")

if pilihan == "1":
    print("\n--- MENU HITUNG PATUNGAN ---")
    harga_satuan = float(input("Masukkan harga satuan makanan (Rp): "))
    porsi = int(input("Masukkan jumlah porsi yang dibeli: "))
    
    ongkir = float(input("Masukkan total ongkir (Rp): "))
    diskon = float(input("Masukkan total diskon ongkir (Rp): "))
    jumlah_orang = int(input("Masukkan jumlah orang yang patungan: "))

    # 1. Operator Perkalian (*) untuk total harga makanan
    total_makanan = harga_satuan * porsi

    # 2. Operator Pengurangan (-) untuk ongkir bersih
    ongkir_bersih = ongkir - diskon

    # 3. Operator Pembagian (/) untuk bagi rata ongkir per orang
    ongkir_per_orang = ongkir_bersih / jumlah_orang

    # 4. Operator Penjumlahan (+) untuk total akhir bayar per orang
    total_bayar = total_makanan + ongkir_per_orang

    print(f"\n-> Total Harga Makanan: Rp{total_makanan}")
    print(f"-> Ongkir Bersih: Rp{ongkir_bersih}")
    print(f"-> Total Bayar per Orang: Rp{total_bayar}")

elif pilihan == "2":
    print("\n--- MENU HITUNG KEMBALIAN ---")
    uang_bayar = float(input("Masukkan total uang tunai yang dibayar (Rp): "))
    tagihan = float(input("Masukkan total tagihan belanja (Rp): "))

    # 5. Operator Modulus (%) untuk mencari sisa / kelebihan uang
    # (Mengubah ke integer sementara agar bisa dihitung sisa modulusnya)
    sisa_uang = int(uang_bayar) % int(tagihan)

    print(f"\n-> Sisa Modulus / Sisa Kelebihan Uang: Rp{sisa_uang}")

else:
    print("\n[FAILED] Pilihan menu tidak valid!")




#Sistem Menu Pilihan (print & input):

#Di awal, program menampilkan pilihan menu (1 untuk menghitung patungan, 2 untuk menghitung kembalian).
#Perintah input() digunakan agar pengguna bisa mengetikkan pilihannya sendiri lewat keyboard.


#Percabangan (if - elif - else):

#Berfungsi sebagai "cabang jalan". Jika pengguna memilih angka 1, maka program menjalankan kode perhitungan patungan. Jika memilih 2, program menjalankan perhitungan kembalian uang.


#Penerapan 5 Operator Aritmatika di Python:

#Perkalian (*): harga_satuan * porsi (Mencari total harga makanan berdasarkan jumlah porsi yang dibeli).

#Pengurangan (-): ongkir - diskon (Mencari sisa ongkir setelah dipotong voucher diskon).

#Pembagian (/): ongkir_bersih / jumlah_orang (Membagi rata ongkir bersih ke semua orang). Secara otomatis Python langsung menghasilkan angka pecahan (desimal) yang akurat.

#Penjumlahan (+): total_makanan + ongkir_per_orang (Menggabungkan total makanan dan bagian ongkir menjadi tagihan akhir).

#Modulus (%): uang_bayar % tagihan (Mencari sisa kelebihan uang tunai dari pembayaran).


#Mencetak Hasil (print(f"...")):

#Menggunakan huruf f (f-string) agar variabel di dalam kurung kurawal {} bisa langsung tercetak rapi bersama teks penjelasnya.