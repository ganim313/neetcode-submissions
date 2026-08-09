class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        from collections import defaultdict
        d=defaultdict(int)
        for n in nums:
            d[n]+=1
        
        d=sorted(d.items(),key=lambda x:x[1],reverse=True)
        return [num for num,freq in d[:k]]

        


