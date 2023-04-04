/* 
Kode di bawah tersebut berjalan dengan apabila PushButton di tekan maka lampu akan menyala, sedangkan apabila tidak di tekan maka lampu akan mati
Sistem kode pada arduino akan berjalan secara berurutan dari perintah paling atas pada fungsi loop sampai paling bawah.
*/

int LED1 = 1; // Variable yang menjelaskan bahwa pin 1 digunakan untuk LED
int Button = 0; // Variable yang menjelaskan bahwa pin 0 digunakan untuk PushButton

void setup()
{
    pinMode(LED1, OUTPUT); // Fungsi yang menjelasan variable LED1 sebagai OUTPUT, yaitu microcontroller mengirim signal/arus ke LED
    pinMode(Button, INPUT);// Fungsi yang menjelasan variable Button sebagai INPUT, yaitu microcontroller menerima signal/arus dari PushButton
}

void loop()
{
    int Button_state = digitalRead(Button); // Variable yang menjelaskan bahwa dia berfungsi untuk membaca PushButton
    if (Button_state == 1) // Fungsi yang mebjelaskan apabila PushButton di tekan maka :
    {
        digitalWrite(LED1, HIGH); // LED akan menyala
    }
    else // Apabila PushButton tidak di tekan maka:
    {
        digitalWrite(LED1, LOW); // LED akan mati
    }
}
