//
// Created by Remi Peyras on 13/11/2021.
//

#include "ExerciseOne.hpp"

ExerciseOne::ExerciseOne() {
    _point = Figure::Point3D("Initial", 4, 2, 3);
}

void ExerciseOne::run() {
    std::cout << "Initial coordinate" << std::endl;
    _point.dump();
    this->rotateTowardsX();
    this->rotateTowardsY();
    this->rotateTowardsZ();
    this->rotateTowardsAll();
}

void ExerciseOne::rotateTowardsX() {
    std::cout << "Rotate Towards X" << std::endl;
    Figure::Point3D newPoint = Figure::Point3D("Towards X", _point.getPoint());

    newPoint.rotation(Matrix::Axis::X, 180);
    newPoint.dump();
}

void ExerciseOne::rotateTowardsY() {
    std::cout << "Rotate Towards Y" << std::endl;
    Figure::Point3D newPoint = Figure::Point3D("Towards Y", _point.getPoint());

    newPoint.rotation(Matrix::Axis::Y, 180);
    newPoint.dump();
}

void ExerciseOne::rotateTowardsZ() {
    std::cout << "Rotate Towards Z" << std::endl;
    Figure::Point3D newPoint = Figure::Point3D("Towards Z", _point.getPoint());

    newPoint.rotation(Matrix::Axis::Z, 180);
    newPoint.dump();
}

void ExerciseOne::rotateTowardsAll() {
    std::cout << "Rotate Towards All" << std::endl;

    _point.rotation(Matrix::Axis::X, 180);
    _point.rotation(Matrix::Axis::Y, 180);
    _point.rotation(Matrix::Axis::Z, 180);
    _point.dump();
}