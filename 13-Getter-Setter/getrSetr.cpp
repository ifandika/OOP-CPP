#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string m_Name;
        double m_AttackPower;
        int m_Level;
        int m_Exp;
        
    public:
        Player(const char *name){
            this->m_Name = name;
            this->m_AttackPower = 25;
            this->m_Level = 1;
            this->m_Exp = 0;
        }
        
        void display_all_data(){
            cout << "Name   : " << this->m_Name << endl;
            cout << "Attck  : " << this->m_AttackPower << endl;
            cout << "Level  : " << this->m_Level << "   Exp : " << this->m_Exp << endl;
        }
        
        // getter = membuat attribut hanya read only / tidak bisa diubah di luar class
        //  contoh dalam game yaitu nama, kita tidak ingin merubah nama terus menerus. maka
        //  kita harus set nama agar tetap
        string set_fixed_name(){
            return this->m_Name;
        }
        
        // setter = untuk me write data ke dalam class
        //  contoh kita ingin merubah data / attribut pada class namun tidak merubah secara langsung atau dari luar class
        //  maka kita menggunakan setter
        void fight(int expValue){
            int maxExp = 100; // batas max exp untuk level up
            int sisaExp = 0; // sisa exp ketika level up. jika exp 120 maka > batas max exp maka level up
            // dan sisa dari exp yaitu 20 (120 - 100) maka akan di set menjadi exp di level selanjutnya
            this->m_Exp += expValue;
            
            cout << "Get Exp " << expValue << endl;
            
            if (m_Exp >= maxExp){
                sisaExp = m_Exp - maxExp;
            }
            if (this->m_Exp >= maxExp){
                // level up
                cout << "LEVEL UP" << endl;
                this->m_Level++;
                // add attack power
                cout << "ATTACK POWER UP" << endl;
                this->m_AttackPower += 50;
                // reset 
                this->m_Exp = sisaExp;
            }
        }
    
};

int main(int agrc, char const *argv[]){
    
    Player player1 = Player("YANTO");
    player1.display_all_data();
    // implementasi dari getter
    player1.set_fixed_name(); // hanya read
    cout << endl;
    
    player1.fight(10);
    player1.display_all_data();
    player1.fight(10);
    player1.display_all_data();
    player1.fight(30);
    player1.display_all_data();
    player1.fight(40);
    player1.display_all_data();
    player1.fight(80);
    player1.display_all_data();
    player1.fight(50);
    player1.display_all_data();
    
    cout << endl;
    cout << "Statistik akhir player\n\n";
    player1.display_all_data();
    
    return 0;
}