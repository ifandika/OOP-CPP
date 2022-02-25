#include <iostream>
#include <string>

#include "../Player.hpp"

Player::Player(const char *name){
    this->m_Name = name;
}

std::string Player::set_name_player(){
    return this->m_Name;
}

void Player::equip_weapon(Weapon* weapon){
    this->m_Weapon1 = weapon;
}

void Player::display_all(){
    std::cout << "Player : " << this->m_Name << std::endl;
    std::cout << "Weapon : " << this->m_Weapon1->set_name_weapon() << std::endl;
}