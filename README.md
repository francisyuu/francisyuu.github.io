# francisyuu.github.io
## Introduction
This is the personnal website of francisyuu
# My Config
## Some basic rules :  
- Avoid using spaces in directories/paths
- Use English whenever possible
---
## Windows basic
- Key mapping: [SharpKeys](https://github.com/randyrants/sharpkeys/releases)
- Screen recording: [Evcapture](https://www.ieway.cn/evcapture.html)
---
## Linux basic
- Key mapping: [Linux通用键位修改（中）-实际操作](https://www.bilibili.com/read/cv5156572/)
- Dotfiles managment: [chezmoi](https://www.chezmoi.io/quick-start/)
---
## VS Code
### HDL Extensions
I mainly use Quartus and Vivado for FPGA developments, use VScode just for coding, so I didn't have tools installed for synthesis and timing simulation
- [TerosHDL](https://terostechnology.github.io/terosHDLdoc/)
    Contains most of the Verilog/SV tools, configure it to work with vivado:
  - Tool configuration-Linter settings-Verilog/SV linter: Vivado(xvlog) 
  - Tool configuration-Vivado-Installation path-'your path'
  - Tool configuration-Vivado-Additional arguments -relax 
    - used to avoid unnecessory error reports, see more configuration in [xilinx docs](https://docs.xilinx.com/r/en-US/ug900-vivado-logic-simulation/xelab-xvhdl-and-xvlog-xsim-Command-Options)
  - Vivado-Tools-Settings-Text Editor-Custom Editor: 'cmd /S /k "code -g [file name]:[line number]" ' 
    - If you use 'Code.exe [file name] -[line number]' directly, it causes the page to freeze, [solution](https://www.zhihu.com/question/544908819)
- [Bracket Pair Colorization Toggler](https://marketplace.visualstudio.com/items?itemName=dzhavat.bracket-pair-toggler)
- [Code alignment](https://github.com/cpmcgrath/codealignment)
- some tutorials  
  - [vs code 进行硬件设计实用插件-语法高亮、语法检查、自动例化、Testbench生成、对齐、代码块等](https://blog.csdn.net/lum250/article/details/114662929)
  - [用VSCode编辑verilog代码、iverilog编译、自动例化、自动补全、自动格式化等常用插件](https://zhuanlan.zhihu.com/p/338497672)
- [Vim](https://github.com/VSCodeVim/Vim/blob/HEAD/ROADMAP.md)
- [Waveform Render](https://github.com/wavedrom/wavedrom)
---
## VIM
### Gvim for Windows
- [Install Git](https://zhuanlan.zhihu.com/p/242540359)
- [Install Gvim and Vundle](https://blog.csdn.net/qq_42240380/article/details/122406058)
- see _vimrc for configure details
- [tabset](https://blog.csdn.net/shell_picker/article/details/6073125)
### vim for Linux
- [vim-plug](https://github.com/junegunn/vim-plug)
- [ctags](https://www.zhihu.com/question/35808196)
### Official Doc
- [English](https://vimdoc.sourceforge.net/htmldoc/help.html)
- [Chinese](https://vimcdoc.netlify.app/help.html)
---
## Shell
