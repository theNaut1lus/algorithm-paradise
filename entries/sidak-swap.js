console.log("loaded");

function swap() {
    console.log("called");
    var a = document.getElementById("value-a").value;
    var b = document.getElementById("value-b").value;
    console.log(a);
    console.log(b);

    var temp = b;
    b = a;
    a = temp;

    console.log(a);
    console.log(b);

    var string = "Value of A: " + a + " || Value of B: " + b;

    document.getElementById("return-value").innerHTML = string;
    console.log(string);
}