use std::io;

fn main() {
    let mut radius:f32 = 0.0;
    let mut perimeter:f32 = 0.0;
    let mut area:f32 = 0.0;
    let mut input = String::new();
    
    println!("Enter radius: ");
    io::stdin().read_line(&mut input).expect("Not a valid string");
    radius = input.trim().parse().expect("Not a valid number");
    
    perimeter = 2.0 * 3.14 * radius;
    area = 3.14 * radius * radius;
 
    println!("The circumference is: {0}, and the area is: {1}", perimeter, area);
}
