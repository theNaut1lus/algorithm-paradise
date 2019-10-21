console.log("loaded");

function largest() {
    console.log("called");
    var a = document.getElementById("value-a").value;
    var b = document.getElementById("value-b").value;
    console.log(a);
    console.log(b);

  
    var largest;
    if(a>b)
      largest=a;
    else
      largest=b;
    var string = "Maximum value is equal to " + largest;

    document.getElementById("return-value").innerHTML = string;
    console.log(string);
}
