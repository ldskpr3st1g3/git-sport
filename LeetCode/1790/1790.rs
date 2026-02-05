impl Solution {
    pub fn are_almost_equal(s1: String, s2: String) -> bool 
    {
        let indexies: Vec<_> = s1.chars().zip(s2.chars()).enumerate().filter(|(_, (left, right))| left != right).collect();

        match indexies.len()
        {
            0 => true,
            2 => {
                let (_, (a1, b1)) = indexies[0];
                let (_, (a2,b2)) = indexies[1];
                a1 == b2 && a2 == b1
            
            },
            _ => false
        }

    }
}
