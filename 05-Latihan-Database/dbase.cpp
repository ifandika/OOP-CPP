#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Siswa{
  public:
    string Nama;
    string Jurusan;
    string Nis;
    
    Siswa (string inputNama, string inputJurusan, string inputNis){
      Siswa::Nama = inputNama;
      Siswa::Jurusan = inputJurusan;
      Siswa::Nis = inputNis;
    }
    
    string dataSiswa (){
      return "\n" + Nama + " " + Jurusan + " " + Nis;
    }
};

class DBase{
  public:
    ifstream in;
    ofstream out;
    string DBaseName;
    
    DBase (const char* inputDBaseName){
      DBase::DBaseName = inputDBaseName;
    }
    
    void saveDataInDBase (Siswa data){
      DBase::out.open(DBase::DBaseName, ios::app);
      DBase::out << data.dataSiswa();
      DBase::out.close();
    }
    
    void displayDataSiswa (){
      DBase::in.open(DBase::DBaseName, ios::in);
      string dataNama, dataNis, dataJurusan;
      int index = 1;
      
      while (!DBase::in.eof()){
        DBase::in >> dataNama;
        DBase::in >> dataJurusan;
        DBase::in >> dataNis;
        
        cout << index++ << " ";
        cout << dataNama << " ";
        cout << dataJurusan << " ";
        cout << dataNis << endl;
      }
      
      DBase::in.close();
    }
};

int main (int agrc, char const* argv[]){
  
  string inNama, inJurusan, inNis;
  DBase database("data.txt");
  
  cout << "Data Siswa\n";
  
  cout << "Masukan data siswa\n";
  cout << "Masukan nama: ";
  cin >> inNama;
  cout << "Masukan jurusan: ";
  cin >> inJurusan;
  cout << "Masukan nis: ";
  cin >> inNis;
  
  Siswa dataSiswa = Siswa(inNama, inJurusan, inNis);
  database.displayDataSiswa();
  database.saveDataInDBase(dataSiswa);
  
  return 0;
}