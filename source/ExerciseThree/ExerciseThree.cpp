//
// Created by Remi Peyras on 13/11/2021.
//

#include "ExerciseThree.hpp"

ExerciseThree::ExerciseThree(const Figure::Object3D &mesh) : _mesh(mesh) {

}

void ExerciseThree::run() {
    std::cout << "Initial Coordinate" << std::endl;
    _mesh.dump();
    std::cout << "Reflection On Plane XZ" << std::endl;
    _mesh.reflexion(Matrix::XZ);
    _mesh.dump();
}

