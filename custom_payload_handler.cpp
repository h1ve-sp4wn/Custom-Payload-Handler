#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No payload received!" << std::endl;
        return 1;
    }
    std::string payload = argv[1];
    std::cout << "Running C++ attack with payload: " << payload << std::endl;
    
    // Custom payload processing logic
    // For now, just simulate the attack by printing the payload
    if (payload == "inject react specific payload") {
        std::cout << "React specific attack initiated." << std::endl;
    } else if (payload == "inject angular specific payload") {
        std::cout << "Angular specific attack initiated." << std::endl;
    } else {
        std::cout << "Default attack initiated." << std::endl;
    }

    return 0;
}