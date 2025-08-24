class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(),m=INT_MIN;
        vector<int>pse(n,-1);
        vector<int>nse(n,n);
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++){
            if(!st.empty()){
                while(!st.empty() && heights[st.top()]>=heights[i]){
                    st.pop();
                }
                if(st.empty()){
                    pse[i]=-1;
                }
                else{
                    pse[i]=st.top();
                }
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            if(!st.empty()){
                while(!st.empty() && heights[st.top()]>=heights[i]){
                    st.pop();
                }
                if(st.empty()){
                    nse[i]=n;
                }
                else{
                    nse[i]=st.top();
                }
            }
            st.push(i);
        }
        for(int i=0;i<n;i++){
            int area=heights[i]*(nse[i]-pse[i]-1);
            m=max(m,area);
        }
        return m;
    }
};