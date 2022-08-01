# Flower Classifier

## About The Project

Our project predicts flower classifications using the KNN algorithm with different distance metrics.
The attributes with which we defined a flower were: width, sepal length, sepal width, petal length. 
In addition, each flower has a type. The types are:
 - Iris-setosa
 - Iris-versicolor
 - Iris-virginica


## Getting Started

### 1) Prerequisites

This project requires CMake (3.16 or above) in order to function properly. 
To install CMake, follow the instructions [here](https://cmake.org/install/). In addition, a cpp compiler thats supports c++11 is required.

### 2) Install And Run Project

Firstly, clone the project from the GitHub repository:

        git clone 'https://github.com/yuvalgrofman/Ass-one'

Then, to run the project execute the following commands (in the terminal):

        mkdir -p build && cd build
        cmake ..
        make -j && make Ass-one <arg1> <arg2> <arg3>

Note that all three arguments are optional. 
The first argument is the k value used for the KNN algorithm.
The second and third arguments are the file paths to the classified.csv and Unclassified.csv files. 

If the k value is not specified, the default value of k is 3.
If the classified.csv and Unclassified.csv file paths are not specified, the default values are:
 - classified.csv: classified.csv
 - Unclassified.csv: Unclassified.csv

Please note that if the k value is not given the file paths must also not be given.

### 3) Set .csv Files


This project relies on two .csv files to properly function.
1. classified.csv - contains the data of classified flowers used for the KNN algorithm.

This file contains the following columns (separated by a comma):

 - width - the width of the flower
 - sepal length - the length of the flower's sepal
 - sepal width - the width of the flower's sepal
 - petal length - the length of the flower's petal
 - type - the type of the flower

2. Unclassified.csv - contains the data of unclassified flowers.

This file contains the following columns (separated by a comma):

 - width - the width of the flower
 - sepal length - the length of the flower's sepal
 - sepal width - the width of the flower's sepal
 - petal length - the length of the flower's petal

Both files should be placed in the same directory as the project.
By default, both files will already be placed in the project directory, but the user can change these files.


## Output

The output of the program would be 3 csv files, one for each of the results of the KNN algorithm, based on the following ways to distance metrics:
 1. [Euclidean distance](https://en.wikipedia.org/wiki/Euclidean_distance)
 2. [Manhattan distance](https://en.wikipedia.org/wiki/Taxicab_geometry)
 3. [Chebyshev distance](https://en.wikipedia.org/wiki/Chebyshev_distance)

Each file is named according to the distance metric used.
For example, the file named "euclidean_distance.csv" contains the results of the KNN algorithm using the Euclidean distance metric.


## Algorithm

The algorithm works, by reading the classified.csv file thus creating a database of flowers.
Then it predicts every unpredicted flower using one of the distance functions, and a specified number of neighbours.
Subsequently, it sorts the database using merge sort, from closest to farthest (by distance).
Finally, it retrieves the k closest neighbours, finds their most common classification and returns aforementioned classification as the "predicted type".

## Authors

[Yuval Grofman](https://github.com/yuvalgrofman)

[Jonathan Moiseyev](https://github.com/OldRimStalker)