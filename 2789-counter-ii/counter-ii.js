/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var initial=init
    return{
    increment: function()
    {
        initial+=1;
        return initial
    },
    decrement: function()
    {
        initial-=1;
        return initial
    },
    reset: function()
    {
        initial=init;
        return initial
    }
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
