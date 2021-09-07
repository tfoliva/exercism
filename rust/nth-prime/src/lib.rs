pub fn nth(n: u32) -> u32 {
    if n == 0 {
        return 2 as u32;
    } else if n > 0 {
        let max_prime = n.pow(2); // guess
        let mut primes = (3..max_prime).step_by(2); // preliminary list
        for p in primes {}
    }
}
