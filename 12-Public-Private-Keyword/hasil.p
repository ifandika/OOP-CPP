// preprosesing
// ini adalah hasil dari beberapa file cpp lalu di gabungkan menjadi satu

# 1 "main.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 415 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.cpp" 2


# 1 "./Player.hpp" 1


class Player{

    public:
       std::string m_StrPublic;


    private:
       std::string m_StrPrivate;

    public:


        Player(const char *dataStr);
        void display_all();
        void display_member_public();
        void display_member_private();

};
# 4 "main.cpp" 2

using namespace std;

int main(int argc, char const *argv[]){

    Player* player1 = new Player("jamet");
    player1->display_all();
    player1->display_member_public();
    player1->display_member_private();

    cout << "Nama Public : " << player1->m_StrPublic << endl;


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
       std::string m_StrPublic;


    private:
       std::string m_StrPrivate;

    public:


        Player(const char *dataStr);
        void display_all();
        void display_member_public();
        void display_member_private();

};
# 3 "Player.cpp" 2

Player::Player (const char *dataStr){
    this->m_StrPublic = dataStr;
    this->m_StrPrivate = dataStr;
}

void Player::display_all(){
    std::cout << "Public : " << this->m_StrPublic << std::endl;
    std::cout << "Private: " << this->m_StrPublic << std::endl;
}

void Player::display_member_public(){
    std::cout << "Ini Public : " << this->m_StrPublic << std::endl;
}

void Player::display_member_private(){
    std::cout << "Ini Private: " << this->m_StrPrivate << std::endl;
}