#include <iostream>
#include<string>
using namespace std;

/* Addition method takes two numbers
 * Returns the total result
*/
int addition (int a, int b){
  int result;
  result = a + b;
  return result;
}

/* subtraction method takes two numbers
 * Returns the difference result
*/
int subtraction (int a, int b){
  int result;
  result = a - b;
  return result;
}

/* multiplication method takes two numbers
 * Returns the result
*/
int multiplication (int a, int b){
  int result;
  result = a * b;
  return result;
}


/* division method takes two numbers
 * Returns the result
*/
int division (int a, int b){
  int result;
  result = a / b;
  return result;
}


int take_input(string s) {
    int result = 0;

    cout << s << endl;
    cin >> result;

    while(cin.fail()) {
        cout << s << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> result;
    }
    return result;
}

int main() {


    string message("Please type 1 for Addition\ntype 2 for Subtraction\ntype 3 for Multiplication\ntype 4 for Division\ntype 5 to Exit");
    cout << "Welcome to simple calculator" << endl;

    int input = 0;

    while ( input != 5 ){


        input = take_input(message);

        int first_num = 0;
        int second_num = 0;
        int result = 0;

        string first_str = "Please enter the first number";
        string second_str = "Please enter the second number";

        switch (input) {
            case 1: {

                first_num = take_input(first_str);

                second_num = take_input(second_str);

                result = addition(first_num, second_num);

                cout << first_num << " + " << second_num << " = " << result << endl << endl;

                break;
            }
            case 2: {

                first_num = take_input(first_str);

                second_num = take_input(second_str);

                result = subtraction(first_num, second_num);

                cout << first_num << " - " << second_num << " = " << result << endl << endl;

                break;
            }
            case 3: {
                first_num = take_input(first_str);

                second_num = take_input(second_str);

                result = multiplication(first_num, second_num);

                cout << first_num << " * " << second_num << " = " << result << endl << endl;

                break;
            }
            case 4: {
                first_num = take_input(first_str);

                second_num = take_input(second_str);

                result = division(first_num, second_num);

                cout << first_num << " / " << second_num << " = " << result << endl << endl;

                break;
            }
            default: { break; }
        }
    }

    return 0;
}
