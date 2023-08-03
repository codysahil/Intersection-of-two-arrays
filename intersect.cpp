 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int> s;
        int c=0;
        for(int i=0;i<n;i++)
        s.insert(a[i]);
        for(int i=0;i<m;i++)
        {
            if(s.find(b[i])!=s.end()){
                c++;
                s.erase(b[i]);
            }
        }
        return c;
        
    }
