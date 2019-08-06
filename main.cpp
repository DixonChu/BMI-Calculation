#include <iostream>
using namespace std;

double height() {
    double user_height;
    cout << "Please enter your height(cm): ";
    cin >> user_height;
    cout << endl;
    return user_height / 100; // Divided by 100 to change it to metre
}

double weight() {
    double user_weight;
    cout << "Please enter your weight(kg): ";
    cin >> user_weight;
    cout << endl;
    return user_weight;
}

double total_bmi() {
    double user_bmi;
    double u_height = height();
    double u_weight = weight();

    // BMI Calculation
    user_bmi = u_weight / (u_height * u_height);

    cout << "Your BMI is: " << user_bmi << endl;
    return user_bmi;
}

double calculate_bmi() {
    double bmi = total_bmi();

    if(bmi <= 18.4) {
        cout << "Underweight Zone";
    } else if(bmi <= 24.9) {
        cout << "Normal Weight Zone";
    } else if(bmi <= 29.9) {
        cout << "Overweight Zone";
    } else if(bmi >= 30.0) {
        cout << "Obesity Zone";
    }

    return bmi;
}



int main() {
    cout << "===Body Mass Index Calculation===" << endl;
    cout << "*Please only enter number" << endl;
    calculate_bmi();
}