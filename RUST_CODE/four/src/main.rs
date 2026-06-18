#[cfg(target_os = "linux")]
fn tagged() {
    println!("Linux");
}

#[cfg(target_os = "windows")]
fn tagged() {
    println!("Windows");
}


fn main() {
    println!("Hello, world!");
    tagged();
}
