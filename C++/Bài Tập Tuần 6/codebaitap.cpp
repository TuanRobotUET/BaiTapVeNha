#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

struct Student {
    std::string id;
    std::string name;
    int age;
    float score;
};

class StudentManager {
private:
    std::vector<Student> students;

public:
    void clearScreen() {
        system("cls");
    }

    void displayMenu() {
        std::cout << CYAN << "=============================\n";
        std::cout << "  QUAN LY THONG TIN SINH VIEN\n";
        std::cout << "=============================\n" << RESET;
        std::cout << GREEN << "1. In thong tin sinh vien\n";
        std::cout << "2. Them sinh vien\n";
        std::cout << "3. Sua sinh vien\n";
        std::cout << "4. Xoa sinh vien\n";
        std::cout << "5. Tim kiem sinh vien\n";
        std::cout << "6. Sap xep sinh vien\n";
        std::cout << "7. Thong ke sinh vien\n";
        std::cout << "8. Luu thong tin xuong file\n";
        std::cout << "0. Thoat\n" << RESET;
    }

    void printStudents() {
        std::cout << BLUE << "+------+--------------------+-----+-------+\n";
        std::cout << "|  ID  |        Name        | Age | Score |\n";
        std::cout << "+------+--------------------+-----+-------+\n" << RESET;
        for (const auto& student : students) {
            std::cout << "| " << std::setw(4) << student.id << " | "
                      << std::setw(18) << student.name << " | "
                      << std::setw(3) << student.age << " | "
                      << std::setw(5) << student.score << " |\n";
        }
        std::cout << BLUE << "+------+--------------------+-----+-------+\n" << RESET;
    }

    void addStudent() {
        Student student;
        std::cout << YELLOW << "Nhap ID: " << RESET;
        std::cin >> student.id;
        std::cout << YELLOW << "Nhap ten: " << RESET;
        std::cin.ignore();
        std::getline(std::cin, student.name);
        std::cout << YELLOW << "Nhap tuoi: " << RESET;
        std::cin >> student.age;
        std::cout << YELLOW << "Nhap diem: " << RESET;
        std::cin >> student.score;
        students.push_back(student);
    }

    void editStudent() {
        std::string id;
        std::cout << YELLOW << "Nhap ID sinh vien can sua: " << RESET;
        std::cin >> id;
        for (auto& student : students) {
            if (student.id == id) {
                std::cout << YELLOW << "Nhap ten moi: " << RESET;
                std::cin.ignore();
                std::getline(std::cin, student.name);
                std::cout << YELLOW << "Nhap tuoi moi: " << RESET;
                std::cin >> student.age;
                std::cout << YELLOW << "Nhap diem moi: " << RESET;
                std::cin >> student.score;
                return;
            }
        }
        std::cout << RED << "Khong tim thay sinh vien voi ID: " << id << "\n" << RESET;
    }

    void deleteStudent() {
        std::string id;
        std::cout << YELLOW << "Nhap ID sinh vien can xoa: " << RESET;
        std::cin >> id;
        students.erase(std::remove_if(students.begin(), students.end(),
                                      [&id](const Student& student) { return student.id == id; }),
                       students.end());
    }

    void searchStudent() {
        std::string id;
        std::cout << YELLOW << "Nhap ID sinh vien can tim: " << RESET;
        std::cin >> id;
        for (const auto& student : students) {
            if (student.id == id) {
                std::cout << GREEN << "ID: " << student.id << "\n";
                std::cout << "Ten: " << student.name << "\n";
                std::cout << "Tuoi: " << student.age << "\n";
                std::cout << "Diem: " << student.score << "\n" << RESET;
                return;
            }
        }
        std::cout << RED << "Khong tim thay sinh vien voi ID: " << id << "\n" << RESET;
    }

    void sortStudents() {
        int choice;
        std::cout << YELLOW << "1. Sap xep theo ten\n";
        std::cout << "2. Sap xep theo diem\n";
        std::cout << "3. Sap xep theo tuoi\n" << RESET;
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::sort(students.begin(), students.end(),
                          [](const Student& a, const Student& b) { return a.name < b.name; });
                break;
            case 2:
                std::sort(students.begin(), students.end(),
                          [](const Student& a, const Student& b) { return a.score < b.score; });
                break;
            case 3:
                std::sort(students.begin(), students.end(),
                          [](const Student& a, const Student& b) { return a.age < b.age; });
                break;
            default:
                std::cout << RED << "Lua chon khong hop le\n" << RESET;
                break;
        }
    }

    void statistics() {
        if (students.empty()) {
            std::cout << RED << "Khong co sinh vien nao\n" << RESET;
            return;
        }
        float totalScore = 0;
        int countGood = 0;
        Student bestStudent = students[0];
        for (const auto& student : students) {
            totalScore += student.score;
            if (student.score >= 8) countGood++;
            if (student.score > bestStudent.score) bestStudent = student;
        }
        std::cout << GREEN << "Diem trung binh: " << totalScore / students.size() << "\n";
        std::cout << "Ti le % sinh vien kha gioi: " << (countGood * 100.0 / students.size()) << "%\n";
        std::cout << "Sinh vien tot nhat: " << bestStudent.name << " - Diem: " << bestStudent.score << "\n" << RESET;
    }

    void saveToFile() {
        std::ofstream file("students.txt");
        for (const auto& student : students) {
            file << student.id << "," << student.name << "," << student.age << "," << student.score << "\n";
        }
        file.close();
        std::cout << GREEN << "Da luu thong tin sinh vien xuong file students.txt\n" << RESET;
    }
};

int main() {
    StudentManager manager;
    int choice;
    do {
        manager.clearScreen();
        manager.displayMenu();
        std::cout << YELLOW << "Nhap lua chon: " << RESET;
        std::cin >> choice;
        manager.clearScreen();
        switch (choice) {
            case 1:
                manager.printStudents();
                break;
            case 2:
                manager.addStudent();
                break;
            case 3:
                manager.editStudent();
                break;
            case 4:
                manager.deleteStudent();
                break;
            case 5:
                manager.searchStudent();
                break;
            case 6:
                manager.sortStudents();
                break;
            case 7:
                manager.statistics();
                break;
            case 8:
                manager.saveToFile();
                break;
            case 0:
                std::cout << GREEN << "Thoat chuong trinh\n" << RESET;
                break;
            default:
                std::cout << RED << "Lua chon khong hop le\n" << RESET;
                break;
        }
        if (choice != 0) {
            std::cout << YELLOW << "Nhan phim bat ky de tiep tuc..." << RESET;
            std::cin.ignore();
            std::cin.get();
        }
    } while (choice != 0);

    return 0;
}