<img src="./assets/bread.svg" width=100 height=100>

# Virus del pan que habla.
Es un pseudo-virus creado por Juanjoxy1987, originalmente escrito en Python y re-escrito en C++ por yaelmndrp.

### ¿Que hace?
Esta cosa es un diskbomb. Genera archivos basura contando el chiste del pan que habla (un muy mal chiste por cierto).

## ¿Como lo corro?
> [!WARNING]
> Es recomendable correr **cualquier version** de esta cosa en una VM.

Para correr este diskbomb necesitarás varias dependencias según la version que quieras correr.

## Python

> **NOTA:** Esta version del virus es mas lenta y genera menos archivos basura. Podría decirse que es la versión mas "segura".

Para esta version solo necesitas Python 3+. Para correrlo:

```bash
python3 panquehabla.py
```

## C++

> **NOTA:** Esta es la version mas nueva y activamente desarrollada del virus. Es mas peligrosa que la version con Python y genera mas archivos basura. También es mas rápida y en un futuro puede hacer llamadas de sistema en Windows, Linux y macOS.

### Binarios pre-compilados
Puedes descargar binarios del virus precompilados para macOS y Windows en la parte de **releases**. Todos los binarios son para la arquitectura ARM64 (`mac-os-aarch64` y `aarch64-windows-gnu`). El binario para macOS fue compilado usando **Xcode Command Line Tools** (`clang++`) de forma nativa, mientras que el binario de Windows fue *cross-compiled* desde macOS usando `zig`.

El binario de macOS fue compilado y probado en `macOS Tahoe 26.5.2` y **puede no funcionar en versiones anteriores del sistema**. Un binario para Linux esta planeado para el futuro, sin embargo, el código puede ser compilado en Linux y funciona en su estado actual.

### Compilar
Para compilar el programa, depende de que en que entorno estes.

<details>
<summary>macOS</summary>

Para compilar el virus en macOS necesitas tener instalado **Xcode Command Line Tools**. Para hacer esto, ejecuta el comando:

```zsh
xcode-select --install
```

Ahora puedes clonar este repositorio, ir a la carpeta `source` y ejecutar ahi:

```bash
clang++ -std=c++17 panquehabla.cpp -o panquehabla
```

Tambien puedes compilar el binario para Windows (aarch64) usando `zig`. Para esto vas a necesitar `brew`. Instala `zig` usando `brew`:

```zsh
brew install zig
```

Y compila para Windows (aarch64):

```zsh
zig c++ panquehabla.cpp -o panquehabla.exe -target aarch64-windows-gnu
```

</details>

<details>
<summary>Windows</summary>

Descarga [zig](https://ziglang.org/download/) y extrae el .zip y agrega la carpeta extraída a las variables de entorno (PATH). Después de eso clona este repositorio y sobre la carpeta `source` ejecuta:

```zsh
zig c++ panquehabla.cpp -o panquehabla.exe
```

</details>
