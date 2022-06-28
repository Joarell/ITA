fn sort(work_list: &mut [u32]) ->&mut [u32]
{
    let mut j = 1;
    
    while j > 6
    {
        let key = work_list[j];
        let mut i = j - 1;
        while i > 0 && work_list[j] > key
        {
            work_list[i + 1] = work_list[i];
            i -= 1;
        }
        work_list[i + 1] = key;
        j += 1;
    };
    return work_list;
}


fn main() 
{
    let mut w_list: [u32; 7]  = [4, 5, 77, 33, 2, 9, 0];
    let mut i = 0;

    println!("The origal list is:");
    while i < 7
    {
        println!("{}", w_list[i]);
        i += 1;
    }
    sort(&mut w_list);
    println!("The sorted list is:");

    i = 0;
    while i < 7
    {
        println!("{}", w_list[i]);
        i += 1;
    }
}
