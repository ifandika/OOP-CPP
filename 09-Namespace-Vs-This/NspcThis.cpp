#include <iostream>
#include <string>

using namespace std;

class Class_data{
    public:
        // m_ = 
        string dataStr;
        double dataDble;
        int M_dataInt;
        
        // this = sebuah pointer untuk mengakses data member
        // namespace class = setiap class mempunyai namespace berupa nama class itu sendiri
        
        Class_data (const char *dataStr, double dataDble, int dataInt){
            Class_data::dataStr = dataStr;
            cout << this << endl; // output berupa address dari class ini
            this->dataDble = dataDble;
            // menggunakan nama variabel berbeda agar lebih singkat
            M_dataInt = dataInt;
        }
};

class Player{
    public:
        string m_Nama;
        int m_Power;
        double m_Health;
        
        // menggunakan this untuk mengakses member function
        Player (const char *nama, int power, double health){
            this->set_name(nama);
            this->set_power(power);
            this->set_health(health);
        }
        
        void set_name(const char *nama){
            // akan menunjuk pada data member string M_Nama = nama
            this->m_Nama = nama;
        }
        
        void set_power(int power){
            this->m_Power = power;
        }
        
        // kebanyak orang menggunakan namespace class untuk prototype
        void set_health(double health);
};

// menggunakan namespace
void Player::set_health(double health){
    this->m_Health = health;
}

int main(int argc, char const *argv[]){
    
    Class_data* data1 = new Class_data("data 1", 12.345, 1221);
    cout << data1->dataStr << endl;
    cout << data1->dataDble << endl;
    cout << data1->M_dataInt << endl << endl;
    
    Player* player1 = new Player("tatang", 90, 59.50);
    cout << player1->m_Nama << endl;
    cout << player1->m_Power << endl;
    cout << player1->m_Health << endl;
    
    delete data1;
    delete player1;
    
    return 0;
}