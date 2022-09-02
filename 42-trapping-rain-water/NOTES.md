BruteForce: O (n^2) TLE
find water can trap on each height;
and add all trapped water will give result <br>
​
```water_on_currentHeight = min(left_max_height, right_max_height) - current_height```
​