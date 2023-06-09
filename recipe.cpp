#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream> 
#include <algorithm> 
#include "recipe.hpp" 

using namespace std;

// Load the recipe dataset
vector<vector<string>> loadDataset(string filename) {
    vector<vector<string>> dataset;
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            vector<string> recipe; 
            istringstream iss(line);
            string ingredient;
            while (getline(iss, ingredient, ',')) {
                recipe.push_back(ingredient);
            }
            dataset.push_back(recipe);
        }
        file.close();
    }
    return dataset;
}

// Generate recipe recommendations based on pantry ingredients
vector<vector<string>> generateRecommendations(vector<vector<string>> dataset, vector<string> pantry) {
    vector<vector<string>> recommendations;
    for (auto recipe : dataset) {
        if (includes(pantry.begin(), pantry.end(), recipe.begin(), recipe.end())) {
            recommendations.push_back(recipe);
        }
    }
    return recommendations;
}
