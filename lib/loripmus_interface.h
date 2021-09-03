struct Interface_Mas {
    int id = 44;
    std::string creas_hash = "1434343453dd231323";
    // this memory_address_for_this = &this;
};

class Creas {
    public:
    std::string hash;
    int* parameters;

    public:
    std::string get_hash(){
        return hash;
    }
};

class Interface {
    Interface_Mas nums;
    int id;
    public:
    Creas instance;
    
    void create_creas_instance(Creas new_address, int peters[]){
        Creas retun_instance;
        retun_instance.parameters = peters;
        new_address = retun_instance;
    } 
};