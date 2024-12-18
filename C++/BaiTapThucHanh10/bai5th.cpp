struct Student  {
    string ten;
    double gpa;
    
    Student(string _ten, double _gpa) {
        ten = _ten;
        gpa = _gpa;
    }

    string grade() {
        // your code goes here
    }
    
    void print() {
        // your code goes here
    }
};

Student get(int n) {
    string ten;
    double gpa;
    cin >> ten >> gpa;
    return Student(ten, gpa);
}