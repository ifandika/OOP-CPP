#include <iostream>
#include <string>

using namespace std;

class Tanpa_constructor{
  public:
    string data;
    
    void display (){
      cout << Tanpa_constructor::data << endl;
    }
};

class Dengan_constructor{
  public:
    string data;
    
    Dengan_constructor (const char* inputData){
      Dengan_constructor::data = inputData;
    }
    
    void display (){
      cout << Dengan_constructor::data<< endl;
    }
};

int main (int argc, char const* argv[]){
  
  // cara-cara membuat / inisialisasi object pada class
  
  // cara 1, membuat object tanpa constructor ( di memory stack )
  Tanpa_constructor object1;
  object1.data = "object 1";
  object1.display();
  
  // cara 2, membuat object dengan constructor ( di memory stack )
  Dengan_constructor object2 = Dengan_constructor("object 2");
  object2.display();
  
  // cara 3, membuat object dengan constructor ( di memory stack )
  Dengan_constructor object3("object 3");
  object3.display();
  
  // cara 4, membuat object pada ( memory heap )
  // contoh dengan constructor
  Dengan_constructor* object4 = new Dengan_constructor("object 4");
  // jika mengakses member function menggunakan dereference atau menggunakan method arrow ( -> )
  (*object4).display(); /* dengan dereference */
  object4->display(); /* dengan arrow */
  
  return 0;
}