class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+2,0);

        for(auto &b : bookings){
            int start = b[0];
            int end = b[1];
            int seats = b[2];

            diff[start] += seats;
            diff[end+1] -= seats;
        }
        vector<int> res;
        int csum = 0;
        for(int i = 1; i <= n; i++){
            csum += diff[i];
            res.push_back(csum);
        }
        return res;
    }
};