# Projeto – Métodos de Cálculo Numérico

Este projeto implementa três métodos numéricos para encontrar raízes da função:

- Método de Newton-Raphson
- Método de Newton Modificado
- Método da Secante

---

## 🎯 Objetivo

Resolver numericamente a equação de benchmark:
```
f(d) = d * tanh(d) - a
```
com `a`, `d₀` e `ε` fornecidos pelo usuário via terminal.

---

## ⚙️ Requisitos

Para executar este projeto, é necessário:

- **Windows 10 ou 11**
- **WSL (Windows Subsystem for Linux)** instalado com distribuição **Ubuntu**
- Compilador `g++`, `make` e terminal do Ubuntu funcionando

### Como instalar o WSL (caso ainda não tenha)

1. Abra o **PowerShell como Administrador**
2. Execute o comando:

```powershell
wsl --install
```

3. Após a instalação, reinicie o computador quando solicitado.
4. Ao abrir o Ubuntu pela primeira vez, ele pedirá para criar um nome de usuário e senha Linux.
5. Depois, no terminal do Ubuntu, execute:

OBS: Não precisa digitar o 'bash', apenas o comando embaixo.

```bash
sudo apt update && sudo apt install build-essential -y
```

---

## 📁 Estrutura de Pastas

```
ChiefInfiniteCables/
│
├── include/
│   ├── erro.h
│   ├── funcao.h
│   ├── metodos.h
│   ├── newtonRaphson.h
│   ├── newtonModificado.h
│   └── secante.h
│
├── src/
│   ├── erro.cpp
│   ├── funcao.cpp
│   ├── newtonRaphson.cpp
│   ├── newtonModificado.cpp
│   └── secante.cpp
│
├── bin/
│   ├── main
│   ├── modificado
│   ├── newton
│   └── secante
│
├── tests/
│   ├── testesNR.cpp
│   ├── testesModificado.cpp
│   └── testesSecante.cpp
│
├── main.cpp
├── Makefile
└── README.md
```

---

## 🛠️ Como compilar

1. Abra o **terminal do Ubuntu (WSL)** e vá até a pasta do projeto. Exemplo:

OBS: Mesmo se estiver em português, ele tem que ser Users.

```bash
cd /mnt/c/Users/seu-usuario/Downloads/ChiefInfiniteCables
```

2. Para compilar o menu principal:

```bash
make menu
```

3. Ou para compilar todos os métodos:

```bash
make
```

---

## ▶️ Como executar

Após a compilação, execute no terminal WSL:

```bash
./bin/menu
```

O programa solicitará:

- Método desejado: `newton`, `modificado`, ou `secante`
- Valor de `a`
- Valor inicial `d₀`
- Valor de `ε` (epsilon)


---

## 🔄 Como limpar

Para remover os executáveis gerados:

```bash
make clean
```

---
