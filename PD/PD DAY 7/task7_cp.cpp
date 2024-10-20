#include <iostream>
using namespace std;

int main()
{
    int days, doctors = 7, patients, treated = 0, untreated = 0;
    cout << "Enter Number of days you visited Hospital:";
    cin >> days;
    for (int i = 1; i <= days; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ":";
        cin >> patients;
        if (i % 3 == 0)
            doctors++;
        if (patients <= doctors)
        {
            treated = treated + patients;
            untreated = untreated + 0;
        }
        else
        {
            treated = treated + doctors;
            untreated = untreated + (patients - doctors);
        }
    }
    cout << "Treated Patients:" << treated << endl;
    cout << "Untreated Patients:" << untreated << endl;
    return 0;
}