// Split Array Largest Sum

int countSubarrays(vector<int>& nums, int tempMin) {
        int total = 0, subarrays = 0;
        for(int i=0; i<nums.size(); i++) {
            if(total + nums[i] <= tempMin) {
                total += nums[i];
            }else {
                total = nums[i];
                subarrays++;
            }
        }
        return subarrays;
        
    }
    int splitArray(vector<int>& nums, int m) {
        int l = -1e9, h = 0;
        for(auto u: nums) {
            l = max(l, u);
            h += u;
        }
        
        while(l <= h) {
            int mid = l + (h-l)/2;
            
            if(countSubarrays(nums, mid) < m) {
                h = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        
        return l;
    }
