#include <vector>
#include <fstream>
#include <iostream>
#include <string>

std::vector<unsigned char> read_file(const std::string& path) {
    std::ifstream file(path, std::ios::in | std::ios::binary);
    
    if (file) {
        std::vector<unsigned char> buffer(std::istreambuf_iterator<char>(file), {});
        
        // for (unsigned char byte : buffer) {
        //     std::cout << static_cast<int>(byte) << " ";
        // }
        // std::cout << "\n";

        return buffer;
    }
    else {
        std::cout << "Error reading file" << "\n";
        
        return std::vector<unsigned char>();  // return an empty vector
    }
}

bool write_file(const std::string& path, const std::vector<unsigned char>& data) {
    std::ofstream file(path, std::ios::out | std::ios::binary);
    
    if (!file) {
        std::cerr << "Error opening file for writing: " << path << "\n";
        return false;
    }
    
    file.write(reinterpret_cast<const char*>(data.data()), data.size());
    
    if (!file) {
        std::cerr << "Error writing to file: " << path << "\n";
        return false;
    }
    
    std::cout << "Successfully wrote " << data.size() << " bytes to " << path << "\n";
    return true;
}