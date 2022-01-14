#include <iostream>
#include <string>
using namespace std;

// Saat membuat Class harus sebelum body program utama / int main

class Siswa{ // Siswa yang bertipe class
  // public
  // private
  // protected
  public:
    string nama;
    string jurusan;
    string NIS;
    
};

int main(int argc, char *argv[]){
  
  // OOP ( Class and Object )
  // Class = Sebuah Class Atau 
  // Object 
  
  // => Data Member
  // => Member Function
  
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