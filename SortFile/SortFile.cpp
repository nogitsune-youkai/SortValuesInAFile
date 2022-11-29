#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int valuesForCompare = {}; // this variable is used as a temporary storage for our values from a file, later we will write all values from that variable into our vector
    std::vector<int> vectorValues; //vector in which we will write all values from our "valuesForCompare" variable for comparison
    std::ifstream file;
    file.open("sort1.txt"); // paste your file name here
    if (file.is_open()) {
        while (file >> valuesForCompare)
        {
            vectorValues.push_back(valuesForCompare); // initializing vector with values
        }
    }

    std::sort(vectorValues.begin(), vectorValues.end()); // sorting values in a file
    std::cout 
    << vectorValues.at(Enter your position) <<std::endl          // printing value at specific position
    << vectorValues.at(Enter your position) << std::endl
    << vectorValues.at(Enter your position) << std::endl;

    file.close();
}

