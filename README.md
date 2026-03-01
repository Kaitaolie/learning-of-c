# learning-of-c

A repository to record my C learning: notes, exercises and example programs.


## Tip

- ~~If you use Git through Clash, enable TUN mode before using `git`.~~*(Throgh I worte this tip not long ago, while struggling to resolve the JSON issue, I updated Clash and found that whether TUN mode may interfere with the host-to-WSL network mapping on Windows, it can even cause git to fail. )*

## Learning Log

- Feb. 23
     >Due to an oversight while reading the official documentation on configuring C in VSCode, I missed a key note stating: "Starting November 3, 2024, MSYS2 has disabled wildcard support for mingw-w64 by default. This affects how wildcards such as '*.cpp' are handled in build commands." As a result, I struggled through a difficult JSON configuration process. Eventually, with help from Jacktao and Jiangtao, the issue was finally resolved. We ended up adopting a WSL + VS Code approach and configuring GCC to address the wildcard problem. The process was somewhat involved, so I won't delve into the details here.
