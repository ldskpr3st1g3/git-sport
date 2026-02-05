impl Solution {
    pub fn is_trionic(nums: Vec<i32>) -> bool {
        if nums.len() == 3 {return false;}
        let mut prev = nums[0];
        let mut increasing = (true, 0);
        for(index, &num) in nums.iter().skip(1).enumerate()
        {
            match num.cmp(&prev)
            {
                std::cmp::Ordering::Less => 
                {
                    if(index == 0) {return false;}
                    if(increasing.0 == true) {increasing.0 = false; increasing.1 +=1;}
                }
                std::cmp::Ordering::Greater =>
                {
                    if(increasing.0 == false) {increasing.0 = true; increasing.1 +=1;};
                }
                _ => return false,
            }
            if (increasing.1 > 2) {return false;}
            prev = num;
        }
        increasing.1 == 2 && increasing.0 == true
    }
}
