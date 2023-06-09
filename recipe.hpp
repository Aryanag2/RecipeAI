#ifndef RECIPE_RECOMMENDER_H
#define RECIPE_RECOMMENDER_H

#include <vector>
#include <string>

// Load the recipe dataset
std::vector<std::vector<std::string>> loadDataset(std::string filename);

// Generate recipe recommendations based on pantry ingredients
std::vector<std::vector<std::string>> generateRecommendations(
    std::vector<std::vector<std::string>> dataset,
    std::vector<std::string> pantry
);

#endif // RECIPE_RECOMMENDER_H
