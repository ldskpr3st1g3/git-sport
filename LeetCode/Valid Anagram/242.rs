impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        if s.len() != t.len(){return false;}
        let mut vector = vec![0i32; 26];
        s.chars().zip(t.chars()).for_each(|(first, second)| 
        {
            vector[((first as u8) - b'a') as usize] += 1;
            vector[(second as u8 -b'a') as usize] -= 1;
        });
        vector.into_iter().all(|x| x == 0) 
    }
}
