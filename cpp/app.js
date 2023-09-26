// var twoSum = function (nums, target) {
//   for (let i = 0; i < nums.length; i++) {
//     let temp = nums[i];
//     for (let j = i + 1; j < nums.length; j++) {
//       if (temp + nums[j] === target) {
//         return [i, j]
//       }
//     }
//   }

//   return -1;
// };

function twoSum(nums, target) {
  const numToIndex = {}; // Object to store complement and its index

  for (let i = 0; i < nums.length; i++) {
    const num = nums[i];
    const complement = target - num;
    if (complement in numToIndex) {
      return [numToIndex[complement], i];
    }
    numToIndex[num] = i;
    console.log(numToIndex);
  }

  // If no solution is found, return an empty array
  return [];
}

console.log(twoSum([12,20,5,99,1], 6));
