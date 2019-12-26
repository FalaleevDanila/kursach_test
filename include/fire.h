//
// Created by danf2 on 26.12.2019.
//

#ifndef TEST_KURSACH_FIRE_H
#define TEST_KURSACH_FIRE_H
class Npc :
{

public:
    Npc(){
        maxHealth = 100;
        health = 100;
    }

    ~Npc(){}

    void hit(int damage){
        health -= damage;
    }
    double getHealth(){
        return health;
    }
    bool survive(){
        if(health>0) return true;
        return false;
    }
private:

    double health; // здоровье
    double maxHealth; // максимальное здоровье

};
#endif //TEST_KURSACH_FIRE_H
