# 1 "main.cpp"                                                              # 1 "<built-in>" 1                                                          # 1 "<built-in>" 3                                                          # 415 "<built-in>" 3                                                        # 1 "<command line>" 1                                                      # 1 "<built-in>" 2                                                          # 1 "main.cpp" 2                                                                                                                                                                                                                    # 1 "./Player.hpp" 1                                                                                                                                                                                                                                                                                                                                                                                                                                                    class Player{                                                                   public:                                                                         std::string m_Name;                                                         float m_Health;                                                                                                                                                                                                                     Player (const char *name, float health);                                                                                                                                                                                            void display_all_data();                                                    void change_name(const char *newName);                                      void change_health(float newHealth);                                                                                                            };
# 4 "main.cpp" 2

using namespace std;

int main(int argc, char const *argv[]){

    Player* player = new Player("jupri", 75.55);
    player->display_all_data();
    player->change_name("kipli");
    cout << "New Name   : " << player->m_Name << endl;
    player->change_health(90.99f);
    cout << "New Health : " << player->m_Health << endl;

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





class Player{
    public:
        std::string m_Name;
        float m_Health;


        Player (const char *name, float health);


        void display_all_data();
        void change_name(const char *newName);
        void change_health(float newHealth);

};
# 3 "Player.cpp" 2

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