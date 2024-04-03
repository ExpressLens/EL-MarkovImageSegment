//
//  config.h
//  markov
//
//  Created by ixi on 16/12/14.
//
//

#ifndef __markov__config__
#define __markov__config__

#include <opencv2/opencv.hpp>

#define NB_COLORS 9

class Config
{
public:
    // Eau, fond, fond relief, bat1, bat2, rouge vif, zone, texte, trait fin
    static cv::Vec3b colors[NB_COLORS];
    static constexpr double beta = 1.5;
    static constexpr double initi