# Find the Difference of Two Arrays

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 17, 2026 |
| **Tags** | Array, Hash Table |
| **Link** | [View Problem](https://leetcode.com/problems/find-the-difference-of-two-arrays/) |
| **Runtime** | 28 ms |
| **Memory** | 41.5 MB |

## Problem Description

<p>Given two <strong>0-indexed</strong> integer arrays <code>nums1</code> and <code>nums2</code>, return <em>a list</em> <code>answer</code> <em>of size</em> <code>2</code> <em>where:</em></p>

<ul>
	<li><code>answer[0]</code> <em>is a list of all <strong>distinct</strong> integers in</em> <code>nums1</code> <em>which are <strong>not</strong> present in</em> <code>nums2</code><em>.</em></li>
	<li><code>answer[1]</code> <em>is a list of all <strong>distinct</strong> integers in</em> <code>nums2</code> <em>which are <strong>not</strong> present in</em> <code>nums1</code>.</li>
</ul>

<p><strong>Note</strong> that the integers in the lists may be returned in <strong>any</strong> order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums1 = [1,2,3], nums2 = [2,4,6]
<strong>Output:</strong> [[1,3],[4,6]]
<strong>Explanation:
</strong>For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums1. Therefore, answer[1] = [4,6].</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums1 = [1,2,3,3], nums2 = [1,1,2,2]
<strong>Output:</strong> [[3],[]]
<strong>Explanation:
</strong>For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].
Every integer in nums2 is present in nums1. Therefore, answer[1] = [].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums1.length, nums2.length &lt;= 1000</code></li>
	<li><code>-1000 &lt;= nums1[i], nums2[i] &lt;= 1000</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Easy Solution C++ 🔥 Explained 🔥 Using Sets
**Author**: [@ribhav_32](https://leetcode.com/ribhav_32/)
**Upvotes**: 283 👍
**Link**: [View Original Post](https://leetcode.com/problems/find-the-difference-of-two-arrays/solutions/3480249/)

---

# **PLEASE UPVOTE \uD83D\uDC4D**
# Intuition
- ##### To solve this problem, we can create two sets: set1 and set2. We can then iterate through nums1 and add each integer to set1. Similarly, we can iterate through nums2 and add each integer to set2.

- ##### Next, we can take the set difference between set1 and set2 to obtain the distinct integers in nums1 that are not present in nums2. Similarly, we can take the set difference between set2 and set1 to obtain the distinct integers in nums2 that are not present in nums1.

- ##### Finally, we can return the results in the form of a Vector of size 2, where the first element is the vector of distinct integers in nums1 that are not present in nums2, and the second element is the vector of distinct integers in nums2 that are not present in nums1.
<!-- Describe your first thoughts on how to solve this problem. -->

# Complexity
- ### Time complexity: O(M+N)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- ### Space complexity: O(M+N)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# **PLEASE UPVOTE \uD83D\uDC4D**
# Code
```
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> distinct_nums1, distinct_nums2;
        for (int num : set1) {
            if (set2.count(num) == 0) {
                distinct_nums1.push_back(num);
            }
        }

        for (int num : set2) {
            if (set1.count(num) == 0) {
                distinct_nums2.push_back(num);
            }
        }

        return {distinct_nums1, distinct_nums2};
    }
};

```
![e2515d84-99cf-4499-80fb-fe458e1bbae2_1678932606.8004954.png](https://assets.leetcode.com/users/images/e5cc6438-63d7-47fb-84d1-e4e36cf43c6e_1683003574.1370602.png)


</details>
