#include <iostream>
using namespace std;

int main() {
    int scores[] = {96, 94, 80, 82, 68};
    int numScores = sizeof(scores) / sizeof(scores[0]);
    int totalScore = 0;
    int maxScore = 0;

    for (int i = 0;i < numScores;i++) {
        totalScore += scores[i];
        if (scores[i] > maxScore) {
            maxScore = scores[i];
        }
    }

    double average = totalScore / numScores;
    cout << "Average: " << average << '\n';
    cout << "Top Score: " << maxScore << '\n';

}
