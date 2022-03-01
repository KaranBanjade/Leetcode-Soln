class Solution {
public:
    string removeOccurrences(string s, string part)
    {
        int partLength = part.length();
        //either all the string contains is part it'll end up 0
        //Second part returns a random high number if the part is not found
        //So since the length is limited to 1000, part found should be less than that.
        while(true){
            //When the if fails the current string is the filtered one.
            if(s.find(part) < s.length() && s.length() > 0)
                s.erase(s.find(part),partLength);
            else 
                return s;
        }
        //erase removes the characters from the first index
        //Second parameter is number of characters which will be equal to the length of part
    }
};