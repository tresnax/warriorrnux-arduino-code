// --------------------------------------------
//Split Code menggunakan caracter
// --------------------------------------------

void setup() {
  // put your setup code here, to run once:

}

void loop() {

//Asumsi data yang dikirim memiliki format
//data1#30 (data yang dikirim adalah 30)

// Membaca data pertama
 String first  = Serial.readStringUntil('#');
 if (first == "data1"){
  String second = Serial.readStringUntil('#');
  //Disini bisa kasih script mengirim data
  //dengan value nya si second ini
 }
 else if (first == "data2"){
  String second = Serial.readStringUntil('#');
  //Disini bisa kasih script mengirim data
  //dengan value nya si second ini
 }
}
