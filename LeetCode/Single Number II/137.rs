use std::collections::HashMap;

impl Solution {
    pub fn single_number(nums: Vec<i32>) -> i32 {
        let mut dict = HashMap::<i32,i32>::new();
        nums.into_iter().for_each(|x| {
            *dict.entry(x).or_default() +=1;
            if(*dict.get(&x).unwrap() == 3) {dict.remove(&x);}
        });
        dict.into_iter().next().unwrap().0
        
    }
}
