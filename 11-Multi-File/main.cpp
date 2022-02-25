#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    
    // ketika multi file, banyak file cpp dll, maka kita harus meng compile secara satu-satu
    // namun berbeda ketika menggunakan IDE hanya tekan tombol hijau "Play" atau dengan cara lainya

    Player* player = new Player("jupri", 75.55);
    player->display_all_data();
    player->change_name("kipli");
    cout << "New Name   : " << player->m_Name << endl;
    player->change_health(90.99f);
    cout << "New Health : " << player->m_Health << endl;
    
    delete player;
    
    return 0;
}