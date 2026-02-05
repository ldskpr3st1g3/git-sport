impl Solution {
    pub fn reverse_words(s: String) -> String {
        s.split(' ')
        .filter(|x| !x.is_empty())
        .rev()
        .collect::<Vec<_>>()
        .join(" ")
    }
}
