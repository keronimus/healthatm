#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Thresholds for health ranges
    const int LOW_BP = 90, HIGH_BP = 140;
    const double LOW_SUGAR = 4.0, HIGH_SUGAR = 7.0;
    const int LOW_HR = 60, HIGH_HR = 100;
    const double LOW_TEMP = 36.0, HIGH_TEMP = 37.5;

    int bloodPressure, heartRate, age;
    double sugarLevel, temperature, weight, height, bmi;
    int score = 0; // Health score counter

    cout << "=======================\n";
    cout << "   AI Health ATM \n";
    cout << "=======================\n";

    // Input: Age
    cout << "Enter your age: ";
    cin >> age;

    if (cin.fail() || age <= 0) {
        cout << "Error: Invalid age entered.\n";
        return 1;
    }

    // Input: Blood Pressure
    cout << "Enter systolic blood pressure (mmHg): ";
    cin >> bloodPressure;
    if (cin.fail() || bloodPressure <= 0) {
        cout << "Error: Invalid blood pressure.\n";
        return 1;
    }

    // Input: Sugar Level
    cout << "Enter sugar level (mmol/L): ";
    cin >> sugarLevel;
    if (cin.fail() || sugarLevel <= 0) {
        cout << "Error: Invalid sugar level.\n";
        return 1;
    }

    // Input: Heart Rate
    cout << "Enter heart rate (BPM): ";
    cin >> heartRate;
    if (cin.fail() || heartRate <= 0) {
        cout << "Error: Invalid heart rate.\n";
        return 1;
    }

    // Input: Body Temperature
    cout << "Enter body temperature (Celsius): ";
    cin >> temperature;
    if (cin.fail() || temperature <= 0) {
        cout << "Error: Invalid temperature.\n";
        return 1;
    }

    // Input: BMI (Weight & Height)
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;
    if (cin.fail() || weight <= 0 || height <= 0) {
        cout << "Error: Invalid weight or height.\n";
        return 1;
    }
    bmi = weight / (height * height);

    cout << "\n--- Health Report ---\n";

    // Evaluate Blood Pressure
    if (bloodPressure < LOW_BP) {
        cout << "Blood Pressure: LOW (" << bloodPressure << " mmHg)\n";
    } else if (bloodPressure > HIGH_BP) {
        cout << "Blood Pressure: HIGH (" << bloodPressure << " mmHg)\n";
    } else {
        cout << "Blood Pressure: NORMAL (" << bloodPressure << " mmHg)\n";
        score++;
    }

    // Evaluate Sugar Level
    if (sugarLevel < LOW_SUGAR) {
        cout << "Sugar Level: LOW (" << sugarLevel << " mmol/L)\n";
    } else if (sugarLevel > HIGH_SUGAR) {
        cout << "Sugar Level: HIGH (" << sugarLevel << " mmol/L)\n";
    } else {
        cout << "Sugar Level: NORMAL (" << sugarLevel << " mmol/L)\n";
        score++;
    }

    // Evaluate Heart Rate
    if (heartRate < LOW_HR) {
        cout << "Heart Rate: LOW (" << heartRate << " BPM)\n";
    } else if (heartRate > HIGH_HR) {
        cout << "Heart Rate: HIGH (" << heartRate << " BPM)\n";
    } else {
        cout << "Heart Rate: NORMAL (" << heartRate << " BPM)\n";
        score++;
    }

    // Evaluate Body Temperature
    if (temperature < LOW_TEMP) {
        cout << "Temperature: LOW (" << temperature << " degree celcius)\n";
    } else if (temperature > HIGH_TEMP) {
        cout << "Temperature: HIGH (" << temperature << " degree celcius)\n";
    } else {
        cout << "Temperature: NORMAL (" << temperature << " degree celcius)\n";
        score++;
    }

    // Evaluate BMI
    cout << "BMI: " << bmi << " --> ";
    if (bmi < 18.5) {
        cout << "Underweight\n";
    } else if (bmi < 25.0) {
        cout << "Normal\n";
        score++;
    } else if (bmi < 30.0) {
        cout << "Overweight\n";
    } else {
        cout << "Obese\n";
    }

    // Final Health Recommendation
    cout << "\n--- Final Recommendation ---\n";
    if (score == 5) {
        cout << " Excellent! All readings are within healthy ranges.\n";
    } else if (score >= 3) {
        cout << " Moderate Risk: Some values abnormal. Monitor closely.\n";
    } else {
        cout << " High Risk: Multiple abnormalities. Please consult a doctor.\n";
    }

    // Age risk adjustment
    if (age > 50 && score < 5) {
        cout << "Additional Note: Higher risk due to age. Regular check-ups advised.\n";
    }

    cout << "=====================================\n";
    cout << "   Thank you for using AI Health ATM  \n";
    cout << "=====================================\n";

    return 0;
}