impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
        let mut dict = std::collections::HashMap::new();
        for word in strs
        {
            let mut counts = [0u8; 26];
            word.chars().for_each(|x| counts[(x as u8 - b'a') as usize] +=1);
            dict.entry(counts).or_insert(Vec::new()).push(word);
        }
        dict.into_values().collect()
    }
}
