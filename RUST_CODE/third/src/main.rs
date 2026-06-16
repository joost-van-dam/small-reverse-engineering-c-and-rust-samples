fn main() {
    let x = 4;

    let p_x = &x;

    println!("waarde van x: {}", x);
    println!("waarde via p_x: {}", *p_x);
    println!("adres waar p_x naar wijst: {:p}", p_x);
    println!("adres van p_x zelf: {:p}", &p_x);

    // waarde van x: 4
    // waarde via p_x: 4
    // adres waar p_x naar wijst: 0x2b9c1df954
    // adres van p_x zelf: 0x2b9c1df958

}