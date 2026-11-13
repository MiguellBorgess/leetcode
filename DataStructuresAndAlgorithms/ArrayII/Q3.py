class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        n = len(nums)
        presents = set(nums)
        return [x for x in range(1, n + 1) if x not in presents]
