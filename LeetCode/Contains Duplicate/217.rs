use std::collections::HashSet;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool 
    {
        let mut hash: HashSet<i32> = HashSet::new();
        nums.iter().any(|&x| !hash.insert(x))
    }
}
