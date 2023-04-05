/*  This is the entrypoint of the fuzzer
    So far this function gathers the program arguments and 
    distributes tasks accordingly
*/ 
use std::env;

fn main() {
    // handles arguments and prints them
    let args: Vec<String> = env::args().collect();
    dbg!(args);
}
