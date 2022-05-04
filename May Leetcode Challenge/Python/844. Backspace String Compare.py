# O(n) - time
# O(1) - space
# This could be achieved by using two pointers and going to the string in reverse.
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        spt = len(s)-1
        tpt = len(t)-1
        
        sskip = 0
        tskip = 0
        
        while( spt>=0 or tpt>=0):
            
            while(spt>=0):
                if s[spt]=="#":
                    sskip +=1
                    spt-=1
                elif sskip>0:
                    sskip-=1
                    spt-=1
                else:
                    break
            
            while(tpt>=0):
                if t[tpt]=="#":
                    tskip +=1
                    tpt-=1
                elif tskip>0:
                    tskip-=1
                    tpt-=1
                else:
                    break
            
            if spt>=0 and tpt>=0 and s[spt]!=t[tpt]:
                return False
            
            if (spt >=0 ) != (tpt >=0 ):
                return False
            
            spt-=1
            tpt-=1
        return True

# O(n) - time
# O(n) - space
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        lst_s = []
        lst_t = []
        count = 0
        for item in s:
            if item=="#":
                if lst_s!=[]:
                    lst_s.pop()
                    count -= 1
            else:
                lst_s.append(item)
                count+=1
        
        for item in t:
            if item=="#":
                if lst_t!=[]:
                    lst_t.pop()
                    count += 1
            else:
                lst_t.append(item)
                count -= 1
        if count == 0:
            for i in range(len(lst_s)):
                if lst_s[i]!=lst_t[i]:
                    return False
            return True
        return False