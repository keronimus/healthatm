#include <iostream>
using namespace std;

int main() {
    int bloodPressure;
    int sugarLevel;

    cout << "=== AI Health ATM ===" << endl;
    cout << "Enter your blood pressure (systolic): ";
    cin >> bloodPressure;

    cout << "Enter your blood sugar level (mg/dL): ";
    cin >> sugarLevel;

    cout << "\n--- Health Report ---" << endl;

    // Blood Pressure check
    if (bloodPressure < 90) {
        cout << "Blood Pressure: Low (Risk) - Please consult a doctor.\n";
    } else if (bloodPressure >= 90 && bloodPressure <= 120) {
        cout << "Blood Pressure: Normal - Keep maintaining a healthy lifestyle.\n";
    } else {
        cout << "Blood Pressure: High (Risk) - Monitor regularly and seek medical advice.\n";
    }

    // Blood Sugar check
    if (sugarLevel < 70) {
        cout << "Blood Sugar: Low (Hypoglycemia risk).\n";
    } else if (sugarLevel >= 70 && sugarLevel <= 120) {
        cout << "Blood Sugar: Normal range.\n";
    } else {
        cout << "Blood Sugar: High (Hyperglycemia risk).\n";
    }

    cout << "\nThank you for using AI Health ATM.\n";
    return 0;
}
