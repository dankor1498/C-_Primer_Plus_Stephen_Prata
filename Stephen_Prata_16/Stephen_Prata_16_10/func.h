#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>
#include <Windows.h>

using namespace std;

const vector<int> m{ 1, 2, 3, 4, 5, 6 };

struct Review {
	string title;
	int rating;
	int price;
};

typedef shared_ptr<Review> sReview;

bool operator<(const sReview & r1, const sReview & r2);
bool worseThan(const sReview & r1, const sReview & r2);
bool worseThan_2(const sReview & r1, const sReview & r2);
bool FillReview(Review *rr);
void ShowReview(const sReview & rr);

