### Build cutemarked:

```bash
git clone https://github.com/coolshou/CuteMarkEd-NG.git
cd CuteMarkEd-NG
git submodule init
git submodule update
mkdir build
cd build
qmake ../CuteMarkEd.pro
make
```

the exe file "cutemarked" will be in folder  build/app/

### debian/ubuntu package:

```bash
cd CuteMarkEd-NG
DEB_BUILD_OPTIONS=nocheck dpkg-buildpackage -b --no-sign
```
