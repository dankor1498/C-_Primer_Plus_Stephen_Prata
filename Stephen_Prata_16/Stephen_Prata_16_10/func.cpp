#include "pch.h"
#include "func.h"

bool operator<(const sReview & r1, const sReview & r2)
{
	if (r1->title < r2->title)
		return true;
	return false;
}

bool worseThan(const sReview & r1, const sReview & r2)
{
	if (r1->rating < r2->rating)
		return true;
	return false;
}

bool worseThan_2(const sReview & r1, const sReview & r2)
{
	if (r1->price < r2->price)
		return true;
	return false;
}

bool FillReview(Review *rr)
{
	cout << "������� �������� ����� (quit ��� ������): ";
	getline(cin, rr->title);
	if (rr->title == "quit")
		return false;
	cout << "������� ������� �����: ";
	cin >> rr->rating;
	if (!cin)
		return false;
	cout << "������� �����: ";
	cin >> rr->price;
	if (!cin)
		return false;
	while (cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const sReview & rr)
{
	cout << rr->rating << "\t" << rr->title << "\t" << rr->price << endl;
}