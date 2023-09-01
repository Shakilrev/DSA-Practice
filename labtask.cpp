
#include <iostream>
#include <string>
using namespace std;

int evaluateExpression(const string& expression) {
    int result = expression[0] - '0';

    for (size_t i = 1; i < expression.length(); i += 2) {
        char op = expression[i];
        int operand = expression[i + 1] - '0';

        if (op == '@') {
            result += operand;
        } else if (op == '#') {
            result -= operand;
        } else if (op == '&') {
            result *= operand;
        } else if (op == '$') {
            result /= operand;
        }
    }

    return result;
}

int main() {
    string inputExpression = "5&6#3@4";
    int result = evaluateExpression(inputExpression);
    cout << "Output: " << result << endl;

    return 0;
}

