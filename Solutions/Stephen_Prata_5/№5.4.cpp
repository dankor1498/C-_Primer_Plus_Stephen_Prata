#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    double dafna = 1500, dafnaproz, kleo = 1500;
	int i = 1;
	dafnaproz = 0.1*dafna;
	dafna += dafnaproz;
	kleo += (0.05*kleo);
	printf("%2d-st year Dafna --- %f   Kleo --- %f\n", i, dafna, kleo);
	while (kleo <= dafna) {
		dafna += dafnaproz;
		kleo += (0.05*kleo);
		i++;
		printf("%2d-st year Dafna --- %f   Kleo --- %f\n", i, dafna, kleo);
	}
	
	cin.get();
    return 0;
}
	
