# How to convert 'file:/' fileUrl to normal node path

```
if (callingFilePath.startsWith("file:")) {
  callingFilePath = url.fileURLToPath(callingFilePath);
}

```
