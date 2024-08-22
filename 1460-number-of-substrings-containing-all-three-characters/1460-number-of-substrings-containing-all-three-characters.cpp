class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;


        for(int i=0;i<s.size();i++){
            vector<int>hash(3,0);
            
            for(int j=i;j<s.size();j++){
                hash[s[j]-'a']=1;
                if(hash[0]+hash[1]+hash[2]==3){
                    count=count+(s.size()-j);
                    break;
                }

            }
        }
        return count;
       

        
    }
};