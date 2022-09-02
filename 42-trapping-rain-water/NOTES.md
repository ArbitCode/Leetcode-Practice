BruteForce: O (n^2) TLE
find water can trap on each height;
and add all trapped water will give result <br>
​
```water_on_currentHeight = min(left_max_height, right_max_height) - current_height```
​
DP : store rightMax and leftMax height in 2 array
store from 1 -> end
leftMaxheight[i] = max(height[i], leftMaxheight[i-1]);
​
sotre from n-2 -> 0: rightMaxHeight[i] max(height[i], rightMaxheight[i+1])
​
Two pointer:
​
```
problem devide into two parts
left < right
water kispe ayega depend krta hai kiska height kam hai, left ka ya right ka
agar left ka height kam hai to left pe ayega <br>
pani kab ayega or kitna
pani ayega jb height left_max se small ho, kitna ayega left_max - currentheight
nhi to pani nhi ayega to currentheight left max height ho jayega
same right side ke liye bhi true hai
```
​
​