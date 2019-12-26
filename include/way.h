//
// Created by danf2 on 26.12.2019.
//

#ifndef TEST_KURSACH_WAY_H
#define TEST_KURSACH_WAY_H

#include <vector>
#include <algorithm>
#include <iostream>

struct Way
{

    bool inf;
    bool cycle;
    std::vector <std::pair<double>> way;
    std::vector <std::pair<double>> copy;


    Way(){}

    Way(bool inf, bool cycle, std::vector <QPointF> way){

        this->inf   =  inf;
        this->cycle =  cycle;
        this->way   =  way;
        this->copy =   way;
    }

    std::vector <double> GetCopy(){
        return copy;
    }


    std::vector <double> GetWay(){
        return way;
    }

    void next(){
        //std::cout<<"77_";
        if(copy.size()!=0){
            if(copy.size() == 1){
                if(inf == true){

                    std::reverse(way.begin(),way.end());
                    copy = way;


                    auto iter2=copy.cbegin();
                    copy.erase(iter2);
                }
                else if(cycle == true){
                    copy = way;
                }
                else {
                    auto iter=copy.cbegin();
                    copy.erase(iter);
                }
            }
            else {
                auto iter=copy.cbegin();
                copy.erase(iter);
            }
        }
    }


    ~Way(){}
};
#endif //TEST_KURSACH_WAY_H
