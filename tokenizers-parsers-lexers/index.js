import { highlightTree, classHighlighter } from "@lezer/highlight";
import { parser } from "./json.js"; // generated JSON parser from the JSON grammar

// TODO: look into using cursor, or syntax

// TODO: Read this
//https://joelgustafson.com/posts/2022-05-31/syntax-highlighting-on-the-web
//AMAZING: https://lezer-playground.vercel.app/

// const result2 = jsonHighlighting("{test: 'hi'}");
//

// generates a lezer tree

// const source = "{test: 'hi'}";
const source = '{"test": "hi", "count": 5}';
const tree = parser.parse(source);

console.log("result", tree);
// console.log("result", JSON.stringify(result, null, "\t"));

/* OUTPUT:
result Tree {
  type: NodeType {
	name: 'JsonText',
	props: [Object: null prototype] {},
	id: 1,
	flags: 1
  },
  children: [ TreeBuffer { buffer: [Uint16Array], length: 12, set: [NodeSet] } ],
  positions: [ 0 ],
  length: 12,
  props: null
}
*/

// Attach syntax highlighting info to the tree
// Create a highlighter (we don't need to, because the parser generator already made us one )
// const highlighter = tagHighlighter([{ tag: t.name, color: "#a8a8a8" }]);

// console.log("highlighter", jsonHighlighting);
// Q: Can we just use this to build our HTML snippet up real quick?
const outputHTML = [];
let pos = 0; // need to keep cursor position, because it'll skip to only the token
highlightTree(tree, classHighlighter, (from, to, className) => {
  // catch cursor up to where the token is
  if (pos < from) {
    outputHTML.push(source.slice(pos, from));
  }

  if (className === "tok-propertyName") {
    outputHTML.push(
      `<br>  <span class="${className}">${source.slice(from, to)}</span>`
    );
  } else {
    outputHTML.push(
      `<span class="${className}">${source.slice(from, to)}</span>`
    );
  }

  const token = source.slice(from, to);
  console.log("token", token);
  console.log("from", from);
  console.log("to", to);
  console.log("className", className);
  pos = to; // catch the cursor up
});

console.log("outputHTML", outputHTML.join(""));

document.querySelector("#content").innerHTML = outputHTML.join("");

console.log("tree2", tree);

// get a treeCursor at top of tree
const cursor = tree.cursor();
console.log("curs", cursor);

const syntaxNode = tree.topNode;
console.log("syntaxNode", syntaxNode.firstChild);
