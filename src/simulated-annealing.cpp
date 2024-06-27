
//
//  simulated-annealing.cpp
//  markov
//
//  Created by ixi on 15/12/14.
//
//

#include "simulated-annealing.h"

void simulated_annealing(cv::Mat& img)
{
    std::mt19937 eng(time(NULL));
    std::uniform_int_distribution<uint32_t> uint_dist;
    std::uniform_real_distribution<double> ureal_dist;

    double delta_global_enery;
    double delta;
    double temperature = Config::initial_temperature;
    int new_classe;
    Cost c;

    cv::Mat prob(img.size(), CV_8UC1, cv::Scalar(255));
    cv::Mat output(img.size(), CV_8UC3, cv::Scalar(255, 255, 255));

    cv::cvtColor(img, img, CV_RGB2Luv);
