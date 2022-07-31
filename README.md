***ABOUT THE PROJECT:***

this project is for predicting flower classifications from the following flower attributes:
width, sepal length, sepal width, petal length.

    
***HOW TO RUN:***

to use this project, you need to have a csv file named classified.csv, which will have the above flower attributes in it, and the classification of the flower separated by commas.
the csv file should be in the same directory as this project.
there should be another csv file, named Unclassified.csv, which will have the flower attributes in it, but without the classification, so it will be used as the data to predict with the knn algorithm.

to run this project, you would need to give a number argument to the program, which will be the number of neighbors to use in the knn algorithm, this number must be lower than the total number of flowers in the program.
an example of running the program would be: a.out 5, which would run the algorithm with 5 neighbors. if you won't specify the number of neighbors, the program would run with 3 neighbors.
you can also give the path to a folder that contains the classified and Unclassified csv files (then you also have to give the number of neighbours as the first argument before the path), and note that if you give the path to a folder, you can't give a direct path to the csv files.
or you can give to arguments(then you also have to give the number of neighbours as the first argument before these 2 arguments), the first would be the path of the classified csv file, the second would be the path of the Unclassified csv file (note, if you choose this option your path would need to include the name of the csv files).

make sure that if you give path to one file, you also give the path to the other file, and if you give the path to a folder, it will contain both csv files.
also no matter which path you give, if you give some kind of path you'll have to give the number of kneighbours as the first argument.

you can also not give a path, if the csv files are in the same directory as the program.


***THE OUTPUT:***

the output of the program would be 3 csv files, one for each of the results of the knn algorithm, based on the following ways to measure distance: euclidian distance, manhattan distance, and chebyshev distance.
each output file would be named based on the name of the distance measure used, for example, if the distance measure used was euclidian distance, the file would be named euclidian_output.csv.


***THE ALGORITHM:***

the algorithm works, by reading the classified.csv file, and creating a database of the flowers in the file. then to predict every unpredicted flower with one of the distance functions, and a number of neighbours, it sorts the database using ***(change this to name of sort used)***, based on the distance to the flower we want to predict. then it takes the top n neighbours and takes the most common classification of them, and predicts the flower as the most common classification.

