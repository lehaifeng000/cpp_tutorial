## 笔记
- 需要安装vcpkg，并使用vcpkg安装curl
- 或者自行安装openssl和libcurl

- 需要加编译选项
```bash
cmake -DCMAKE_TOOLCHAIN_FILE=/xxx/vcpkg/scripts/buildsystems/vcpkg.cmake ..
```