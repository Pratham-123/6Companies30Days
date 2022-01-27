 vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        // Your code here
        for(int i=0;i<N;i++){
            if(arr[i]<arr[i+1]){
                for(int j=i+2;j<N;j++){
                    if(arr[i+1]<arr[j])
                        return {arr[i],arr[i+1],arr[j]};
                }
            }
        }
        return {};
    }
