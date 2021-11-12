
#include <iostream>
#include <string>

    using namespace std;

    int main()
    {
        int number;//введенное число
        int const N = 11;


        int Arr[N];


        int n, count_of_digits, sum, k;

        number = count_of_digits = sum = 0;
        int i = 0;

        cout << "Enter number" << endl;
        cin >> number;
        k = number;
        if (number < 2147483647) {
           


                while (number > 0) {
                    Arr[i] = number % 10;
                    number /= 10;
                    count_of_digits++;
                    i++;
                }


                for (i = 0; i < count_of_digits; i++) {
                    sum = sum + Arr[i];
                }


                /* int n = 123;*/
                string s = to_string(k);
                string s_reverse(s);
                reverse(s_reverse.begin(), s_reverse.end());



                cout << "Sum = " << sum << endl;
                cout << "Count of digits = " << count_of_digits << endl;
                cout << "Reverse = " << s_reverse << endl;
                /*  system("pause");*/
                return 0;
            }
        

       
            cout << "Enter number in the range of values for int type";
        }
    
        
    