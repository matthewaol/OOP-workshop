// Source: https://www.youtube.com/watch?v=wN0x9eZLix4 Object Oriented Programming (OOP) in C++ Course

#include <iostream>
using namespace std;
class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee  {
protected:
    string name; 
    string company;
    int age;

public:
    void introduceYourself() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
    void setName(string aName) {
        name = aName;
    }
    string getName() {
        return name;
    } 
    void setAge(int aAge) {
        age = aAge;
    }
    int getAge() {
        
        return age;
    }

    Employee(string aName, string aCompany, int aAge) {
        name = aName;
        company = aCompany;
        age = aAge;
    }

    void AskForPromotion() {
        if(age>30)
            cout << name << " got promoted!" << endl;
        else    
            cout << name << " is young ass" << endl;
        }
    
    virtual void work(){
        cout << name << " is checking email and getting a haircut" << endl;
    }
};

class Developer: public Employee {
    public:
        string favLang;
        
        Developer(string aName, string aCompany, int aAge, string lang) 
        :Employee(aName,aCompany,aAge)
        {
            favLang = lang;
        }
        void fixBug() {
            cout << getName() <<" fix that bug tho with " << favLang;
        }
        void work(){
        cout << name << " is checking email and thinking about " << favLang << endl;
    }
};

class Teacher: public Employee {
    public:
    string subject;
    void prepareLesson() {
        cout << name << " is preparing for " << subject << endl;
    }
    Teacher(string aName, string aCompany, int aAge, string aSubject) 
    :Employee(aName,aCompany,aAge) 
    {
        subject = aSubject;
    }
     void work(){
        cout << name << " is checking email and studying " << subject << endl;
    }
};

int main() {
    Employee employee1("APHELIOS", "the rift", 32);
    Employee employee2("TORNADO","pearl",12);
    
    Developer dev1("alistair", "riot", 12, "C");
    Teacher t1("tyler", "barber school", 35, "barberism");
    
    Employee *eptr = &dev1;
    Employee *eptr2 = &t1;

    eptr->work();
    eptr2->work();
}
