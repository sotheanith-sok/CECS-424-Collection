const fs = require('fs');
const readLine=require('readline');
const stream=require('stream');

const file = process.argv[2];
const regex = /^[$][*]*([0-9]|(([1-9][0-9]?[0-9]?)([,][0-9][0-9][0-9])*))([[.][0-9][0-9]]*)?$/gm;

let instream=fs.createReadStream('./'+file);
let outstream= new stream;
let rl = readLine.createInterface(instream, outstream);

let arr =[];

rl.on('line', (line)=>{
   let result = regex.test(line);
   if(result){
       console.log('Matched: '+line);
   }else{
       console.log('Not Matched: '+line);
   }
});