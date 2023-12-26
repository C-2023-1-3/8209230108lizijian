#include <iostream>
using namespace std;
class Student {
private:
    int Id;
    int score;
public:
    void addstudent(int id, int sc) {
        Id = id; score = sc;
    }
    int getId() {
        return Id;
    }
    int getScore() {
        return score;
    }
    ~Student() {};
};
int max(Student*students[], int size) {
    int maxScore = 0;
    int maxStudent = 0;
    for (int i = 0; i < size; i++) {
        if (students[i]->getScore() > maxScore) {
            maxScore = students[i]->getScore();
            maxStudent = i;
        }
    }
    return students[maxStudent]->getId();
}

int main() {
    Student s[5];
    int id, sc;
    for (int i = 0; i < 5; i++) {
        cin >> id >> sc;
        s[i].addstudent(id, sc);
    }
    Student* students[] = { &s[0], &s[1],&s[2],&s[3], &s[4] };
    int maxStudentId = max(students,5);
    cout << "最高成绩的学生学号：" << maxStudentId << endl;
    return 0;
}