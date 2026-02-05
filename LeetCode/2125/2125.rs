impl Solution {
    pub fn number_of_beams(bank: Vec<String>) -> i32 {
        let mut result = 0;
        let mut prev = bank[0].chars().filter(|&x| x == '1').count();
        for i in (1..bank.len())
        {
            let cur = bank[i].chars().filter(|&x| x == '1').count();
            if(cur != 0)
            {
                result += cur * prev;
                prev = cur;
            }
        }
        result as i32

    }
}
