//
//  main.cpp
//  Assign1Q1
//
//  Created by Atalie Garcia on 9/3/18.
//  Copyright © 2018 Atalie Garcia. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


//declaring a global vector called sInd for stability index array

std:: vector<int> stabInd;


//function prototypes
int sumLeft(int i);
int sumRight(int i);
void stableInd(int left, int right);


int main()
{
    stabInd.push_back(2);
    stabInd.push_back(-2);
    stabInd.push_back(1);
    stabInd.push_back(-2);
    stabInd.push_back(2);
    int left = sumLeft(2);
    int right = sumRight(2);
    stableInd(left, right);
}

int sumLeft(int i)
{
    int sum = 0;
    while(i > 0)
    {
        i--;
        int value = stabInd[i];
        sum = value + sum;
    }
    return sum;
}

int sumRight(int i)
{
    int sum = 0;
    while(i < stabInd.size() - 1)
    {
        i++;
        int value = stabInd[i];
        sum = value + sum;
    }
    return sum;
}

void stableInd(int left, int right)
{
    if (left == right)
    {
        cout << "You have a stability index!"<< endl;
    }
    else
    {
        cout <<"No stability index here!" <<endl;
    }
}













