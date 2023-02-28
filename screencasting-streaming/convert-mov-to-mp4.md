# How to convert a .mov (quicktime) file to .mp4 on mac

You'll need ffmpeg 
`brew install ffmpeg`

Shrinks the size down a lot too (!!)
`ffmpeg -i my-video.mov -vcodec h264 -acodec mp2 my-video.mp4`

https://mrcoles.com/convert-mov-mp4-ffmpeg/
