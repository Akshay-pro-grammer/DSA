int mooresVotingAlgo(vector<int>& nums){
        int majority_element = nums[0];
        int freq = 1;
        for(int i=1;i<nums.size();++i){
            if(nums[i]!=majority_element)   freq--;
            else                            freq++;
            
            if(freq==0){
                majority_element = nums[i];
                freq = 1;
            }
        }
        return majority_element;
    }
