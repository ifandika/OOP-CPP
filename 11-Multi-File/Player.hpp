#include <string>

#ifndef __PLAYER
#define __PLAYER

class Player{
    public:
        std::string m_Name;
        float m_Health;

        // contructor
        Player (const char *name, float health);

        // method
        void display_all_data();
        void change_name(const char *newName);
        void change_health(float newHealth);

};

#endif