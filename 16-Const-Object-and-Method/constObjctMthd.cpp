#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string m_Name;
        
    public:
        Hero(const char *name){
            this->m_Name = name;
        }
        
        // setter
        void change_name(const char *newName){
            // overloaded name, ( = ) mengganti nama
            this->m_Name = newName;
        }
        
        // getter
        string set_fixed_name() const {
            return this->m_Name;
        }
        
        // tambah keyword const pada method
        void display_all() const {
            cout << "Name Hero: " << this->m_Name << endl;
        }
};

int main(int argc, char const *argv[]){
    
    // const/konstanta = sesutu data yang tetap dan tidak bisa di ubah
    
    /* object tidak const */
    
    Hero hero1 = Hero("jupri");
    hero1.display_all();
    // bisa merubah nama hero karena object tidak const
    hero1.m_Name = "Kipli";
    hero1.display_all();
    hero1.change_name("Tatang");
    hero1.display_all();
    hero1.set_fixed_name();
    cout << endl;
    
    
    /* object const */
    // jika memanggil method pada object const maka kita harus membuat method yang const dengan menambahkan keyword const
    
    const Hero hero2 = Hero("Jupri");
    hero2.display_all();
    // hero2.m_Name = "Jamet"; // tidak bisa karena object const
    // hero2.change_name("Dudung"); // tidak bisa karena object const
    hero2.display_all();
    hero2.set_fixed_name();
    
    // 1. Jika object tidak const maka method bisa di pamggil semua
    // 2. Jika object const maka hanya object const yang bisa di panggil
    
    return 0;
}