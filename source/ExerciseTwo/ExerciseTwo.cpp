//
// Created by Remi Peyras on 13/11/2021.
//

#include "ExerciseTwo.hpp"

ExerciseTwo::ExerciseTwo() {
    //_point = Figure::Point3D("Point", 12, 1, 3);
    //n = 6;
    _point = Figure::Point3D("Point", 6, -2, -8);
    n = 4;
}

void ExerciseTwo::run() {
    _point.dump();
    glm::mat4x4 canonicalPerspectiveProjectionMatrix = glm::mat4x4(
            1, 0, 0, 0,
            0, 1, 0, 0,
            0, 0, 1, 0,
            0, 0, -1 / n, 1);
    auto point = canonicalPerspectiveProjectionMatrix * _point.getPoint();
    std::cout << "point : {" << point.x << ", " << point.y << ", " << point.z << ", " << point.w << "}" << std::endl;
    std::cout << "a " << point.a << std::endl;
    std::cout << "g " << point.g << std::endl;
    std::cout << "s " << point.s << std::endl;
    std::cout << "w " << point.w << std::endl;
    std::cout << "x " << point.x << std::endl;
    std::cout << "y " << point.y << std::endl;
    std::cout << "z " << point.z << std::endl;

    std::cout << "b " << point.b << std::endl;
    std::cout << "p " << point.p << std::endl;
    std::cout << "q " << point.q << std::endl;
    std::cout << "r " << point.r << std::endl;
    std::cout << "t " << point.t << std::endl;

}