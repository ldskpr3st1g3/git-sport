use std::collections::{BinaryHeap, HashMap};

impl Solution {
    pub fn top_k_frequent(words: Vec<String>, k: i32) -> Vec<String> 
    {
        let mut hash = HashMap::<String, i32>::new();
        words.into_iter().for_each(|x| *hash.entry(x).or_default() +=1);
        let mut vec: Vec<String> = hash.iter().map(|x| x.0).cloned().collect();
        vec.sort_by(|a,b| if hash.get(a).unwrap() == hash.get(b).unwrap()
        {
            return (*a).cmp(b);
        }
        else
        {
            return hash.get(b).unwrap().cmp(hash.get(a).unwrap());
        });
        vec.into_iter().take(k as usize).collect()
        
    }
}
