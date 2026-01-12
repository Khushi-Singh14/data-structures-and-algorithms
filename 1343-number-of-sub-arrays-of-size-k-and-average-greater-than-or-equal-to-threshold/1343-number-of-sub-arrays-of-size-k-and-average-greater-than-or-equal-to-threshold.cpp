class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low = 0;
        int high = k-1;
        int count=0;
        long long int sum=0;
        int n=arr.size();
        for (int i = low; i <= high; i++) {
            sum += arr[i];
        }
        while (high < n) {
            long long int avg = sum / k;
            if (avg >= threshold) {
                count++;
            }
            sum-=arr[low];
            low++; high++;
            if(high>=n) break;
            sum+=arr[high];
        }
        return count;
    }
};