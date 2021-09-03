#include <iostream>
#include "../lib/loripmus_interface.h"

class InitTheInterface {
    private:
    int interface_id;
    std::string interface_hash;
    std::string interface_init_token;

    public:
    Interface init(){
        this->interface_id = -1;
        this->interface_hash = "1f11f1f";
        this->interface_init_token = "0xx_empty";
        Interface to_return;
        Creas new_ins;
        int param[] = {1,3,2,5};
        to_return.create_creas_instance(new_ins, param);
        std::cout << "Created Interface.";
        return to_return;
    }
};

int main() {
    InitTheInterface init_obj;
    Interface program = init_obj.init();
    // std::cout << Interface_Mas::memory_address_for_this << "\n";
    std::cout << program.instance.get_hash();
}