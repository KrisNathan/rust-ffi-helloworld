#[no_mangle]
pub extern "C" fn add(left: isize, right: isize) -> isize {
    left + right
}

#[no_mangle]
pub extern "C" fn hello_from_rust() {
    println!("Hello from rust");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let result = add(2, 2);
        assert_eq!(result, 4);
    }
}
