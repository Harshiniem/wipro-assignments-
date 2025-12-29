/*
 * Purpose: Implement the class Num with the given data and methods as given below.
	
		class Num{
			int num;
		public:
			void setNum(int n = 10);
			void dispNum();
			bool isEven();
			bool isPrime();			
		};

 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

class Num {
    int num;

public:
    void setNum(int n = 10) {
        num = n;
    }

    void dispNum() {
        cout << "Number: " << num << endl;
    }

    bool isEven() {
        return (num % 2 == 0);
    }

    bool isPrime() {
        if (num <= 1)
            return false;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    Num n;
    n.setNum();
    n.dispNum();

    cout << "Even: " << (n.isEven() ? "Yes" : "No") << endl;
    cout << "Prime: " << (n.isPrime() ? "Yes" : "No") << endl;

    return 0;
}

