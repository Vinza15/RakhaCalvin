**Restaurant Management Game**
**Deskripsi**
Program ini adalah simulasi sederhana dari game manajemen restoran di mana pemain bisa melakukan beberapa aktivitas seperti menempatkan pelanggan di meja, mengambil pesanan, mengantar pesanan, dan membersihkan meja. Program ini menggunakan konsep Object-Oriented Programming (OOP) dengan beberapa kelas utama seperti Customer, Table, Player, dan Game.

**Fitur**
1. Tempatkan pelanggan di meja: Pemain dapat menempatkan pelanggan yang ada di antrian ke meja yang kosong.
2. Ambil pesanan: Pemain dapat mengambil pesanan dari meja yang telah ditempati pelanggan.
3. Antar pesanan: Pemain mengantar pesanan ke meja yang sesuai, pelanggan otomatis membayar setelah pesanan diantarkan.
4. Bersihkan meja: Setelah pelanggan membayar, meja dapat dibersihkan dan digunakan untuk pelanggan berikutnya.
5. Multi-table management: Program dapat mengelola hingga 4 meja dengan pelanggan yang mengantri.
   
**Kelas Utama**
1. Customer: Kelas ini merepresentasikan pelanggan yang memiliki atribut ID, status apakah telah memesan, dan status pembayaran.
2. Table: Kelas ini merepresentasikan meja yang bisa ditempati oleh pelanggan dan menyimpan status pesanan.
3. Player: Kelas ini memungkinkan pemain untuk melakukan tindakan seperti mengambil pesanan, mengantar pesanan, dan membersihkan meja.
4. Game: Kelas yang mengelola jalannya permainan, termasuk antrian pelanggan, interaksi dengan meja, dan menu permainan

**Menu Permainan**
Program ini menawarkan lima opsi interaktif dalam menu:
1. Tempatkan pelanggan di meja: Menempatkan pelanggan yang ada di antrian ke meja kosong (1-4).
2. Ambil pesanan: Mengambil pesanan dari meja tertentu yang telah ditempati oleh pelanggan.
3. Antar pesanan: Mengantar pesanan ke meja yang sesuai, setelah itu pelanggan otomatis membayar.
4. Bersihkan meja: Membersihkan meja setelah pelanggan telah membayar.
5. Keluar: Mengakhiri permainan.

**Catatan Pengembangan**
1. Pelanggan tidak dapat duduk di meja yang telah ditempati.
2. Pesanan hanya dapat diambil dari meja yang sudah ditempati pelanggan.
3. Meja hanya dapat dibersihkan setelah pelanggan membayar.
4. Game mengelola maksimal 2 pelanggan dalam antrian dan 4 meja di restoran.
