impl Solution {
    pub fn is_valid(s: String) -> bool 
    {
        let mut stack = Vec::new();
        let check = s.chars().try_for_each(|x| {
            match x
            {
                '(' | '{' | '[' => {stack.push(x); Ok(())},
                '}' if stack.pop() != Some('{') => Err(()),
                ']' if stack.pop() != Some('[') => Err(()),
                ')' if stack.pop() != Some('(') => Err(()),
                _ => Ok(()),
            }
        });
        stack.is_empty() && check.is_ok()
    }
}
