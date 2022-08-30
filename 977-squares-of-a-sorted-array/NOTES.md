[-3, -2, -1, 4, 5, 6] => [9, 4, 1,]+ [16, 25, 36]
use Two pointer to iterate over the negative part in the revese, and the postive part in the forward direction.
​
1. create a new result aaray,
2. store the result from behind
3. in each iterate check abs value of left and righ pointer
if right pointer is greater than store and right--
else store and left++