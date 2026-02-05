use std::collections::HashSet;
impl Solution {
    pub fn num_jewels_in_stones(jewels: String, stones: String) -> i32 {
        let hash: HashSet<char> = jewels.chars().collect();
        stones.chars().filter(|x| hash.contains(&x)).count() as i32
        
    }
}
