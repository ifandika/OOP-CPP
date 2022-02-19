#include <iostream>
#include <string>

using namespace std;

// constructor akan di panggil pertama kali saat memanggil class
class Mahasiswa{
  public:
    string dataString;
    
    // nama constructor harus sama dengan nama class
    Mahasiswa (){
      cout << "ini constructor" << endl;
    }
};

// Class memiliki namespace
// Contoh: Class Siswa bernamespace Siswa::
class Siswa{
  // Harus public jika ingin menggunakan constructor
  public:
    double NIS;
    string nama;  /* Object Class Siswa */
    string jurusan;
    
    Siswa (double inputNIS, string inputNama, string inputJurusan){
      
      // Memanggil object di class Siswa menggunakan namespace
      Siswa::NIS = inputNIS;
      Siswa::nama = inputNama;
      Siswa::jurusan = inputJurusan;
      
      // Kita bisa menampilkan data menggunakan Constructor
      cout << "NIS     : " << Siswa::NIS << endl;
      cout << "Nama    : " << Siswa::nama << endl;
      cout << "Jurusan : " << Siswa::jurusan << endl;
    }
};

int main(int argc, char const *argv[]){
  
  // ( constructor )
  // Constructor = yang pertama kali di panggil saat memanggil class
  // Memanggil Constructor dengan menggunakan " Parameter ", namun
  // input pada parameter harus urut.
  
  // akan memanggil constructor
  Mahasiswa mahasiswa1;
  cout << "\n";
  
  Siswa siswa1(1125, "Kipli", "Pertanian");
  cout << "\n";
  
  // Atau bisa dengan cara
  Siswa siswa2 = Siswa(1126, "Jupri", "Perkulian");
  
  return 0;
}