# How do I prevent writing / changing a property or an object and make it readonly (from the outside at least)

## Freeze
`Object.freeze(obj)` - shallow freeze. Prevents extending the object, or removing props at the top level. Allows child arrays to be added to via .push() but prevents `obj.arr = []` to replace existing object 

## Object.defineProperty
Provides a getter only for a private (property). Cannot be modified, though logger._buffers.events.push() can be used  

Exposes a local closure nicely then makes it only accessible as a getter (means you have to access the prop exactly): `_buffers.events` etc.
```js
   Object.defineProperty(logger, "_buffers", {
      get: function() {
      return {
        events, //[]
        tracking, //[]
        metrics, //[]
      }
      },
   });

```
^ Way can cause some issues with stale references. Much better to do it this way... here:

Though this is actually better and more granular:
```js

    // exposed primarily for testing
    // exposes these buffer as readonly getters only 
    __buffer__: {
      get events(){
        return events;
      },
      get tracking() {
        return tracking;
      },
      get metrics() {
        return metrics;
      },
    },
  };

  // mark the __buffer__ prop as readonly
  Object.defineProperty(logger, "__buffer__", { writable: false });
```

## More reading:
http://nicholasjohnson.com/blog/javascript-getters-and-setters/
https://javascript.info/property-accessors
