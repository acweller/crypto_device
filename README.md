Crypto Device
=============

Módulo Linux para Dispositivo de Caractere com Criptografia.

Descrição
---------

Código fonte para a criação de dois drivers para o Linux, Kernel 3.x:
- scull - Dispositivo virtual do tipo caractere que armazena textos criptografados.
- hello - Módulo básico (apenas retorna mensagens via log "/var/log/syslog").

Arquivos
--------

Para criação e carga do módulo 'scull':
- scull.h: Definições para o módulo.
- main.c: Codificação do módulo.
- Makefile: Arquivo de configuração do make.
- scull_load: Script de carga dos dispositivos (/dev/scull0 a /dev/scull3).
- scull_unload: Script de encerramento dos dispositivos.

Para criação do módulo 'hello' (Subdiretório "hello" possui código para a criação de um módulo básico):
- hello.c: Código do módulo exemplo.
- Makefile: Arquivo de configuração do make.

O Subdiretório 'Apresentacao':
- PDF com a apresentação.
- Arquivos TeX para criação do PDF.
- O subdiretório 'img' contém as imagens utilizadas na apresentação.

Referências
-----------

* Baseado no código do livro "Linux Device Drivers" de Jonathan Corbet, Alessandro Rubini e Greg Kroah-Hartman.
  * [PDF do livro](http://lwn.net/Kernel/LDD3/ "Linux Device Drivers") 
  * [Códigos originais do livro](http://shop.oreilly.com/product/9780596005900.do "Linux Device Drivers") 
  * [Códigos atualizados para o Kernel 3.x](https://github.com/duxing2007/ldd3-examples-3.x "ldd3-examples-3.x") 
  * Outros Forks: 
[(1)](https://github.com/jesstess/ldd3-examples "jesstess"),
[(2)](https://github.com/kphuang/ldd3-examples/tree/jesstess "kphuang") e
[(3)](https://github.com/kphuang/ldd3-examples/tree/patch-1 "patch-1")

* Códificação da Criptografia XOR foi baseado no seguite artigo:
  * [C Tutorial - XOR Encryption](http://forum.codecall.net/topic/48889-c-tutorial-xor-encryption/ "Autor: ShadenSmith")

Obs.: Outras referências foram acrescentadas ao arquivo "Apresentacao/01LinuxDevices.pdf".

