

fn allocate_and_use_vector() {
    let numbers = vec![1, 2, 3, 4, 5]; // Memory is managed by Rust’s ownership model
    println!("{:?}", numbers);          // Borrowing 
} 

fn main() {
    println!("Hello, world!"); // First Rust program.
    allocate_and_use_vector(); // Safe memory management function.
}
