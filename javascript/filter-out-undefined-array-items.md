# How to filter out undefined items in an array

Aka: How to turn a `sparse` array into a `dense` one
Sparse array


	return result.map(item=> 

       // in certain conditions we want to exclude an item from the result set
       but .map() can't do that. So we return `undefined` 
       if (item.isInvalid()) return undefined;

       return item;

	}).filter(i=>i); // filters out undefined items
