fn factorizable_by_3(n: u32) -> String {
    let pling: String = "Pling".to_string();
    return if n % 3 == 0 { pling } else { "".to_string() };
}

fn factorizable_by_5(n: u32) -> String {
    let plang: String = "Plang".to_string();
    return if n % 5 == 0 { plang } else { "".to_string() };
}

fn factorizable_by_7(n: u32) -> String {
    let plong: String = "Plong".to_string();
    return if n % 7 == 0 { plong } else { "".to_string() };
}

pub fn raindrops(n: u32) -> String {
    let mut ret_str: String = "".to_string();
    // factorizable by 3 -> Pling
    ret_str.push_str(&factorizable_by_3(n));
    // factorizable by 5 -> Plang
    ret_str.push_str(&factorizable_by_5(n));
    // // factorizable by 7 -> Plong
    ret_str.push_str(&factorizable_by_7(n));
    if ret_str == "" {
        // everything ese -> n
        let n_str: String = n.to_string();
        return n_str;
    } else {
        return ret_str;
    }
}
