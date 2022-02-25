#include <iostream>
#include <string>

#include "../Weapon.hpp"

Weapon::Weapon(const char *name, double damage){
    this->m_Name = name;
    this->m_Damage = damage;
}

std::string Weapon::set_name_weapon(){
    return this->m_Name;
}

void Weapon::display_all(){
    std::cout << "Weapon : " << this->m_Name << std::endl;
    std::cout << "Damage : " << this->m_Damage << std::endl;
}