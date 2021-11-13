#include "GeneralInclude.hpp"
#include "ExerciseOne/ExerciseOne.hpp"
#include "ExerciseTwo/ExerciseTwo.hpp"
#include "ExerciseThree/ExerciseThree.hpp"
#include "ExerciseFourth/ExerciseFourth.hpp"

void exerciseOne() {
    ExerciseOne exerciseOne;
    std::cout << "--- Exercise One ---" << std::endl;
    exerciseOne.run();
    std::cout << "--------------------" << std::endl;
}

void exerciseTwo() {
    ExerciseTwo exerciseTwo;
    std::cout << "--- Exercise Two ---" << std::endl;
    exerciseTwo.run();
    std::cout << "--------------------" << std::endl;
}

void exerciseThree() {
    std::string name = "Triangle";
    std::vector<Figure::Point3D> listPoint({
                                                   Figure::Point3D("A", 3, 4, 1),
                                                   Figure::Point3D("B", 6, 4, 2),
                                                   Figure::Point3D("C", 4, 6, 3)
                                           });

    ExerciseThree exerciseThree(Figure::Object3D(name, listPoint));

    std::cout << "--- Exercise Three ---" << std::endl;
    exerciseThree.run();
    std::cout << "--------------------" << std::endl;
}

void exerciseFourth() {
    ExerciseFourth exerciseFourth;
    std::cout << "--- Exercise Fourth ---" << std::endl;
    //exerciseFourth.run();
    std::cout << "--------------------" << std::endl;
}

int main() {
    exerciseOne();
    //exerciseTwo();
    exerciseThree();
    //exerciseFourth();
    return EXIT_SUCCESS;
}

