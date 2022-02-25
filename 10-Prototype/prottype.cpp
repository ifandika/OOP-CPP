#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string m_Name;
        
        // constructor
        Player (const char *name);
        
        // deklarasi prototype
        void display();
        void change_name(const char *newName);
        
        // penjabaran prototype boleh di mana saja
};

// menggunakan namespace class
Player::Player (const char *name){
    this->m_Name = name;
}

void Player::display(){
    cout << "Name Player: " << this->m_Name << endl;
}

int main(int argc, char const *argv[]){
    
    Player* player1 = new Player("jupri");
    player1->display();
    player1->change_name("kipli");
    cout << "New Name   : " << player1->m_Name << endl;
    
    delete player1;
    
    return 0;
}

void Player::change_name(const char *newName){
    this->m_Name = newName;
}