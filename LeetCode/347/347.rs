impl Solution {
    pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
        let mut dict = std::collections::HashMap::new();
        nums.into_iter().for_each(|x| *dict.entry(x).or_insert(0) +=1);
        let mut vec: Vec<(i32, i32)> = dict.into_iter().collect();
        vec.sort_by(|a, b| b.1.cmp(&a.1));
        vec.into_iter().take(k as usize).map(|x| x.0).collect()

    }
}
