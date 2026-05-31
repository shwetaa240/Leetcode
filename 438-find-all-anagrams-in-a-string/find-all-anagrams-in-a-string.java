class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> res= new ArrayList<>();
       
       int n2=s.length(),n1=p.length();
        char arr[]=p.toCharArray();
       Arrays.sort(arr);
       String sp=new String(arr);
       for(int i=0;i<=n2-n1;i++)
       {
          String sub=s.substring(i,i+n1);
          char ar[]=sub.toCharArray();
          Arrays.sort(ar);
          if(sp.equals(new String(ar)))
          {
            res.add(i);
          }
       }
      return res;



    }
}