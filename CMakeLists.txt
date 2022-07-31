
cmake_minimum_required(VERSION 3.22)
project(Ass_one)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Ass_one
        distances/chebyshevDistance.cpp
        distances/chebyshevDistance.h
        dataspace/dataSpace.cpp
        dataspace/dataSpace.h
        dataspace/dataSpaceCreator.cpp
        dataspace/dataSpaceCreator.h
        distances/distance.h
        distances/euclideanDistance.cpp
        distances/euclideanDistance.h
        flower/flower.cpp
        flower/flower.h
        flower/flowerPoint.cpp
        flower/flowerPoint.h
        flower/flowerReader.cpp
        flower/flowerReader.h
        flower/flowerType.h
        flower/flowerType.cpp
        distances/manhattanDistance.cpp
        distances/manhattanDistance.h
        main.cpp
        classifier.cpp
        classifier.h
        flower/flowerSorter.h
        flower/flowerSorter.cpp
        )