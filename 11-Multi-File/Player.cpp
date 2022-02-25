#include <iostream>
#include "Player.hpp"

Player::Player (const char *name, float health){
    this->m_Name = name;
    this->m_Health = health;
}

void Player::display_all_data(){
    std::cout << "Name Player: " << this->m_Name << std::endl;
    std::cout << "Health     : " << this->m_Health << std::endl;
}

void Player::change_name(const char *newName){
    this->m_Name = newName;
}

void Player:: change_health(float newHealth){
    this->m_Health = newHealth;
}