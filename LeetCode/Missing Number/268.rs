impl Solution {
    pub fn missing_number(nums: Vec<i32>) -> i32 {
        nums.into_iter().enumerate().fold(0, |acc, (index, value)| acc ^ (index + 1) as i32 ^ value)
    }
}
