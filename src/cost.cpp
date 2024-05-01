
//
//  cost.cpp
//  markov
//
//  Created by ixi on 16/12/14.
//
//

#include "cost.h"

Cost::Cost()
{
    for (int i = 0; i < NB_COLORS; ++i)
    {
        covariance_[i].zeros();
        inv_covariance_[i].zeros();
    }
}

void Cost::compute_mean_variance_(cv::Mat& image, int classe)
{
    double sum;
    double sum2;

    for (int k = 0; k < 3; ++k)
    {
        sum = 0;
        sum2 = 0;