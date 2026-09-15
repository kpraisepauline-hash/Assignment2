#include <iostream>
// This program grades multiple-choice questions for 8 students, each with 10 questions.
// The correct answers are stored in a key array, and each student's answers are stored in a 2D array.
// The program compares each student's answers to the key and counts the number of correct answers.

int main() {
    const char answers[8][10] = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
    };

    const char key[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};
// Loop through each student and count the number of correct answers
    for (int student = 0; student < 8; ++student) {
        int correct = 0;

        for (int question = 0; question < 10; ++question) {
            if (answers[student][question] == key[question]) {
                ++correct;
            }
        }

        std::cout << "Student " << student << ": " << correct
                  << " correct answers\n";
    }

    return 0;
}