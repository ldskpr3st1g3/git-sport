impl Solution {
    pub fn button_with_longest_time(events: Vec<Vec<i32>>) -> i32 {
        let mut result: (i32,i32) = (events[0][0], events[0][1]);
        let mut prev = result;
        events[1..].iter().for_each(|arr| {
            let raz = (*arr)[1] - prev.1;
            if result.1 < raz {result = ((*arr)[0], raz);}
            else if result.1 == raz && result.0 > (*arr)[0] {result = ((*arr)[0], raz);}
            prev = ((*arr)[0], (*arr)[1]);
        });
        result.0
        
    }
}
