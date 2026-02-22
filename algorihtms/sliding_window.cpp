int slidingWindow(vector<int>& arr, int k) {

    int sum = 0;

    for(int i=0;i<k;i++)
        sum += arr[i];

    int maxSum = sum;

    for(int i=k;i<arr.size();i++) {

        sum += arr[i];
        sum -= arr[i-k];

        maxSum = max(maxSum, sum);
    }

    return maxSum;
}
