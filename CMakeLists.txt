cmake_minimum_required(VERSION 3.22)
project(Ass_one)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Ass_one
        chebyshevDistance.cpp
        chebyshevDistance.h
        dataSpace.cpp
        dataSpace.h
        dataSpaceCreator.cpp
        dataSpaceCreator.h
        distance.h
        euclideanDistance.cpp
        euclideanDistance.h
        flower.cpp
        flower.h
        flowerPoint.cpp
        flowerPoint.h
        flowerReader.cpp
        flowerReader.h
        flowerType.h
        flowerType.cpp
        manhattanDistance.cpp
        manhattanDistance.h
        main.cpp
        classifier.cpp
        classifier.h
        )
