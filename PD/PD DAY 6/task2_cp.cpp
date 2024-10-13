#include <iostream>
using namespace std;

float calculateaverage(float englishmarks, float mathsmarks, float chemistrymarks, float socialsciencemarks, float biologymarks)
{
    float gotmarks = englishmarks + mathsmarks + chemistrymarks + socialsciencemarks + biologymarks;
    return (gotmarks) / 5;
}
string calculategrade(float average)
{
    string grade;
    float percentage = ((average * 5) / 500) * 100;
    if (percentage < 40)
        grade = "F";
    else if ((percentage >= 40) && (percentage < 50))
        grade = "D";
    else if ((percentage >= 50) && (percentage < 60))
        grade = "C";
    else if ((percentage >= 60) && (percentage < 70))
        grade = "B";
    else if ((percentage >= 70) && (percentage < 80))
        grade = "B+";
    else if ((percentage >= 80) && (percentage < 90))
        grade = "A";
    else if ((percentage >= 90) && (percentage < 100))
        grade = "A+";
    return grade;
}
int main()
{
    string name;
    float average, percentage;
    float englishmarks, mathsmarks, chemistrymarks, socialsciencemarks, biologymarks, obtainedmarks;
    cout << "Enter student name:";
    cin >> name;
    cout << "Enter marks of english:";
    cin >> englishmarks;
    cout << "Enter marks of maths:";
    cin >> mathsmarks;
    cout << "Enter marks of chemistry:";
    cin >> chemistrymarks;
    cout << "Enter marks of socila science:";
    cin >> socialsciencemarks;
    cout << "Enter marks of biology:";
    cin >> biologymarks;
    obtainedmarks = englishmarks + mathsmarks + chemistrymarks + socialsciencemarks + biologymarks;
    percentage = (obtainedmarks / 500) * 100;
    average = calculateaverage(englishmarks, mathsmarks, chemistrymarks, socialsciencemarks, biologymarks);
    cout << "Student name: " << name << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << calculategrade(average);
}