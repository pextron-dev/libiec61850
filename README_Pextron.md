# Build da libiec61850 e Wrapper .NET

## Pré-requisitos

- Visual Studio 2026 (x64)
- CMake
- PowerShell

Todos os comandos abaixo devem ser executados em um terminal PowerShell.

---

## Gerar a solução Visual Studio

Na pasta raiz da biblioteca (`libiec61850`):

```powershell
cmake -G "Visual Studio 18 2026" -A x64 -S . -B build
```

Este comando gera a solução e os projetos do Visual Studio na pasta `build`.

---

## Compilar a biblioteca

### Debug

```powershell
cmake --build build --config Debug --clean-first
```

Compila a biblioteca com símbolos de depuração (`.pdb`).

Arquivos gerados:

```text
iec61850.dll
iec61850.pdb
```

Os símbolos permitem depurar o código nativo da biblioteca durante a execução de aplicações .NET.

### Release

```powershell
cmake --build build --config Release
```

Compila a biblioteca em modo Release.

Os símbolos de depuração não são gerados para uso de desenvolvimento.

---

## Localização dos binários

Após a compilação Debug:

```text
$libiec61850FolderPath$/build/src/Debug
```

Nesta pasta estarão localizados:

```text
iec61850.dll
iec61850.pdb
```

---

## Disponibilizar a DLL para aplicações .NET

Adicionar a pasta contendo a DLL ao `PATH`:

```powershell
$env:PATH = "$libiec61850FolderPath\build\src\Debug;$env:PATH"
```

Alternativamente:

- Copiar a DLL para a pasta da aplicação.
- Copiar a DLL para `C:\Windows\System32`.

Para depuração, recomenda-se manter o arquivo `.pdb` junto da DLL.

---

## Limpar a solução

Remover completamente os arquivos gerados pelo CMake:

```powershell
rm -r -fo build
```

---

## Compilar a versão .NET

1. Abrir a solução localizada na pasta `dotnet`.
2. Selecionar a solução .NET.
3. Executar **Build Solution**.

A compilação gera a biblioteca C# que encapsula a biblioteca nativa.

---

## Utilização em outros projetos .NET

Para utilizar a biblioteca em projetos como Avalonia:

1. Copiar a pasta da solução .NET para o repositório do projeto.
2. Adicionar o projeto C# como dependência da solução.
3. Garantir que a `iec61850.dll` esteja acessível pelo sistema, seja via `PATH` ou na pasta de execução da aplicação.


## Utilização GOOSE

PS C:\Program Files\Wireshark> .\dumpcap.exe -D para identificar o numero da interface ethernet

---

## Gerar arquivos estáticos

Remover completamente os arquivos gerados pelo CMake:

```powershell
java -jar genmodel.jar
Usage: genmodel <ICD file>  [-ied  <ied-name>] [-ap <access-point-name>] [-out <output-name>] [-modelprefix <model-prefix>]
```

---


java -jar genmodel.jar .\IEDR550.icd -ied IEDR550 -ap accessPoint1

