#include <iostream>
using namespace std;

int main() {
	const int numcandidates = 3;
	int mathscore[numcandidates];
	int englishscore[numcandidates];

	for (int i = 0; i < numcandidates; i++) {
		cout << "enter a name :";
		cin >>_exception::name ;
		cout << "input math score for candidate" << i + 1 << ":";
		cin >> mathscore[i];
		cout << "input english score for candidate" << i + 1 << ":";
		cin >> englishscore[i];
	}
	float avgscore[numcandidates];
	for (int i = 0; i < numcandidates; i++) {
		avgscore[i] = (mathscore[i] + englishscore[i]) / 2.0;
	}

	bool isAccepted[numcandidates];
	for (int i = 0; i < numcandidates; i++) {
		if (avgscore[i] >= 70 || mathscore[i] >= 80) {
			isAccepted[i] = true;
		}
		else {
			isAccepted[i] = false;
		}
	}

	for (int i = 0; i < numcandidates; i++) {
		cout << "candidte" << i + 1 << ":";
		if (isAccepted[i]) {
			cout << "Accepted" << endl;
		}
		else {
			cout << "rejected" << endl;
		}
	}

	return 0;

}




