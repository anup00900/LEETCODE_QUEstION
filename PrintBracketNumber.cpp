class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	   vector<int>v;
	   stack<pair<char,int>>st;
	   int k=1;
	   for(int i=0;i<S.length();i++)
	   {
	       if(S[i]=='(')
	       {
	           st.push({'(',k});
	           v.push_back(k);
	           k++;
	       }
	       else if(S[i]==')')
	       {
	           int i = st.top().first;
	           int j = st.top().second;
	           st.pop();
	           v.push_back(j);
	           
	       }
	       
	       
	   }
	   return v;
	}
};
