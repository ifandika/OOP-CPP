#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string Nama;
        
        // constructor
        Player(const char *in_nama){
            Player::Nama = in_nama;
            cout << in_nama << " dibuat" << endl;
        }
        
        // destructor ( ~ ), memberikan output jika object telah di hapus
        ~Player(){
            cout << Player::Nama << " dihapus" << endl;
        }
};

void membuat_stack_player(){
    Player stack_player = Player("Stack Player");
} // ketika stack melewati akhir simbol } maka data akan di hapus dari memory

void membuat_heap_player(){
    Player* heap_player = new Player("Heap Player");
    // menggapus object / data pada memory heap harus manual
    // keyword delete
    delete heap_player;
}

void membuat_player_stack_pointer(Player* &player_pointer){
    Player player_stack  = Player("player stack pointer");
    player_pointer = &player_stack;
}

void membuat_player_heap_pointer(Player* &player_pointer){
    Player* player_heap = new Player("player heap pointer");
    player_pointer = player_heap;
    // delete player_heap; menyebabkan memory leak, maka jika ingin menghapus harus di luar scope
}

Player buat_player_stack(){
    Player stack = Player("ini stack");
    return stack;
}

Player* buat_player_heap(){
    Player* heap = new Player("ini heap");
    return heap;
}


int main(int argc, char const *argv[]){
    
    // memory leak bisa terjadi pada memory heap
    // setiap kita membuat object pada memory heap, maka kita harus hapus dengan keyword delete
    
    
    membuat_stack_player();
    membuat_heap_player();
    
    
    cout << "\nMemory Leak" << endl; // memory leak, memory yang seharusnya terhapus tapi tidak bisa
    Player* player_pointer1;
    membuat_player_stack_pointer(player_pointer1); cout << "\n";
    // cout << (*player_pointer1).Nama << endl; tidak terjadi apa apa
    
    Player* player_pointer2;
    membuat_player_heap_pointer(player_pointer2); // memory leak
    cout << player_pointer2->Nama << endl; // memory leak, masih bisa menggambil data nama walau sudah di hapus
    player_pointer2->Nama = "nama baru player pointer2";
    cout << player_pointer2->Nama << endl;
    delete player_pointer2; // menghapus object di luar scope
    
    
    cout << "\nReturn Object" << endl;
    Player player_return_stack = buat_player_stack();
    cout << player_return_stack.Nama << endl << endl;
    
    Player* player_return_heap = buat_player_heap();
    cout << player_return_heap->Nama << endl;
    delete player_return_heap;
    
    return 0;
} // batas akhir life time object 