#include <iostream>
#include <string>

using namespace std;

class Siswa{ // Siswa yang bertipe class

  // Jenis² Akses Modifayer
  
  // public => Terbuka, bisa di akses di luar class
  // private => Tertutup, hanya bisa di akses di dalam class
  // protected => Terbatas, hanya bisa di akses dengan cara tertentu
  
  public:
    string nama;
    string jurusan;
    string NIS;
    
};

int main(int argc, char const *argv[]){
  
  // OOP ( Class and Object )
  // Class = Sebuah Class, Template atau Wadah
  // Class biasanya terdiri dari "data" dan "fungsinya"
  
  // contoh:
  // ( Class )       |       ( Object )
  // class Siswa     =>      siswa1
  //   - nama        =>         - siswa1.nama = "Jupri"
  //   - jurusan     =>         - siswa1.jurusan = "Mesin"
  //   - NIS         =>         - siswa1.NIS = 1244
  
  // Problem: Saat membuat object kita memerlukan banyak baris untuk
  //          mendeklarasinya. Contoh saat kita membuat object siswa1
  //          kita memerlukan banyak baris untuk deklarasi object seperti
  //          nama, jurusan dll. Maka dari itu kita akan menggunakan " Constructor "
  
  Siswa siswa1; // ( siswa1 ) Object bisa lebih dari satu 
  siswa1.nama = "Jupri";
  siswa1.jurusan = "Menjahit";
  siswa1.NIS = "123145";
  
  cout << "nama siswa1    : " << siswa1.nama << endl;
  cout << "jurusan siswa1 : " << siswa1.jurusan << endl;
  cout << "NIS siswa1     : " << siswa1.NIS << endl;
  cout << endl;
  
  Siswa siswa2;
  siswa2.nama = "Kipli";
  siswa2.jurusan = "Karate";
  siswa2.NIS = "134567";
  
  cout << "nama siswa2    : " << siswa2.nama << endl;
  cout << "jurusan siswa2 : " << siswa2.jurusan << endl;
  cout << "NIS siswa2     : " << siswa2.NIS << endl;
  
  return 0;
}