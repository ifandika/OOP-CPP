# 1 "main.cpp"                                                              # 1 "<built-in>" 1                                                          # 1 "<built-in>" 3                                                          # 415 "<built-in>" 3                                                        # 1 "<command line>" 1                                                      # 1 "<built-in>" 2                                                          # 1 "main.cpp" 2                                                                                                                                                                                                                                                                                                # 1 "./Player.hpp" 1                                                                                                                                                                                                                                                                                                                                                                                                                                                    # 1 "./Weapon.hpp" 1                                                                                                                                                                                                                                                                                                                                                                                                                                                    class Weapon{                                                                   private:                                                                        std::string m_Name;
        double m_Damage;

    public:

        Weapon(const char *name, double damage);

        std::string set_name_weapon();
        void display_all();

};
# 7 "./Player.hpp" 2

class Player{
    private:

        std::string m_Name;
        Weapon* m_Weapon1;

    public:

        Player(const char *name);

        std::string set_name_player();

        void display_all();
        void equip_weapon(Weapon* weapon);
};
# 5 "main.cpp" 2


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
# 1 "Player.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 415 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "Player.cpp" 2



# 1 "./Player.hpp" 1





# 1 "./Weapon.hpp" 1





class Weapon{
    private:
        std::string m_Name;
        double m_Damage;

    public:

        Weapon(const char *name, double damage);

        std::string set_name_weapon();
        void display_all();

};
# 7 "./Player.hpp" 2

class Player{
    private:

        std::string m_Name;
        Weapon* m_Weapon1;

    public:

        Player(const char *name);

        std::string set_name_player();

        void display_all();
        void equip_weapon(Weapon* weapon);
};
# 5 "Player.cpp" 2


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
# 1 "Weapon.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 415 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "Weapon.cpp" 2



# 1 "./Weapon.hpp" 1





class Weapon{
    private:
        std::string m_Name;
        double m_Damage;

    public:

        Weapon(const char *name, double damage);

        std::string set_name_weapon();
        void display_all();

};
# 5 "Weapon.cpp" 2

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