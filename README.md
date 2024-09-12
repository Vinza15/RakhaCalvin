Fitur
Pelacakan Status Pesanan: Setiap meja melacak status pesanan yang dapat berada dalam salah satu dari tiga kondisi:

NotTaken (Belum Diambil): Pesanan belum diambil oleh pelayan.
InKitchen (Di Dapur): Pesanan sedang diproses di dapur.
Served (Telah Disajikan): Pesanan telah diantarkan ke meja pelanggan.
Manajemen Emosi Pelanggan:

Setiap pelanggan memulai dengan nilai emosi maksimal yaitu 5.
Nilai emosi pelanggan berkurang seiring waktu jika mereka harus menunggu terlalu lama untuk pesanan mereka.
Setelah pesanan diantarkan, nilai emosi diatur kembali menjadi 5, yang menandakan kepuasan maksimal.
Notifikasi Pesanan:

Ketika status pesanan berubah menjadi InKitchen, sistem akan mensimulasikan notifikasi kepada pelayan bahwa pesanan siap diantarkan ke meja pelanggan.
Simulasi Waktu:

Program ini mensimulasikan berjalannya waktu dengan interval 1 detik selama periode 60 detik.
Status pesanan dan emosi pelanggan diperbarui setiap detik sesuai dengan simulasi waktu tersebut.
Cara Kerja
Pada awal program, beberapa meja dengan status pesanan yang berbeda dibuat.
Program ini kemudian mensimulasikan penurunan emosi pelanggan berdasarkan waktu yang berlalu.
Status pesanan dapat berubah dari NotTaken menjadi InKitchen, dan kemudian menjadi Served secara otomatis setelah beberapa detik.
Jika pesanan telah diantar ke meja, emosi pelanggan diatur kembali ke 5.
Selama simulasi, status pesanan dan emosi pelanggan akan ditampilkan setiap detik.
Struktur Kelas
Order: Mengelola status dan detail pesanan.
CustomerEmotion: Mengelola nilai emosi pelanggan yang berkurang setiap detik jika mereka harus menunggu terlalu lama.
Table: Mengelola pesanan dan emosi pelanggan di setiap meja serta menampilkan notifikasi saat pesanan siap.
