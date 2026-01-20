// this jo keyword hai wo current object ko point krta and jo v function me argument aata hai jis se hum jo object me likha hua hai usko change kr skte by using this keyword

#include <iostream>
using namespace std;

class Human{
    public:
    string name;
    int age;
    private:
    string occupation;
    public:
    void setOccu(string occupation){
        this->occupation = occupation;
    }

    string getOccu(){
        return occupation;
    }

    void setO(string name,int age){
        if(age>18){
            this->name = name + "Mehta";
        }
    }

    string getO(int pass){
        int password = 1234;
        if(pass == password){
            return name;
        }
    }

};

int main() {
    Human Shivam;
    Shivam.name = "Shivam";
    Shivam.age = 19;
    //Shivam.setOccu("Student");
    //std::cout<<"Name: "<<Shivam.name<<endl<<"Age: "<<Shivam.age<<endl<<"Occupation: "<<Shivam.getOccu()<<endl;
    Shivam.setO("Shivam",19);
    cout<<"Name: "<<Shivam.getO(1234)<<endl;
    return 0;
}
