# PH-METER
# Nama : Alvlinicha Nadya Anindita
# ALAT DAN BAHAN :
1.	Komputer
2.	Arduino 
3.	Kabel USB 2.0 Type A Male to Male 
4.	pH Probe Module Sensor
5.	Kabel Probe
6.	Probe pH Meter
7.	Kabel Jumper

# LANGKAH KERJA :
1. Langkah pertama anda harus menginstal software Arduino IDE pada komputer anda. 
2. Setelah menginstal software Arduino IDE dibutuhkan juga library modul sensor pH meter terlebih dahulu,berikut linknya  (https://github.com/DFRobot/DFRobot_EC).
3. Lalu untuk menginstal library modul sensor pH meter, maka masukkan link library pada menu preference pada  Arduino IDE (cara penginstalan library dan penambahan board ada pada file di atas) lalu tekan tombol "OK".
4. Jika librarynya sudah terinstal dan ditambahkan, maka anda bisa mulai memasukkan programnya (contoh program ada pada file "sensor pH air " diatas). 
5. Langkah berikutnya masukkan program kalibrasi sensor pH ke dalam software Arduino IDE, lalu upload program ke dalam Arduino dengan menggunakan kabel USB 2.0 Type A Male to Male (rangkaiannya ada di file atas).
6. Setelah ter-upload, buka serial monitor pada computer untuk mulai kalibrasi sampai pada angka pH 2,5 (jika ingin lebih akurat anda bisa mengkalibrasi dengan multimeter).
7. Jika modul sensor pH telah terkalibrasi di angka stabil, anda bisa mulai mencoba memasukkan program yang dapat mengukur pH air (contoh program ada di file atas)  . 
8. Setelah program dimasukkan lalu upload ke Arduino kemudian buka serial monitor untuk mengetahui apakah program dapat berjalan . 
9. Lalu siapkan beberapa jenis air yang ingin diketahui nilai pH-nya.
10. Masukkan alat probe pH meter ke dalam beberapa jenis air tersebut, diamkan beberapa saat hingga nilai pH air yang muncul di serial monitor stabil.
    
# WIRING/PERKABELAN
1. Hubungkan kabel probe pH dengan Connector modul pH meter sensor (putarlah searah jarum jam).
2. Setelah terhubung ,pasang kabel jumper wires male to female seperti yang telah kami siapkan diatas.
3. Jika sudah terpasang ,hubungkan kabel jumper tadi ke Arduino uno dan jangan sampai terbalik antara VCC ke (+5V) Arduino ,GND ke GND Arduino ,dan PO ke  pin Analog pada A0 Arduino (pin analog dapat diganti sesuai keinginan). (untuk rangkaian lebih jelasnya bisa anda lihat pada file rangkaian di atas)

PASTIKAN SEMUA KABEL TELAH TERHUBUNG DENGAN BENAR DAN JANGAN SAMPAI ADA YANG SALAH DALAM PEMASANGANnya ><
