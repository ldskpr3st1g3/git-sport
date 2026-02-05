impl Solution {
    pub fn height_checker(heights: Vec<i32>) -> i32 {
        let mut temp: Vec<i32> = heights.iter().cloned().collect();
        temp.sort();
        heights.iter()
        .zip(temp.iter())
        .filter(|(left, right)| left != right)
        .count() as i32
    }
}
