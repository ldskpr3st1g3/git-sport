impl Solution {
    pub fn next_greatest_letter(letters: Vec<char>, target: char) -> char {
        let first = letters[0];
        for ch in letters.into_iter()
        {
            if(ch as u8 - b'a' > target as u8 - b'a') {return ch;}
        }
        first
        
    }
}
