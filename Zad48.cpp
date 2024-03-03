#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string surname;
    float numOfQuestions{};
    float numOfCorrectAnswers{};

public:
    Student();

    string studentName() const {
        return name + " " + surname;
    }

    float percentOfCorrectAnswers() const {
        if (numOfQuestions == 0) {
            return 0;
        }
        return (numOfCorrectAnswers * 100) / numOfQuestions;
    }
};

Student::Student() {
    cout << "Enter name:";
    cin >> name;
    cout << "Enter surname:";
    cin >> surname;
    cout << "Enter number of questions:";
    cin >> numOfQuestions;
    cout << "Enter number of correct answers:";
    cin >> numOfCorrectAnswers;
}

int main() {
    const Student object;
    cout << "\n" << object.studentName() << " scored " << object.percentOfCorrectAnswers() << "% on the exam." << endl;
}
