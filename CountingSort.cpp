string countSort(string arr){
        
       int freq[26]={0};
       char ar[arr.length()]={0};
       for(int i=0;i<arr.length();i++)
       {
           freq[arr[i]-'a']++;
       }
       int prefixsum[26]={0};
       prefixsum[0]=freq[0];
       for(int i=1;i<26;i++)
       {
           prefixsum[i]=prefixsum[i-1]+freq[i];
       }
       for(int i=0;i<26;i++)
       {
           prefixsum[i]=prefixsum[i]-1;
       }
       for(int i=arr.length()-1;i>=0;i--)
       {
           
           ar[prefixsum[arr[i]-'a']]=arr[i];
           prefixsum[arr[i]-'a']--;
           
       }
       string ut="";
       for(int i=0;i<arr.length();i++)
       {
           ut=ut+ar[i];
       }
       return ut;
    }