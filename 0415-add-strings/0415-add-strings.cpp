class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string res = "";

        int i = num1.size() - 1;
        int j = num2.size() - 1;

        while (i >= 0 || j >= 0) {
            int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            res.push_back((sum % 10) + '0');
        }

        if (carry > 0)
            res.push_back(carry + '0');

        reverse(res.begin(), res.end());
        return res;
    }
};
