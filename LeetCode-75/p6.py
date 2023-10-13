class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip()
        words = s.split(" ")
        ans = []
        for word in words:
            word = word.strip()
            if len(word) != 0:
                ans.append(word)

        ans = ans[::-1]
        res = ""
        for i in range(0, len(ans)):
            if i == len(ans)-1:
                res += ans[i]
            else:
                res += ans[i] + " "

        return res
