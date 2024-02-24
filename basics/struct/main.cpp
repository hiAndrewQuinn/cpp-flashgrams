#include <iostream>
#include <string>
#include <vector>

// Define a simple struct
struct Person {
    std::string name;
    int age;

    // A method to display person information
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create an instance of Person
    Person alice {"Alice", 30};

    // Access and modify struct members
    alice.display();

    // Create another instance
    Person bob;
    bob.name = "Bob";
    bob.age = 25;
    bob.display();

    // Using struct in a vector
    std::vector<Person> people;
    people.push_back(alice);
    people.push_back(bob);

    // Displaying each person in the vector
    for (const auto& person : people) {
        person.display();
    }

    return 0;
}

