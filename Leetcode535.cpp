class Solution {
public:

    // Encodes a URL to a shortened URL.
    unordered_map<string,string>umap;
    
    string encode(string longUrl) {
        
        string st="http://tinyurl.com/";
        st+=((char)((int)(rand()%100)));
        while(umap.find(st)!=umap.end())
        {
             st+=(char)((int)(rand()*100));
        }
        umap[st]=longUrl;
        return st;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return umap[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));