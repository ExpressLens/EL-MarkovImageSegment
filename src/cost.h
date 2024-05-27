//
//  cost.h
//  markov
//
//  Created by ixi on 16/12/14.
//
//

#ifndef __markov__cost__
#define __markov__cost__

#include <opencv2/opencv.hpp>
#include <armadillo>
#include <cmath>
#include <boost/filesystem.hpp>
#include "Settings.h"
#include "config.h"

class Cost
{
public:
    Cost();
    void init();
    double 