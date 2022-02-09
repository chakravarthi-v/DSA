# 14. Kadane's Algorithm - I
## Easy 
<div class="problem-statement">
                <p></p><p><em><span style="font-size:18px">Kadane's algorithm comes into picture when we want to find the maximum possible sum in an array when summing the contiguous elements of the array.</span></em></p>

<p><span style="font-size:18px">You are given an array.&nbsp;Find the<strong> maximum possible sum</strong> of contiguous elements of the array ending at each position in the array. Also, return the overall maximum that we can achieve.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6
arr[] = {5,-2,-3,32,-5,65}
<strong>Output: </strong>5 3 0 32 27 92
        92<strong>
Explanation: </strong>Maximum sum at each index is
5, 3, 0, 32, 27, 92. And, maximum sum for
contiguous array is 92.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
arr[] = {-9,-8,8,3,-4}
<strong>Output: </strong>-9 -8 8 11 7
&nbsp;        11</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input. Just complete the function <strong>maximumSum()&nbsp;</strong>that takes the integer array and its size as inputs and prints the maximum contiguous subarray sum ending at each position in the array. Also, return the overall maximum.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= sizeOfArray &lt;= 10<sup>6</sup><br>
-10<sup>3</sup> &lt;= A<sub>i</sub> &lt;= 10<sup>3</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>