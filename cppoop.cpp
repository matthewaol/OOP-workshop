#include <iostream> // C++
using namespace std; 

class Abstractmachine : machine {
    virtual void complicatedMethod()=0; // just a declaration 
    // definition is down below in our machine class 
};

class machine {
    
    private:
    
    string cpu;
    int cost; 
    string memory; 

    public:
    void complicatedMethod() {
        //definition of supercomplicatedmethod
    }
    void launchApplication() {
        // launches an application
    }

    void calculatesSomething() {
        // calculates something 
    }

    void turnOn() {
        // turns on
    }

    setCpu(string argsCpu) {
        cpu = argsCpu;
    } 

    machine(string argsCpu, int argsCost, string argsMemory) {
        cpu = argsCpu;
        cost = argsCost;
        memory = argsMemory;
    }
}

class phone : public machine { // subclass phone inherits stuff from machine class
    string screen;
    string speaker; 
    int phoneNumber;

    void call() {
        cout << "pick up the phone baby" << endl;
    }
    void dial911() {
        cout << "help 911 operator pls" << endl;
    }
    void turnOn() {
        cout << "FACE ID " << endl;
    }
};
// Inheritance, Encapsulation, Abstraction and Polymorphism
int main() {
    machine pc1("ryzen 9000000", 320, "lotta memory");

}