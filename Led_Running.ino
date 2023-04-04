/*
Kode di bawah tersebut berjalan dengan Kedua lampu menyala dan mati secara bergantian. 
Sistem kode pada arduino akan berjalan secara berurutan dari perintah paling atas pada fungsi loop sampai paling bawah.
*/

int LED1 = 1; // Variable yang menjelaskan bahwa pin 1 digunakan untuk LED1
int LED2 = 2; // Variable yang menjelaskan bahwa pin 1 digunakan untuk LED2

void setup()
{
    pinMode(LED1, OUTPUT); // Fungsi yang menjelasan variable LED1 sebagai OUTPUT, yaitu microcontroller mengirim signal/arus ke LED pada pin 1
    pinMode(LED2, OUTPUT); // Fungsi yang menjelasan variable LED1 sebagai OUTPUT, yaitu microcontroller mengirim signal/arus ke LED pada pin 2
}

void loop()
{
    digitalWrite(LED1, HIGH); // LED1 akan menyala
    digitalWrite(LED2, LOW); // LED2 akan mati
    delay(1000); // Kode di atas berjalan selama 1 Detik
    digitalWrite(LED1, LOW); // LED1 akan mati
    digitalWrite(LED2, HIGH); // LED2 akan menyala
    delay(1000); // Kode di atas berjalan selama 1 Detik
}
