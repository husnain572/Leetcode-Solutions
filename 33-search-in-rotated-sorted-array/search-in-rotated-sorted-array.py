class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l,r = 0 , len(nums) - 1
        while l <= r:
            mid = (l + r) // 2
            # left sorted array
            if nums[mid] >= nums[l]:
                if target > nums[mid]:
                    l = mid + 1
                elif target < nums[mid]:
                    if nums[l] > target:
                        l = mid + 1
                    else:
                        r = mid -1
                else:
                    return mid
            # right sorted portion
            else:
                if target > nums[mid]:
                    if nums[r] < target:
                        r = mid -1
                    else:
                        l = mid + 1
                elif target < nums[mid]:
                    r = mid - 1
                else:
                    return mid
        return -1
        