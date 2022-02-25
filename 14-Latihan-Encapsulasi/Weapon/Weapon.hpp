#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon{
    private:
        std::string m_Name;
        double m_Damage;
        
    public:
        // constructor
        Weapon(const char *name, double damage);
        
        std::string set_name_weapon();
        void display_all();
        
};

#endif