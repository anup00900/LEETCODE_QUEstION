vector<int> Smallestonleft(int arr[], int n)
{
   
   
   vector<int>v;
   set<int>s;
   
   s.insert(arr[0]);
   v.push_back(-1);
   for(int i=1;i<n;i++)
   {
       auto it = s.lower_bound(arr[i]);
       if(it == s.begin())
       {
           v.push_back(-1);
       }
       else
       {
           it--;
           v.push_back(*it);
       }
       s.insert(arr[i]);
       
       
   }
   return v;
   
   
   
}