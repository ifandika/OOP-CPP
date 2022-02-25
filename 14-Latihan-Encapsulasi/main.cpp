#include <iostream>
#include <string>

#include "../Player.hpp"
#include "../Weapon.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    
    Player* player1 = new Player("Kipli");
    Weapon* weapon1 = new Weapon("AK 47", 100);
    
    player1->equip_weapon(weapon1);
    weapon1->display_all();
    cout << endl;
    
    player1->display_all();
    
    return 0;
}