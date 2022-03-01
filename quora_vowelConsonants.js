const count = (inputString) => {
    
    let vow = 0;
    let cons = 0;
    
    for(let i = 0; i < inputString.length; i++){
        let ele = inputString[i];
        if(ele == 'a' || ele == 'e' || ele == 'i' || ele == 'o' || ele == 'u')
            vow += 1;
        else
            cons += 1;
    };
    console.log(`${inputString}`)
    console.log(` ${vow} vowels present`);
    console.log(`${cons} consonants are present.`);
};

count("iamfine");
count("heythere");
count("hello");
