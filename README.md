Sistem Pelacakan Status Pesanan & Manajemen Emosi Pelanggan
Deskripsi Fitur
1. Pelacakan Status Pesanan
Setiap meja memiliki status pesanan yang dapat berubah melalui tiga kondisi:

NotTaken (Belum Diambil): Pesanan belum diambil oleh pelayan.
InKitchen (Di Dapur): Pesanan sedang diproses di dapur.
Served (Telah Disajikan): Pesanan telah diantarkan ke pelanggan.
2. Manajemen Emosi Pelanggan
Pelanggan memiliki nilai emosi maksimal 5. Jika pesanan mereka terlambat, nilai emosi berkurang setiap detik. Setelah pesanan diantar, emosi pelanggan akan kembali ke nilai maksimal.

3. Notifikasi Pesanan
Ketika status pesanan berubah menjadi InKitchen, program mensimulasikan notifikasi kepada pelayan bahwa pesanan siap diantarkan ke meja.

4. Simulasi Waktu
Waktu disimulasikan dalam interval 1 detik selama 60 detik. Status pesanan dan emosi pelanggan diperbarui setiap detik.

Alur Program
Pada awal simulasi, beberapa meja diinisialisasi dengan status pesanan yang berbeda. Selama simulasi, program akan:

Menurunkan emosi pelanggan jika mereka menunggu lama.
Mengubah status pesanan secara otomatis dari NotTaken menjadi InKitchen, lalu Served.
Mengembalikan emosi pelanggan ke 5 setelah pesanan diantar.
Menampilkan status pesanan dan emosi pelanggan setiap detik.
Struktur Kelas
Order: Mengelola status dan detail pesanan.
CustomerEmotion: Mengatur nilai emosi pelanggan dan perubahan seiring waktu.
Table: Mengelola pesanan dan emosi pelanggan di meja serta memberikan notifikasi saat pesanan siap.
