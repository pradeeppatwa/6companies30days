// Course Schedule II

void add_edge(vector<int> adj[],int i,int j)
    {
        adj[j].push_back(i);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> adj[numCourses];
        int indegree[numCourses];
        for(int i=0;i<numCourses;i++)
            indegree[i]=0;
        for(int i=0;i<prerequisites.size();i++)
        {
            add_edge(adj,prerequisites[i][0],prerequisites[i][1]);
            indegree[prerequisites[i][0]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        vector<int> v;
        while(!q.empty())
        {
            int a=q.front();
            v.push_back(a);
            q.pop();
            for(auto i:adj[a])
            {
                indegree[i]--;
                if(indegree[i]==0)
                    q.push(i);
            }
        }
        if(v.size()==numCourses)
            return v;
        return {};
    }
