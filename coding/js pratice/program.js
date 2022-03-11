document.writeln('Hello, world!');

//meth is used to define new methods 
Function.prototype.meth = function (name, func) 
{
this.prototype[name] = func;
return this;
};

/*dont use these block comments!!!*/
//
 