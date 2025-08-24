class Solution {
public:
    int countStudents(vector<int>& stud, vector<int>& sand) {
       int i,j;
       vector<int> count(2,0); 
    for(i=0;i<stud.size();i++)
    {
        count[stud[i]]++;

    }
    for(i=0;i<sand.size();i++){
     if(count[sand[i]]<=0)
     break;
     else
     count[sand[i]]--;
    }
     return count[0]+count[1];
    }
};