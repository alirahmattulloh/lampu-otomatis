

    int LDR= A0;          // membuat variabel LDR untuk pin A0
    int LED= 13;          // membuat variabel LED untuk pin 13
    int nilaiLDR= 0;  // variabel nilai awal untuk nilaiLDR
    void setup(){
      pinMode(LED, OUTPUT);          // menentukan LED menjadi OUTPUT
      Serial.begin(9600);          // komunikasi Arduino ke Komputer
    }
    void loop(){
      nilaiLDR= analogRead(LDR);  // menyimpan nilai yang dibaca dari LDR ke variabel nilaiLDR
      Serial.print("NilaiLDR= ");         // menampilkan teks nilaiLDR=
      Serial.println(nilaiLDR);                 // menampilkan nilai dari nilaiLDR
      if(nilaiLDR < 500) {          // jika nilai dari LDR kurang dari 500
        digitalWrite(LED, HIGH);         // lampu LED menyala
      }
      else  {                           // jika tidak
        digitalWrite(LED, LOW);         // lampu LED mati
      }
    }


