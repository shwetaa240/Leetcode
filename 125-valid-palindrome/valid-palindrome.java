class Solution {
    public boolean isPalindrome(String s) {
        if (s == "")
            return true;
        char ch1, ch2;
        int ss = 0, e = s.length() - 1;
        while (ss <= e) {
            ch1 = s.charAt(ss);
            ch2 = s.charAt(e);
            if (!Character.isLetterOrDigit(ch1))
                ss++;
            else if (!Character.isLetterOrDigit(ch2))
                e--;
            else if(Character.toLowerCase(ch1)!= Character.toLowerCase(ch2))
            return false;
            else{        
            ss++;
            e--;
            }
            
        }
        return true;
    }
}