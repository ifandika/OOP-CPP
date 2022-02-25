#include <iostream>
#include "Player.hpp"

Player::Player (const char *dataStr){
    this->m_StrPublic = dataStr;
    this->m_StrPrivate = dataStr;
}

void Player::display_all(){
    std::cout << "Public : " << this->m_StrPublic << std::endl;
    // bisa menampilkan member private karena fungsi ada dalam class
    std::cout << "Private: " << this->m_StrPublic << std::endl;
}

// mengakses member public
void Player::display_member_public(){
    std::cout << "Ini Public : " << this->m_StrPublic << std::endl;
}

// mengakses member private
void Player::display_member_private(){
    std::cout << "Ini Private: " << this->m_StrPrivate << std::endl;
}