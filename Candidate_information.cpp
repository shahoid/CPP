#include <iostream>
#include <string>

using namespace std;

class Candidate {
private:
    string name;
    string position;
    int age;

public:

    Candidate(string candidateName, string candidatePosition, int candidateAge) {
        name = candidateName;
        position = candidatePosition;
        age = candidateAge;
    }

    
    void displayCandidate() {
        cout << "Name: " << name << ", Position: " << position << ", Age: " << age << endl;
    }
};

int main() {
    
    Candidate candidate1("Malik", "President", 45);
    Candidate candidate2("Rahul", "Vice President", 40);
    Candidate candidate3("Ajay", "Treasurer", 35);

    cout << "Candidates:" << endl;
    candidate1.displayCandidate();
    candidate2.displayCandidate();
    candidate3.displayCandidate();

    return 0;
}
