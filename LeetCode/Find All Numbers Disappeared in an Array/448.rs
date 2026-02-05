use std::collections::HashSet;
impl Solution {
    pub fn find_disappeared_numbers(nums: Vec<i32>) -> Vec<i32> {
        let sz = nums.len();
        let mut hash = vec![0i32; sz+1];
        nums.into_iter().for_each(|x| hash[x as usize ] = 1);

        (1..=sz as i32).into_iter().filter(|&x| hash[x as usize] == 0).collect() 
        
    }
}
