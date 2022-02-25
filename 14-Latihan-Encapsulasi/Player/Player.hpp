#ifndef __PLAYER
#define __PLAYER

#include <string>

#include "../Weapon.hpp"

class Player{
    private:
        // M_ = Member / data member
        std::string m_Name;
        Weapon* m_Weapon1;
        
    public:
        // constructor
        Player(const char *name);
        // getter
        std::string set_name_player();
        
        void display_all();
        void equip_weapon(Weapon* weapon);
};

#endif