impl Solution {
    pub fn first_uniq_char(s: String) -> i32 {
        let mut hash = vec![0i32; 26];
        for ch in s.chars()
        {
            hash[(ch as u8 - b'a') as usize] += 1;
        }
        s.chars().enumerate().position(|(index, chr)| hash[(chr as u8 - b'a') as usize] == 1).map(|index| index as i32)
        .unwrap_or(-1)
    }
}
