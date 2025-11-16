// By default class me jo attribute hote hai wo private hote hai
#include <iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    int get(){
        return this->health;
    }

    void set(int health){
        this->health = health;
    }
};

int main() {
    Hero h1;
    h1.set(10);
    h1.level = 'A';
    cout<<"Health is: "<<h1.get()<<endl;
    cout<<"Level is: "<<h1.level<<endl;
    return 0;
}
