#ifndef __PLAYER
#define __PLAYER

class Player{
    // bisa di akses di luar class karena public
    public:
        std::string m_StrPublic;
    
    // hanya bisa di akses di dalam class ini saja dan tidak bisa di akses di luar class
    private:
        std::string m_StrPrivate;
        
    public:
        // constructor public karena akan di akses di luar clas, contoh akan di akses oleh main
        // prototype
        Player(const char *dataStr);
        
        void display_all();
        void display_member_public();
        void display_member_private();
    
};

#endif