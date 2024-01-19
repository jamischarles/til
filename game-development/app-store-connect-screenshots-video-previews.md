# How to prep screenshots and previews for app store release on app store connect

## How to prep the video previews for the right resolution
1. Record with screen recorder
2. In quicktime, trim it down to 29s
3. Use ffmpeg to change the dimensions (will stretch but will likely be good enough)
(if more control needed, consider using vlc instead...)

For 5.5" iphone (WORKS!!!)
`ffmpeg -i input.mp4 -vf scale=1920:1080 -ar 44100 -ab 256k -r 30 -crf 22 -profile:v main -pix_fmt yuv420p -y -max_muxing_queue_size 1000 output.mp4`
^ sets scale, and framerate at 30fps (limit set by app store), and adds blank audio track

For 6.5" iphone
`ffmpeg -i input.mp4 -vf scale=1920:886 -ar 44100 -ab 256k -r 30 -crf 22 -profile:v main -pix_fmt yuv420p -y -max_muxing_queue_size 1000 output.mp4`
^ sets scale, and framerate at 30fps (limit set by app store), and adds blank audio track

^^
https://www.vinzius.com/post/app-store-previews-guidelines-conversion-tips-ffmpeg/

## Apple requirements
- 30s max (make it 29s to be safe)
- must have audio track (even if silent)
- must be correct dimension


Use ffmpeg to cut it up 
https://superuser.com/questions/138331/using-ffmpeg-to-cut-up-video

`ffmpeg -ss 30 -i input.mp4 -c copy -t 10 output.mp4`
Start at 30s and go for 10s duration

Apple's specs of what they allow (dimensions and size and fps etc)
https://developer.apple.com/help/app-store-connect/reference/app-preview-specifications


