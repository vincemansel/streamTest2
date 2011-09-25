//
//  template.cpp
//  template
//
//  Created by Vince Mansel on 9/25/11.
//  Copyright 2011 Wave Ocean Networks. All rights reserved.
//

//
//  average.cpp
//  lecture-2
//
//  Created by Vince Mansel on 9/24/11.
//  Copyright 2011 Wave Ocean Networks. All rights reserved.
//

#include <iostream>
#include "genlib.h"
#include "simpio.h"

const int SENTINEL = -1;

double GetScoresAndAverage(int sentinel = -1);

int main() 
{
    
    double average = GetScoresAndAverage();
    cout << "The average is " << average << "." << endl;
    return 0;
}

/* Function: GetScoresAndAverage
 * Usage: avg = GetScoresAndAverage(10);
 * -------------------------------------
 * This function prompts the user for a set of values
 * and returns the average.
 */
double GetScoresAndAverage(int sentinel)
{
    cout << "GetScoresAndAverage: IN " << endl;
    int sum = 0;
    int count = 0;
    cout << "Next Score? ";
    int value;
    while ((value = GetInteger()) != sentinel) {
        count++;
        sum += value;
        cout << "Next Score? ";
    }
    cout << "GetScoresAndAverage: OUT " << endl;
    return double(sum)/count;
}

