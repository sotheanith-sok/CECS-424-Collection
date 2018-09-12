//author: Sotheanith Sok
//Imports
const fs = require('fs');
const readline=require('readline');

//Define regex
const regex = new RegExp('^\\$\\**(0|(([1-9][0-9]?[0-9]?)(,[0-9][0-9][0-9])*))((\\.[0-9][0-9])*)?$');

//Create read stream
const rl = readline.createInterface({
  input: fs.createReadStream('./'+process.argv[2]),
  crlfDelay: Infinity
});

//Compare and print out result
var result;
rl.on('line', (line) => {
     result = regex.test(line);
    if(result){
       console.log('Matched: '+line);
    }else{
       console.log('Not Matched: '+line);
    }
});