vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                
                                
                vector<long long>out;
                vector<long long>neg(N,0);
                int k=-1;
                int index=0;
                for(int i=0;i<K;i++)
                {
                    if(A[i]<0)
                    {
                        neg[index++]=(A[i]);
                        if(k==-1)
                        {
                            k=0;
                        }
                        
                    }
                }
                int i=0;
                int j=K-1;
                while(j<N)
                {
                    if(j!=(K-1))
                    {
                        if(A[j]<0)
                        {
                            neg[index++]=(A[j]);
                            if(k==-1)
                            {
                               k=0;
                            }
                        }
                    }
                    if(k!=-1)
                    {
                        out.push_back(neg[k]);
                    }
                    else if(k==-1)
                    {
                         out.push_back(0);
                    }
                    
                    if(A[i]==neg[k])
                    {
                        if(k<index)
                        {
                            k++;
                        }
                        else
                        {
                            k=-1;
                        }
                    }
                    j++;
                    i++;
                    
                    
                    
                    
                }
                return out;
                
                
                                
                                
                                
                                
                                                 
 }