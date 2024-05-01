
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

        for (int i = 0; i < image.rows; ++i)
        {
            for (int j = 0; j < image.cols; ++j)
            {
                sum += image.at<cv::Vec3b>(i, j)[k];
                sum2 += image.at<cv::Vec3b>(i, j)[k] *
                        image.at<cv::Vec3b>(i, j)[k];
            }
        }

        mean_[classe](k) = sum / (image.cols * image.rows);
        covariance_[classe](k, k) = (sum2 - (sum * sum) / (image.cols * image.rows))
                                    / (image.cols * image.rows);
    }
}