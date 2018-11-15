main()

function main(){
    console.log("i. Floating point number converter.");
    let pi = 3.14159265358979;
    console.log(pi + " -> " + convertToFloat(pi))

    console.log("\nii. Floating point number enumeration.");
	let fp = 0.0;
	let i = 0;
	while (fp < 1.4E-44)
	{
		console.log(++i + "th number: " + (fp = nextFloat(fp)));
	}

    console.log("\niii. Floating point number counting");
	let posFPs = countBetween(0.0, Number.MAX_VALUE);
	let zeroOneFPs = countBetween(0.0, 1.0);
	console.log("Number of positive floating point numbers: " + posFPs);
	console.log("Number of floating point numbers between 0 and 1: " + zeroOneFPs);
	console.log("Proportion (# of 0~1) / (# of positive): " + ((zeroOneFPs/posFPs) * 100.0) + "%");
}

function convertToFloat(number) {
    let view = new DataView(new ArrayBuffer(4));
    view.setFloat32(0, number);
    let binary=view.getUint32(0).toString(2);
    while(binary.length<32){
        binary="0"+binary;
    }
    let sign = parseInt(binary.substring(0,1),2);
    let exp =  parseInt(binary.substring(1,9),2);
    let mantissa = parseInt(binary.substring(9),2);
    return "(" + sign + ", " +exp + ", " + mantissa + ")";

}

function nextFloat(number) {
    let view = new DataView(new ArrayBuffer(4));
    view.setFloat32(0, number);
    let binary=(view.getUint32(0)+1);
    view.setUint32(0,binary);
    return view.getFloat32(0);    
}

function countBetween(lower, upper) {
    let view = new DataView(new ArrayBuffer(4));
    view.setFloat32(0, lower);
    let l=view.getUint32(0);
    view.setFloat32(0,upper);
    let u = view.getUint32(0);
    return u - l;
}
