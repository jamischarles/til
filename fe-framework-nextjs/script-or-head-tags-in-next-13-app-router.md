# Should I use <script> or <head> tags in Next.js 13+ app router?

tl;dr Don't add your own `<head>` and `<script>` tags in Next.js app router RSCs. Use `<Script>` instead.

No.

In basic terms, Next.js does a lot of magic with the `<head>` tag and `<script>` tags. You're far better off using the metadata api instead of adding your own `<head>` in `layout.tsx`.


Use `<Script>` nextjs component and use the `strategy` attribute to control when & where the script is loaded (can do inline too). It won't give as much finegrained control over where exactly the script goes but it gets pretty close.

When I used `<script>` tags they seemed to run fine, but I'd see hydration errors like `Extra attributes from the server: nonce`. 

## Open questions:
* ?: Can you control the load order of specific scripts more finely when using <Script> tags in next.js?

## More reading
https://github.com/vercel/next.js/discussions/50772#discussioncomment-7993642
