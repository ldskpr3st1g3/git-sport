impl Solution {
    pub fn construct_transformed_array(nums: Vec<i32>) -> Vec<i32> {
        let mut result = Vec::with_capacity(nums.len());
        nums.iter().enumerate().for_each(|(index, &elem)| result.push(nums[((((index as i32 + elem ) % nums.len() as i32) + nums.len() as i32) % nums.len()as i32) as usize]));
        result
    }
}
