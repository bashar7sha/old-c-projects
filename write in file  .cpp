#include <iostream>
#include <fstream>
using namespace std;

int main () {

    int n = 10;
    int m = 6;
    string ID [n];
    string name [n];
    double grades [n][m];

    ofstream myfile ("Transcript.txt");



    for(int i =0; i < n; i++){
    	cout <<"Enter name of student" << i+1 <<": ";
    	cin >> name[i];
    	cout <<"\n";
        cout << "Enter id for student " << i+1 << ": ";
        cin >> ID[i];
        for (int j = 0; j < m-1; j++) {
            cout << "Enter Exam " << j+1 << ": ";
            cin >> grades[i][j];
        }
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m-1; j++)
            grades [i][m-1] = grades [i][m-1] + grades[i][j];
        grades [i][m-1] = grades [i][m-1] / (m-1);
    }



    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "Student name " << name[i] << " " << "\n";
        cout << "Student ID " << ID[i] << " ";
        for (int j = 0; j < m-1; j++)
            cout << "Exam " << j+1 << ": " << grades [i][j] << " ";
        cout << "Average is: " << grades [i][m-1] << " ";
        cout << "\n";
    }



    for (int i = 0; i < n; i++) {
    	myfile << name[i] << " ";
        myfile << ID[i] << " ";
        for (int j = 0; j < m; j++)
            myfile << grades[i][j] << " ";
        myfile << "\n";
    }
    myfile.close();



    ifstream infile;
    infile.open("Transcript.txt");

    for (int i = 0; i < n; i++) {
    	 infile >> name[i];
        infile >> ID[i];
        for (int j = 0; j < m; j++)
            infile >> grades[i][j];
    }
    cout << "\n";



    for (int i = 0; i < n; i++) {
    	cout << "Student name " << name[i] << " "<<"\n";
        cout << "Student ID " << ID[i] << " ";
        for (int j = 0; j < m-1; j++)
            cout << "Exam " << j+1 << ": " << grades [i][j] << " ";
        cout << "Average is: " << grades [i][m-1] << " ";
        cout << "\n";
    }
  return 0;
}
