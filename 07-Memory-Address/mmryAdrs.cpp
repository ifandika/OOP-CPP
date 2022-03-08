#include <iostream>
#include <string>

using namespace std;

class Kosong{
  
};

class Biasa{
  /* besarnya size memory class tergantung dari data member class */
  public:
    int nilaiInt1; // 4 byte
    int nilaiInt2; // 4 byte
    double dataDo; // 8 byte
    string dataStr; // 24 byte
    // 4 + 4 + 8 + 24 = 40
};

class Siswa{
  public:
    string Nama;
    
    Siswa (const char* inNama){
      Siswa::Nama = inNama;
    }
    
};

int main (int argc, char const* argv[]){
  
  // memory stack = memory seperti tupukan, memiliki ruang yang terbatas, address / data akan terhapus secara otomatis 
  // . jika terlalu banyak digunakan maka akan menyebabkan stack overflow
  // memory heap = free memory, yaitu sebuah kotak / blok memory, memiliki kapasitas yang besar, penghapusan address / data harus manual
 
  Kosong kosong; /* memory stack */
  Biasa biasa; /* memory stack */
  
  // Melihat alokasi besar memory yang di ambil oleh class
  cout << "Alokasi memory class Kosong : " << sizeof(Kosong) << " byte" << endl;
  cout << "Alokasi address object osong: " << &kosong << endl;
  cout << "Alokasi memory class Biasa  : " << sizeof(Biasa) << " byte" << endl;
  cout << "Alokasi address object biasa: " << &biasa << endl;
  
  // address pada stack
  string A;
  string B;
  Siswa siswa1 = Siswa("jupri"); /* pada memory stack */
  Siswa* siswa2 = new Siswa("kipli"); /* membuat object pada memory heap, menggunakan pointer dgn keyword new */
  // address var pointer tetap ada di stack, namun object / data member akan ada di heap
  string C;
  string D;
  
  cout << "\nAddress \n";
  cout << "A     : " << &A << endl;
  cout << "B     : " << &B << "\n\n";
  cout << "siswa1: " << &siswa1 << endl;
  cout << "siswa2: " << &siswa2 << endl; // akan mengambil address sebenarnya dari variabel pointer, pada memory stack
  cout << "siswa2: " << siswa2 << endl; // akan mengambil address object yang berada pada memory heap
  cout << "\nC     : " << &C << endl;
  cout << "D     : " << &D << endl;
  
  return 0;
}