class Solution {
public:
    int characterReplacement(string s, int k) {
       char a = 'A';
       int maxx = 0;
      for(int i = 0; i < 26 ; i++)
      {
        int left=0,turn=k;
        a ='A'+i;
        for(int j=0; j < s.size();j++)
        {
            if(s[j] !=a)
            {
                if(!turn)
                {
                    while(!turn)
                    {
                        if(s[left] != a)
                            turn++;
                    left++;
                    }
                }
                turn--;
            }
            maxx = max(maxx,j-left+1);
        } 
      }
      return maxx;
    }
};
