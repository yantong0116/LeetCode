#include <iostream>
#include <fstream>

using namespace std;

// Class
class Car {
    // Encapsulation
    private:
        // To access a private attribute, use public "get" and "set" methods
        int salary;
    public:
        string brand;   
        string model;
        int year;
        int speed(int maxSpeed);

        // Constructor
        Car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }

        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}


class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
        cout << "Tuut, tuut! \n" ;
        }
};


class MyCar: public Vehicle {
  public:
    string model = "Mustang";
};

class Employee {
    // protected, is similar to private, but it can also be accessed in the inherited class
    protected: 
        int salary;
};

class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
        salary = s;
        }
        int getSalary() {
        return salary;
        }
};

class Animal {
    public:
        void animalSound() {
        cout << "The animal makes a sound \n";
        }
};


class Pig : public Animal {
    public:
        void animalSound() {
        cout << "The pig says: wee wee \n";
        }
};


class Dog : public Animal {
    public:
        void animalSound() {
        cout << "The dog says: bow wow \n";
    }
};

int main() {
    // Object
    Car carObj1("BMW", "X5", 1999);
    // carObj1.brand = "BMW";
    // carObj1.model = "X5";
    // carObj1.year = 1999;

    Car carObj2("Ford", "Mustang", 1969);
    // carObj2.brand = "Ford";
    // carObj2.model = "Mustang";
    // carObj2.year = 1969;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
                                                            // BMW X5 1999
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
                                                            // Ford Mustang 1969
    cout << carObj2.speed(200) << "\n";                     // 200
    carObj2.setSalary(50000);
    cout << carObj2.getSalary() << "\n";                    // 50000
    
    // Inheritance
    MyCar myCar;
    myCar.honk();                                           // Tuut, tuut!
    cout << myCar.brand + " " + myCar.model << "\n";        // Ford Mustang
    
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << "\n";        // Salary: 50000
    cout << "Bonus: " << myObj.bonus << "\n";               // Bonus: 15000
    
    // Polymorphism
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    myAnimal.animalSound();                                 // The animal makes a sound
    myPig.animalSound();                                    // The pig says: wee wee
    myDog.animalSound();                                    // The dog says: bow wow

    // Create and Write To a File
    ofstream MyFile("filename.txt");
    MyFile << "Files can be tricky, but it is fun enough!";
    MyFile.close();

    // Read a File
    string myText;
    ifstream MyReadFile("filename.txt");
    while (getline (MyReadFile, myText)) {
        cout << myText;                                     // Files can be tricky, but it is fun enough!
    }
    MyReadFile.close();
    cout << "\n";

    // Exceptions
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw 505;
        }
    }
    catch (...) {
        cout << "Access denied - You must be at least 18 years old.\n";
                                                            // Access denied - You must be at least 18 years old.
    }

    return 0;
}
