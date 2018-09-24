var g;

function B(a){
    var x;
    function A(n){
        g=n;
    };

    function R(m){
        console.log(x);
        x=Math.floor(x/2);
        if(x>1){
            R(m+1);
        }else{
            A(m);
        }
    }
    x=a*a;
    R(1);

};
B(3);
console.log(g);
