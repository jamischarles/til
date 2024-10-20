## TODO:

- Gradually copy over the info here...
- make small zettelcasten type notes in a "sound mixning" folder
  https://roamresearch.com/#/app/Mordor/page/dEmCEc4ta

Most of the stuff here is for Reaper but the principles will apply to any sound
mixing process.

## Reaper is a DAW

## Normalizing in Reaper

(right click on track and `item processing->"normalize"`)

This takes the highest volume of the track, and makes that 0db (dbfs aka 0db full scale)

Then "bring down to -3db" means dragging that top 0db level down to -3db (quieter x2)

## Gate

If you get clipping at the end of the word (like quiet end), increase release

Look at sound or noise gates... and Hysteresis

**Reaper for Voice Actors Tutorial Series**
https://www.youtube.com/playlist?list=PL32A31658187EFFE7

## Compression

**Compression terms**
https://reaperaccessibility.com/index.php/The_fast_and_easy_way_to_understand_compression_and_reaComp_accessibility

https://forum.cockos.com/showpost.php?p=278807&postcount=247 - **How a compressor works** - Inside the compressor is a little gremlin that turns down the volume. That's it. Really. HOW and WHEN he turns down the volume is determined by the instructions you give him with the compressor controls. - `THRESHOLD` sets the gremlin's alarm clock. It is what tells him to wake up and start doing what he does, i.e. turning down the volume. If you set the threshold at -10dB then the gremlin just sleeps his lazy ass off, doing nothing at all until the signal level goes above that threshold. A signal that peaked at anything lower than -10dB will never wake up the gremlin and he'll never do a damn thing. (see why presets could be problematic?) But once the signal goes above the threshold, the gremlin rips off the sheets and springs into explosive action. - `RATIO` decides HOW MUCH the gremlin turns down the volume, and it acts completely in relation to the threshold. If the ratio is set to 2:1, and the signal goes ABOVE the THRESHOLD, then the gremlin will cut that signal in half. For example, with -10 threshold, a signal that hits -5 (which is 5dB ABOVE -10) will be turned down 2.5dB for an output of -7.5dB. Negative values can be confusing if you're not used to thinking in such terms so re-read and ask questions if you're stuck. This is important, and it does get instantly easier once you "get" it. - `ATTACK` is like a snooze button for the Gremlin's alarm clock. It lets the gremlin sleep in for a little while. So if the THRESHOLD is set for -10dB, and the ATTACK is set to, say, 50ms, then once the signal goes above -10dB, the gremlin will let the first 50ms pass right by while he rubs his eyes and makes coffee. An attack of zero means the gremlin will respond instantly, like a hard limiter, and will allow nothing above threshold to get through unprocessed. Any slower attack means the gremlin will allow the initial "punch" to "punch through" and will only later start to act on the body of the signal. - `RELEASE` is like a mandatory overtime clock for the gremlin. It tells him to keep working even after the signal has dropped below threshold. A release of zero means strict Union rules-- once the signal drops below threshold, the whistle blows, and the gremlin drops whatever he's doing and goes back to sleep. But a slower release means the gremlin keeps compressing the signal even after it has dropped below the threshold. This can lead to smoother tails and less "pumping" or "sucking" artifacts that come from unnatural and rapid gain changes.

- [[Sound mixing]][[Reaper]]
  Compression basics
  How To Use Compression - Detailed Tutorial
  https://www.youtube.com/watch?v=yi0J9JsRdI4 - Where possible, don't compress solo. Do it in comparison to BG music or other tracks you have. EQ etc you can do solo.

## DB values

- [[Sound mixing]]
  db values

Src: https://pulsarinstruments.com/en/post/understanding-decibels-decibel-scale-and-noise-measurement-units

    - ## Summary:
        - For an amplifier, `0db` is maximum volume you can have WITHOUT distorting the sound
        - When `recording audio` set at around `-10db to -12db`
        - For `delivery (output)` set as close to `0db` as you can (slightly below) (youtube). This will loud enough w/o any distortion
        - digital audio describes the current position of a signal with numbers, and when you get up to 0 the numbers have run out, it's as high as you can go, so the same max number just keeps repeating and the peak of your waveform gets chopped clean off, which creates the sound of distortion
        - So you want to avoid hitting it so that your audio doesn't distort, and you need to keep at least 10db of a buffer away from it so that a sudden loud part doesn't ruin your recording.
    - TODO
        - [[TODO]] Watch this https://nofilmschool.com/2017/06/watch-where-should-your-levels-be-when-recording-audio
        - [[TODO]] Watch: https://www.youtube.com/watch?v=oce3YfLVpc4

    - **Notes**

When you measure noise levels with a sound level meter, **you measure the intensity of noise called decibel units** (dB).

a **logarithmic scale is used**, using 10 as the base, rather than a linear one. This scale is called the `decibel scale`.

A `logarithmic scale` is used when there is a large range of quantities. It is based on orders of magnitude, rather than a standard linear scale, so each mark on the decibel scale is the previous mark multiplied by a value.

**Log scale:**
0db - silence
10db - 10x louder than 0db
20 db - 1000x louder than 0db

![](https://firebasestorage.googleapis.com/v0/b/firescript-577a2.appspot.com/o/imgs%2Fapp%2FMordor%2FOaNLZ8gzNh.png?alt=media&token=ec75c936-9726-4c9c-a386-74f2670e744d)

**Common sound values:**

        - Near-total silence - 0 dB
        - A whisper - 15 dB
        - A library - 45 dB
        - A normal conversation - 60 dB
        - A toilet flushing 75-85 dB
        - A noisy restaurant - 90 dB
        - Peak [noise on a hospital ward](https://pulsarinstruments.com/en/applications/hospital-noise) - 100dB
        - A baby crying - 110 dB
        - A jet engine - 120 dB
        - A Porsche 911 Carrera RSR Turbo 2.1 - 138 dB (see [YouTube video](https://youtu.be/wrKyL2KQ_OU) of Porsche car noise tests using the [Pulsar Nova Sound Level Meter](https://pulsarinstruments.com/en/product/pulsar-nova-high-performance-decibel-meters-models-45-46))
        - A balloon popping - 157 dB
    - Digital audio uses dbfs. Fs means full scale (not sure why but there you go). With digital audio, once a signal gets up to 0db it can't go past it, and the signal distorts. This happens because digital audio describes the current position of a signal with numbers, and when you get up to 0 the numbers have run out, it's as high as you can go, so the same max number just keeps repeating and the peak of your waveform gets chopped clean off, which creates the sound of distortion.
    - So you want to avoid hitting it so that your audio doesn't distort, and you need to keep at least 10db of a buffer away from it so that a sudden loud part doesn't ruin your recording.
    - Also, though, the analog stages that your signal goes through, such as your preamps and the analog parts of your a/d converter are optimized to work at a certain level. This level is the zero of the analogue world, 0db**vu**. At this point analoge gear is designed to have its sweetspot, where the signal is high above the noise of the circuit, but not so high that it starts to distort. However unlike digital, it's alright if your signal goes over 0dbvu a bit because the distortion is usually gradual, and sometimes kind of nice sounding. This 0dbvu usually translates to around -18dbfs, but different converter designs can be calibrated to different levels. So you want to have your analogue levels around this level while your recording so that you get the best sound out of your gear.
    - I'm not really sure why the digital scale has to be negative, but that it how it is and there is no option to use another scale.

https://forum.cockos.com/showthread.php?t=113067
