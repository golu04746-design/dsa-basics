# Base 7

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 15, 2026 |
| **Tags** | Math, String |
| **Link** | [View Problem](https://leetcode.com/problems/base-7/) |
| **Runtime** | 0 ms |
| **Memory** | 8.6 MB |

## Problem Description

<p>Given an integer <code>num</code>, return <em>a string of its <strong>base 7</strong> representation</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> num = 100
<strong>Output:</strong> "202"
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> num = -7
<strong>Output:</strong> "-10"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-10<sup>7</sup> &lt;= num &lt;= 10<sup>7</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: 3-liner C++ to build string backward + 1-liner recursive solutions
**Author**: [@zzg_zzm](https://leetcode.com/zzg_zzm/)
**Upvotes**: 16 👍
**Link**: [View Original Post](https://leetcode.com/problems/base-7/solutions/98385/)

---

**Iterative Version:** Note that the input `n` is guaranteed to be in range of [-1e7, 1e7] by the problem, so `abs(n)` won't overflow since `n` cannot be `INT_MIN`.
```
    string convertToBase7(int n) {
      int x = abs(n); string res;
      do res = to_string(x%7)+res; while(x/=7);
      return (n>=0? "" : "-") + res;
    }
```
**Recursive Version:**
```
    string convertToBase7(int n) {
      return n>=0? n>=7? convertToBase7(n/7)+to_string(n%7) : to_string(n) : '-'+convertToBase7(-n);
    }
```

</details>
