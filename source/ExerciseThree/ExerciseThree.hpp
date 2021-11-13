//
// Created by Remi Peyras on 13/11/2021.
//

#ifndef COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISETHREE_HPP
#define COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISETHREE_HPP

#include "Figure/Object/Object3D.hpp"

class ExerciseThree {
public:
    ExerciseThree();

    explicit ExerciseThree(const Figure::Object3D &mesh);

    ~ExerciseThree() = default;

    void run();

private:
    Figure::Object3D _mesh;
};


#endif //COMPUTERGRAPHIC_ASSIGNMENT_03_EXERCISETHREE_HPP
