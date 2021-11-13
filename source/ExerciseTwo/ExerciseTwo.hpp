//
// Created by Remi Peyras on 13/11/2021.
//

#ifndef COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISETWO_HPP
#define COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISETWO_HPP

#include "Figure/Point/Point3D.hpp"

class ExerciseTwo {
public:
    explicit ExerciseTwo();

    ~ExerciseTwo() = default;

    void run();

private:
    Figure::Point3D _point;
    size_t n;
};


#endif //COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISETWO_HPP
