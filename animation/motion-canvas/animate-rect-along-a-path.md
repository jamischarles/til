# How to animate a rect box along a path in Motion Canvas



You can use a `path` component or `bezier` curve component...

Path allows "svg" path element and allows infinite customizability...

A bezier curve is nice because you only have to provide 4 points and it'll fill in the rest of the line with math.


```js 
  const progress = createSignal(0);
  const bezierRef = createRef<CubicBezier>();

  // path from bezier curve...
  view.add(
    <>
      <CubicBezier
        ref={bezierRef}
        lineWidth={6}
        stroke={'lightseagreen'}
        p0={[-300, 176]}
        p1={[-630, 65]}
        p2={[-652, -120]}
        p3={[-574, -496]}
      />,
      <Rect
        size={26}
        fill={'lightseagreen'}
        position={() => bezierRef().getPointAtPercentage(progress()).position}
        rotation={() => bezierRef().getPointAtPercentage(progress()).tangent.degrees}
      />,
    </>
  );

  // yield* progress(1, 2).to(0, 2); // start to end to start
  yield* progress(1, 2);//.to(0, 2);
```
