#include <iostream>
#include <string>

using namespace std;
// friend function : method yang menghubungkan satu class dengan class lain
// dan bisa saling bertukan data walau atribut public, dan non-public atau private

// prototype class
class Hero_Tank;

class Hero_Fighter{
    private:
        string m_Name;
        double m_AttackDamage;
        double m_Health;
        
    public:
        // constructor dengan default assignment
        Hero_Fighter(const char *name = "Empty", double attckDmg = 0, double health = 0){
            this->m_Name = name;
            this->m_AttackDamage = attckDmg;
            this->m_Health = health;
        }
        
        // dengan keyword friend
        friend bool display_bersama(const Hero_Fighter &hero1, const Hero_Tank &hero2);
        // fungsi yang sama, jika parameter terbalik
        friend bool display_bersama(const Hero_Tank &hero1, const Hero_Fighter &hero2);
};

class Hero_Tank{
    private:
        string m_Name;
        double m_Armor;
        double m_Health;
        
    public:
        Hero_Tank(const char *name, double armor, double health){
            this->m_Name = name;
            this->m_Armor = armor;
            this->m_Health = health;
        }
        
        // penjabaran method bisa di dalam clasa / di luar class
        /* di dalam class */
        friend bool display_bersama(const Hero_Fighter &hero1, const Hero_Tank &hero2){
            cout << "Data Friend Function" << endl;
            cout << "\nHero Fighter  : " << hero1.m_Name << endl;
            cout << "Attck Damage  : " << hero1.m_AttackDamage << endl;
            cout << "Health        : " << hero1.m_Health << endl;
            
            cout << "\nHero Tank     : " << hero2.m_Name << endl;
            cout << "Armor         : " << hero2.m_Armor << endl;
            cout << "Health        : " << hero2.m_Health << endl;
            
            return true;
        }
        /* di luar class */
        friend bool display_bersama(const Hero_Tank &hero1, const Hero_Fighter &hero2);
};

bool display_bersama(const Hero_Tank &hero1, const Hero_Fighter &hero2){
    cout << "Data Friend Function" << endl;
    cout << "\nHero Tank     : " << hero1.m_Name << endl;
    cout << "Armor         : " << hero1.m_Armor << endl;
    cout << "Health        : " << hero1.m_Health << endl;
     
    cout << "\nHero Fighter  : " << hero2.m_Name << endl;
    cout << "Attck Damage  : " << hero2.m_AttackDamage << endl;
    cout << "Health        : " << hero2.m_Health << endl;
    
    return true;
}

int main(int argc, char const *argv[]){
    Hero_Fighter hero1 = Hero_Fighter("Yanto", 100, 80.50);
    Hero_Tank hero2 = Hero_Tank("Malphite", 70.50, 150.50);
    
    display_bersama(hero1, hero2);
    cout << endl;
    display_bersama(hero2, hero1);
    
    return 0;
}