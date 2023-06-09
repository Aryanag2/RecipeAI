#include "recipe.hpp"
#include "recipe.cpp"

int main() {
    // Load the recipe dataset
    vector<vector<string>> dataset = loadDataset("recipes.csv");

    // Get user's pantry
    vector<string> pantry = {"flour", "sugar", "eggs"};

    // Generate recipe recommendations
    vector<vector<string>> recommendations = generateRecommendations(dataset, pantry);

    // Print the recommendations
    for (auto recipe : recommendations) {
        for (auto ingredient : recipe) {
            cout << ingredient << " ";
        }
        cout << endl;
    }

    return 0;
}

