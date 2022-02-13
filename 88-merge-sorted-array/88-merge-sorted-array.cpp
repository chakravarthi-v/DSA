class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr[m+n];
        int first=0,second=0,start=0;
        while(start<m+n&&first<m&&second<n){
            if(nums1[first]<=nums2[second]){
                arr[start]=nums1[first];
                first++;
            }
            else{
                arr[start]=nums2[second];
                second++;
            }
            start++;
        }
        while(first<m){
            arr[start]=nums1[first];
            first++;start++;
        }
        while(second<n){
            arr[start]=nums2[second];
            second++;
            start++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=arr[i];
        }
        
    }
};