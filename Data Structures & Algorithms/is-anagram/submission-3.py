class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s)==sorted(t)
        # if len(s)!=len(t):
        #     return False
        # freq={}
        # for x in s:
        #     if(x in freq):
        #         freq[x]+=1
        #     else:
        #         freq[x]=1
        # for x in t:
        #     if(x in freq):
        #         freq[x]-=1
        #     else:
        #         freq[x]=-1
        
        # for key in freq:
        #     if freq[key]!=0:
        #         return False

        # return True
        