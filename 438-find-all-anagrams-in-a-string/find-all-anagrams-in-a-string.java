import java.util.*;

class Solution {

    public List<Integer> findAnagrams(String s, String p) {

        List<Integer> res = new ArrayList<>();

        if(p.length() > s.length())
            return res;

        int[] pCount = new int[26];
        int[] sCount = new int[26];

        // frequency of pattern
        for(char c : p.toCharArray()) {
            pCount[c - 'a']++;
        }

        // first window
        for(int i=0; i<p.length(); i++) {
            sCount[s.charAt(i) - 'a']++;
        }

        // check first window
        if(Arrays.equals(pCount, sCount)) {
            res.add(0);
        }

        // sliding window
        for(int i=p.length(); i<s.length(); i++) {

            // add new character
            sCount[s.charAt(i) - 'a']++;

            // remove old character
            sCount[s.charAt(i - p.length()) - 'a']--;

            // compare frequencies
            if(Arrays.equals(pCount, sCount)) {
                res.add(i - p.length() + 1);
            }
        }

        return res;
    }
}