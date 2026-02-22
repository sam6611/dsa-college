#include <vector>
#include <stack>    
#include <cmath>
#include <string>
using namespace std;
class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<long long> st;

        for (string token : arr) {

            // If operator
            if (token == "+" || token == "-" || 
                token == "*" || token == "/" || token == "^") {

                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                long long result;

                if (token == "+") {
                    result = a + b;
                }
                else if (token == "-") {
                    result = a - b;
                }
                else if (token == "*") {
                    result = a * b;
                }
                else if (token == "/") {
                    // floor division
                    if ((a < 0) ^ (b < 0) && a % b != 0)
                        result = a / b - 1;
                    else
                        result = a / b;
                }
                else { // "^"
                    result = pow(a, b);
                }

                st.push(result);
            }
            else {
                // operand
                st.push(stoll(token));
            }
        }

        return st.top();
    }
};