console.log("i. Floating point number converter.\n");
let pi = 3.1;
console.log(pi+" -> "+convertToFloat(pi))

// console.log("\nii. Floating point number enumeration.\n");
// let fp = 0.0;
// let i = 0;
// while (fp < 1.4E-44) {
//     console.log( ++i << "th number: " << (fp = nextFloat(fp)));
// }








function convertToFloat(number) {
	let sign = (number ) >> 31;
	let exp = (number &7f800000,16)) >> 23;
	let mantissa = (number);
    return "(" + sign + ", " + exp + ", " + mantissa + ")";
}

function nextFloat(number) {

}

function countBetween(lower, upper) {

}