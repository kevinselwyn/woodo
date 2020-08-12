use woodo::*;

fn main() {
    let woodo = Woodo::new();
    let msg = woodo.get_message();

    println!("{}", msg);
}
