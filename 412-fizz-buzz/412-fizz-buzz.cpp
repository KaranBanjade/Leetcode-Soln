class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        string arr[] = {"FizzBuzz", "Fizz", "Buzz"};
        for(int i=1;i<=n;i++){
            if(i%3 == 0 && i%5 == 0)
                ret.push_back(arr[0]);
            else if(i%3==0)
                ret.push_back(arr[1]);
            else if(i%5==0)
                ret.push_back(arr[2]);
            else
                ret.push_back(to_string(i));
        }
    return ret;
    }
};