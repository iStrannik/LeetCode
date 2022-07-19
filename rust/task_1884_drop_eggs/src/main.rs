fn two_egg_drop(n: i32) -> i32 {
    return ((1.0 + (n as f32 * 8.0).sqrt()) / 2.0).floor() as i32;       
}

fn main() {
    println!("{}", two_egg_drop(100));
}
