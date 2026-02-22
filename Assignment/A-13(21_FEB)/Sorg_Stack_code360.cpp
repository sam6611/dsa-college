#include <stack>
using namespace std;
void insertSorted(stack<int> &st, int element) {
    // If stack empty or correct position found
    if (st.empty() || st.top() <= element) {
        st.push(element);
        return;
    }

    int top = st.top();
    st.pop();

    insertSorted(st, element);

    st.push(top);
}

void sortStack(stack<int> &st) {
    if (st.empty()) return;

    int top = st.top();
    st.pop();

    sortStack(st);

    insertSorted(st, top);
}