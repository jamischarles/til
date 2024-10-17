# How to animate a line with bubbles in motion canvas 


Setup
```js
  // fixed
  // text prop. Need to be cast to a string
  view.add(
    <Node position={[752, -406]}>
      {4}
      <Txt
        ref={countDownRef}
        fill="#fff"
        fontFamily={FONT_FAMILY}
        fontSize={80}
      >
        {String(globalTime)}s
      </Txt>
    </Node>,
  );


  view.add(
    <Rect
      alignSelf="start"
      // direction="row"
      lineWidth={4}
      ref={marbleLineRef}
      // size={300}
      // position={[-552, 0]}
      topLeft={[-810, 0]}
      // anchorPosition={new Vector2(-552, 0)}
      height={4}
      width={10}
      stroke={"darkgray"}
      smoothCorners={true}
      cornerSharpness={0.7}
    />)


  // line that goes through the marbles
  view.add(
    <Line
      ref={marbleLineRef2}
      points={[
        [-810, 0],
        // [-805, -454],
        // [275, 0],
      ]}
      stroke={"darkgray"}
      lineWidth={8}
    />,
  );


```


```js

  yield* chain(
    // growWidthRight(marbleLineRef(), 50, 1),
    // growWidthRight(marbleLineRef(), 100, 1),
    growWidthRight(marbleLineRef(), 500, 1),
    addCircle(view, marbleLineRef), // this won't execute at call time...
    growWidthRight(marbleLineRef(), 700, 3),
    addCircle(view, marbleLineRef), // this won't execute at call time...
    growWidthRight(marbleLineRef(), 700, 3),
    waitUntil("event"),
    addCircle(view, marbleLineRef), // this won't execute at call time...
  )
```



```js

  const w = 500;

  // reusable animations
  /** Anchors on left, and grows to the right. Call this with a yield */
  function* growWidthRight(ref, growPxAmount, duration): ThreadGenerator {

    // yield* all(
    // yield ref.width(ref.width() + growWidthRight, duration);
    const startWidth = ref.width() || 30;
    console.log("width:", ref.width())
    console.log("growPxAmt:", growPxAmount)
    // yield* all(
    //   ref.width(w + growPxAmount, duration),
    //   ref.topLeft([-810, 0], duration), // Fixme: Deduce this automagicalyl... we just don't want it to move...
    // )

    yield* all(
      tween(duration, value => {
        // console.log('value', value); // value is amount between 0 and 1 of where it's at or should be at...
        // console.log('ref.width', ref.width())
        ref.width(map(startWidth, startWidth + growPxAmount, value));
        // ref.topLeft([-810, 0], duration); // Fixme: Deduce this automagicalyl... we just don't want it to move...
      }),

      ref.topLeft([-810, 0], duration), // Fixme: Deduce this automagicalyl... we just don't want it to move...
    );

    // yield;
    // yield;
    // )
  }

```


```js
function* addCircle(view, lineRef) {
  const myCircle = createRef<Circle>();

  const xPos = lineRef().topRight().x

  view.add(
    // <Node ref={ref}>
    <Circle
      // try changing these properties:
      ref={myCircle}
      x={xPos}
      width={70}
      height={70}
      lineWidth={5}
      stroke="darkgray"
      fill={BG_COLOR}
    />
    // </Node>
  );

  // animate the entry

  // yield* tween(2, value => {
  //   // console.log('value', value); // value is amount between 0 and 1 of where it's at or should be at...
  //   // console.log('ref.width', ref.width())
  //   myCircle().width(map(0, 70, value));
  //   myCircle().height(map(0, 70, value));
  //   // ref.topLeft([-810, 0], duration); // Fixme: Deduce this automagicalyl... we just don't want it to move...
  // });

  // using * here stops the future animations after this. fascinating!!!!
  yield spring(PlopSpring, 0, 70, .5, value => {
    myCircle().width(value);
    myCircle().height(value);
  });


}

```

