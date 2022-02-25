#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string m_Name;
        double m_Attack;
        double m_Health;
        
    public:
        // constructor dengan default assignment
        Hero(const char *name = "Empty", double attack = 30.5, double health = 50.5){
            this->m_Name = name;
            this->m_Attack = attack;
            this->m_Health = health;
        }
        
        void display_all(){
            cout << "\nHero   : " << this->m_Name << endl;
            cout << "Attack : " << this->m_Attack << endl;
            cout << "Health : " << this->m_Health << endl;
        }
};

int main(){
    
    Hero* hero1 = new Hero("Jupri",75,80.55); // tidak di isi dengan default assignment
    hero1->display_all();
    
    Hero hero2 = Hero("Kipli",45); // health di isi dengan default assignment
    hero2.display_all();
    
    Hero* hero3 = new Hero("Jamet"); // attack, health di isi dengan default assignment
    hero3->display_all();
    
    Hero hero4 = Hero(); // name, attack, health di isi dengan default assignment
    hero4.display_all();
    
    delete hero1;
    delete hero3;
    
    return 0;
}