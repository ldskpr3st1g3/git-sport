impl Solution {
    pub fn minimum_cost(nums: Vec<i32>) -> i32 {
        let mut answer = nums[0];
        let mut pair = (60,60);
        nums[1..].iter().for_each(|&x| {
            if x <= pair.0 {pair.1 = pair.0; pair.0 = x;}
            else if x <= pair.1 {pair.1 = x;}
        });
        answer += pair.1 + pair.0;
        answer
    }
}
