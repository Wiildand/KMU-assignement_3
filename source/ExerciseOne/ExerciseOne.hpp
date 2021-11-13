//
// Created by Remi Peyras on 13/11/2021.
//

#ifndef COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISEONE_HPP
#define COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISEONE_HPP

#include "Figure/Point/Point3D.hpp"

class ExerciseOne {
public:
    ExerciseOne();

    ~ExerciseOne() = default;

    void run();

private:
    void rotateTowardsX();

    void rotateTowardsY();

    void rotateTowardsZ();

    void rotateTowardsAll();

    Figure::Point3D _point;
};


#endif //COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISEONE_HPP
