#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            int v = nums[i];
            int x = target - v;
            if (m.count(x)){
                return {m[x], i};
            }
            m[v] = i;
        }
        return {};
    }
};

int sum_recur(int k) {
    if (k > 0) {
        return k + sum_recur(k - 1);
    } else {
        return 0;
    }
}

void myFunction(string fname = "Ken") {
    cout << fname <<" just got executed!\n";
}

void myFunction1(int myNumbers[5]){
    for(int i = 0; i < 5; i++){
        cout << myNumbers[i] << ", ";
    }
}

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int FunctionSum(int num1, int num2){
    return num1 + num2;
}

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

struct car_str {
    string brand;
    string model;
    int year;
};

int main(){
    // Comments Output
    cout << "Hello World ! \n";                     // Hello World !
    cout << "I am learning C++ \n";                 // I am learning C++

    // Variables
    int myNum = 15, myNum1 = 64;
    double myFloatNum = 5.99;
    char myLetter = 'D';
    string myText = "Hello";
    bool myBoolean1 = true;
    bool myBoolean2 = false;
    cout << myNum << "\n";                          // 15
    cout << myFloatNum << "\n";                     // 5.99
    cout << myLetter << "\n";                       // D
    cout << myText << "\n";                         // Hello
    cout << myBoolean1 << "\n";                     // 1
    cout << myBoolean2 << "\n";                     // 0
    cout << myNum + myFloatNum << "\n";             // 20.99
    cout << myNum + myNum1 << "\n";                 // 79
    cout << max(myNum, myNum1) << "\n";             // 64
    cout << min(myNum, myNum1) << "\n";             // 15
    cout << sqrt(myNum1) << "\n";                   // 8
    cout << round(5.1) << "\n";                     // 5 
    cout << round(2.6) << "\n";                     // 3
    
    // Constants
    const int myConstant = 15;
    const float PI = 3.14;
    // Will get error, because const is read-only variable
    // myConstant will always be 15 
    // myConstant = 10;
    cout << myConstant << "\n";                     // 15
    cout << PI << "\n";                             // 3.14

    // User Input
    int x, y, sum;
    cout << "Type a number : ";                     // Type a number : 
    cin >> x;                                       // (type a number)
    cin >> y;                                       // (type a number)
    cout << (x > y) << "\n";                        // (0 or 1)
    sum = x + y;
    cout << "\nSum is : " << sum << "\n";           // Sum is : (x + y)

    // Characters
    char a = 65, b = 66, c = 67;
    cout << a << "  " << b << "  " << c << "\n";    // A  B  C

    // Strings
    string firstName = "John ";
    string lastName = "Do";
    string fullName1 = firstName + lastName;        
    cout << fullName1 << "\n";                      // John Do
    string fullName2 = firstName.append(lastName);  
    cout << fullName2 << "\n";                      // John Do
    string fullName3 = firstName + lastName;
    cout << fullName3 << "\n";                      // John DoDo
    cout << "The length of the fullName3 string is : " << fullName3.size() << "\n";
                                                    // The length of the fullName3 string is : 9
    cout << fullName3[0] << "\n";                   // J
    fullName3[0] = 'K';
    cout << fullName3 << "\n";                      // Kohn DoDo

    string name;
    cout << "Type your name : ";                    // Type your name
    cin >> name;                                    // (name)
    cout << "Your name is : " << name << "\n";      // Your name is : (name)

    // Conditions
    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening.\n";                  // Good evening.
    }

    // Switch
    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";                     // Thursday
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }
    cout << "\n";

    // While
    int i = 0;
    while (i < 5) {
        cout << i << "\n";                          // 0    
                                                    // 1  
                                                    // 2
                                                    // 3
                                                    // 4
        i++;
    }

    // Do While
    int j = 0;
    do {
        cout << j << "\n";                          // 0
                                                    // 1
                                                    // 2
        j++;
    }
    while (j < 3);

    // For loop
    for (int i = 1; i <= 2; i = i + 1) {
        cout << "Outer: " << i << "\n";
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n";
        }
    }
                                                    // Outer: 1
                                                    //  Inner: 1
                                                    //  Inner: 2
                                                    //  Inner: 3
                                                    // Outer: 2
                                                    //  Inner: 1
                                                    //  Inner: 2
                                                    //  Inner: 3

    int myNumbers[3] = {10, 20, 30};
    for (int i : myNumbers) {
        cout << i << "\n";                          // 10
                                                    // 20
                                                    // 30
    }
    cout << sizeof(myNumbers) / sizeof(int) << "\n";// 3

    // Break
    for (int i = 0; i < 10; i++) {
        if (i == 2) {
            break;
        }
        cout << i << "\n";                          // 0
                                                    // 1
    }

    // Continue
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            continue;
        }
        cout << i << "\n";                          // 0
                                                    // 1
                                                    // 3
                                                    // 4
    }

    // Arrays
    string car[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << car[0] << "\n";                         // Volvo

    // Arrays and Loops
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars[i] << "\n";      // 0 = Volvo
                                                    // 1 = BMW
                                                    // 2 = Ford
                                                    // 3 = Mazda
                                                    // 4 = Tesla
    }

    // Structure
    car_str myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;
    car_str myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
                                                    // BMW X5 1999
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
                                                    // Ford Mustang 1969
    // References
    string food = "Pizza";
    string &meal = food;
    cout << food << "\n";                           // Pizza
    cout << meal << "\n";                           // Pizza
    cout << &food << "\n";                          // 0x61fd3c
    cout << &meal << "\n";                          // 0x61fd3c

    // Pointers
    string* ptr = &food;
    cout << ptr << "\n";                            // 0x61fd3c
    cout << *ptr << "\n";                           // Pizza
    *ptr = "Hamburger";
    cout << *ptr << "\n";                           // Hamburger
    cout << food << "\n";                           // Hamburger

    // Functions
    myFunction("Yan");                              // Yan just got executed!
    myFunction("Jen");                              // Jen just got executed!
    myFunction();                                   // Ken just got executed!
    cout << FunctionSum(5, 3) << '\n';              // 8

    // Pass By Reference
    int firstNum = 10;
    int secondNum = 20;
    cout << "Before swap : " << firstNum << ", " << secondNum << "\n";
                                                    // Before swap : 10, 20
    swapNums(firstNum, secondNum);
    cout << "After swap : " << firstNum << ", " << secondNum << "\n";
                                                    // After swap : 20, 10
    // Pass Arrays
    int myNumArray[5] = {11, 21, 31, 41, 51};
    myFunction1(myNumArray);                        // 11, 21, 31, 41, 51,
    cout << "\n";

    // Overloading
    int myNumplus1 = plusFunc(8, 5);
    double myNumplus2 = plusFunc(4.3, 6.26);
    cout << "Int: " << myNumplus1 << "\n";          // Int: 13
    cout << "Double: " << myNumplus2 << "\n";       // Double: 10.56

    // Recursion
    int result = sum_recur(10);
    cout << result << "\n";                         // 55

    // Object
    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = sol.twoSum(nums, target);
    for(int num : ans){
		cout << num << " ";                         // 0 1
	}
	return 0;
}

