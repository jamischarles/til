# Turbo repo team interview


## Days before
- algo

- Dropbox pracitce algo


Determine efficiently if a folder has changed. 

Time stamp and size diff. 

The if those fail do a hash compare as a last resort. 

Look at algo of scheduling code. Try to
Calculate big O of it and think of algos that can improve it 


Review stripe algo. 
Cache busting algos. 
File access algos. 

Content CDN algos. 

Calendar algo 


## What problems is Turborepo trying to solve?
`Turborepo is a high-performance build system for JavaScript and TypeScript codebases.`
-What are the engineering challenges?
- Q: What 

## How can my unique skills & talents help provide value to this team (and make their lives easier?)?
- devrel work
- ci & testing
- ease into issues work and more complex work & troubleshooting. 
- Docs, clarity, demos. 
- Codemods. Ast. Diff tooling. 

I could start out as devrel and then ease into more repo work...
Be active in the discussions board...


### Things to highlight about myself (I'm scrappy)
- I'm a generalist & solver.
- I love debugging across systems. I really like getting my hands dirty to understand the pieces better. Eager to learn more parts of the stack.
- I love being able to take ownership of a problem / domain
- I'd love some mentorship across any of the following: 
    - product / project decisions
    - how to make sound technical decision amid ambiguity
    - staff/principal level engineering decisions. Where and how to draw boundaries across problem & solution spaces well
- Currently reading books on product & project management to round out my decision making ability better and managing risk
- Care deeply about good DX (dev experience) and UX
- I've spent a lot of time with metrics and getting meaningful proxies for things like app health
- Love teaching & speaking & presenting. I have 3 courses online (React, ESLint, Redux).


Finally
- I crave growth across some vertical. Whether it's technical, or product, or decision making.
- I like operating 1-2 steps outside of my experience and comfort area 
- I like having loose direction "solve X" and then being able to bounce off / collaborate on where the problem & solution boundaries are and setting appropriate appetite and scope for the size & duration of the problem & investment.


## Questions to answer
- how does Turbo cache things locally? Or does it just do this for the network?
Q: How does it skip running those build tasks again?

Q: does it look at sources? See what tasks affect what files?
Q: Attach itself to the process?🇶🇦

## Research:
- Semaphore 
- mutex lock

## TODO Build:
- read a bunch of files. Then perform some operation
	- use a mutex? Would love if we could fork & thread into the processing, but
	the resulting graph should be shared.


## Algo learning:
- lots of inserts, few reads? Use Linked list
- lots of read (at address), few inserts? Use array.


- Simple search O(n)
- Binary Search O(log n)


Q: Can we do a dry run first and build a graph of necessary operations? BFS?
