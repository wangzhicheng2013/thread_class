#include <iostream>
#include "base_thread.hpp"
class print_thread final : public base_thread {
    virtual void process() override {
        std::cout << "I am a print thread." << std::endl;
    }
};
int main() {
    print_thread pp;
    pp.run();
    pp.join();
    
    return 0;
}