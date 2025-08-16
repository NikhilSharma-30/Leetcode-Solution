class Solution {
public:
    int minSensors(int n, int m, int k) {
        int sensor_cov=2*k+1;
        return (ceil(n/(float)sensor_cov))*(ceil(m/(float)sensor_cov));
    }
};