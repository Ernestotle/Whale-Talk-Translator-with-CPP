#include <iostream>
#include <vector>
#include <string>

int main() {

    // Declare a string
    std::string input = "turpentine and turtles";
    
    // Create a vowels vector and a result vector
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    // Create a for loop
    for (int i = 0; i < input.size(); i++) {
        // Double the "e"s and "u"s
        if (input[i] == 'e' || input[i] == 'u') {
            result.push_back(input[i]);
        }

        for (int j = 0; j < vowels.size(); j++) {

            if (input[i] == vowels[j]){
                result.push_back(vowels[j]);

            }

        }

    }


    // Observe the results
    for (int k = 0; k < result.size(); k++) {
        std::cout << result[k];
    }

}