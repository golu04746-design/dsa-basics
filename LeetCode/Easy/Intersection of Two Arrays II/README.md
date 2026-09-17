# Intersection of Two Arrays II

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 17, 2026 |
| **Tags** | Array, Hash Table, Two Pointers, Binary Search, Sorting |
| **Link** | [View Problem](https://leetcode.com/problems/intersection-of-two-arrays-ii/) |
| **Runtime** | 0 ms |
| **Memory** | 14.8 MB |

## Problem Description

<p>Given two integer arrays <code>nums1</code> and <code>nums2</code>, return <em>an array of their intersection</em>. Each element in the result must appear as many times as it shows in both arrays and you may return the result in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums1 = [1,2,2,1], nums2 = [2,2]
<strong>Output:</strong> [2,2]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums1 = [4,9,5], nums2 = [9,4,9,8,4]
<strong>Output:</strong> [4,9]
<strong>Explanation:</strong> [9,4] is also accepted.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums1.length, nums2.length &lt;= 1000</code></li>
	<li><code>0 &lt;= nums1[i], nums2[i] &lt;= 1000</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong></p>

<ul>
	<li>What if the given array is already sorted? How would you optimize your algorithm?</li>
	<li>What if <code>nums1</code>'s size is small compared to <code>nums2</code>'s size? Which algorithm is better?</li>
	<li>What if elements of <code>nums2</code> are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Short Python / C++
**Author**: [@StefanPochmann](https://leetcode.com/StefanPochmann/)
**Upvotes**: 223 👍
**Link**: [View Original Post](https://leetcode.com/problems/intersection-of-two-arrays-ii/solutions/82269/)

---

Python
-

    def intersect(self, nums1, nums2):
        a, b = map(collections.Counter, (nums1, nums2))
        return list((a & b).elements())

Variations:

    def intersect(self, nums1, nums2):
        C = collections.Counter
        return list((C(nums1) & C(nums2)).elements())
        
    def intersect(self, nums1, nums2):
        return list((collections.Counter(nums1) & collections.Counter(nums2)).elements())

---

C++
-

    vector<int> intersect(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        a.erase(set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()), a.end());
        return a;
    }

Another:

    vector<int> intersect(vector<int>& a, vector<int>& b) {
        unordered_map<int, int> ctr;
        for (int i : a)
            ctr[i]++;
        vector<int> out;
        for (int i : b)
            if (ctr[i]-- > 0)
                out.push_back(i);
        return out;
    }

</details>
