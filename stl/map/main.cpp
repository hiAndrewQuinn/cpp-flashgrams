#include <map>
#include <iostream>
#include <string>

int main() {
    std::map<std::string, int> m;
    m["one"] = 1;
    m["two"] = 2;
    for (const auto& pair : m) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
}

