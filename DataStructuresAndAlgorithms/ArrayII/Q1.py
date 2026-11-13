class Solution:
    def findErrorNums(self, nums: list[int]) -> list[int]:
        sumx = sum(nums)
        sumy = sum(set(nums))
        sumz = sum(range(1, len(nums)+1))

        n1 = sumx - sumy
        n2 = sumz - sumy

        return [n1, n2]
