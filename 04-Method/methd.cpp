#include <iostream>
#include <string>

using namespace std;

class Buah {
  public:
  string Nama;
  string Rasa;
  string Warna;
  double Harga;

  // constructor
  Buah (string inputNama, string inputRasa, string inputWarna, double inputHarga) {
    Buah::Nama = inputNama;
    Buah::Rasa = inputRasa;
    Buah::Warna = inputWarna;
    Buah::Harga = inputHarga;
  }

  // membuat method / fungsi yang hanya untuk class ini saja

  // ( Fungsi tanpa Parameter dan tanpa Return )
  void tampilkanData (){
    cout << "Nama  : " << Buah::Nama << endl;
    cout << "Rasa  : " << Buah::Rasa << endl;
    cout << "Warna : " << Buah::Warna << endl;
    cout << "Harga : " << Buah::Harga << endl;
  }

  // ( Fungsi dengan Parameter dan tanpa return )
  // string = char array => lambat
  // const char * = sama seperti string namu lebih cepat
  void ubahNama (const char* namaBaru){
    Buah::Nama = namaBaru;
  }
  
  // ( Fungsi tanpa Parameter dan dengan Return )
  string tampilkanWarna (){
    return Buah::Warna;
  }
  
  double tampilkanHarga (){
    return Buah::Harga;
  }
  
  // ( Fungsi dengan Parameter dan dengan Return )
  double ubahHarga (const double &hargaBaru){
    return Buah::Harga + hargaBaru;
  }
  
};


int main (int argc, char const *argv[]){

  // ( method )
  // membuat method / fungsi pada class

  Buah pisang("pisang", "Manisss", "Kuning", 9.999);
  
  // mengambil fungsi dalam class mengunakn ( . )
  pisang.tampilkanData();
  
  pisang.ubahNama("Gedang");
  cout << "nama baru: " << pisang.Nama << endl;
  
  cout << "warna buah: " << pisang.tampilkanWarna() << endl;
  cout << "harga buah: " << pisang.tampilkanHarga() << endl;
  
  cout << "harga baru: " << pisang.ubahHarga(2.000) << endl;
 
  return 0;
}