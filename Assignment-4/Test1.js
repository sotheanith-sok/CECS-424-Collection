let x = 1;
let y = 2;
function add(){
    x=x+y;
}
function second(a){
    let x = 2;
}
function first(){
    let y =3;
    second(add);
}
first();
console.log(x);