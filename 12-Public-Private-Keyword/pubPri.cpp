#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    
    Player* player1 = new Player("jamet");
    player1->display_all();
    player1->display_member_public(); // bisa karena fungsi ada dalam class
    player1->display_member_private(); // bisa karena fungsi ada dalam class
    
    cout << "Nama Public : " << player1->m_StrPublic << endl; // bisa mengakses karena public, bisa di akses siapa saja di luar class
    // cout << "Name Private: " << player1->m_StrPrivate << endl; // tidak bisa mengakses karena member private dan mengakses dari luar class
    
    delete player1;
    
    return 0;
}