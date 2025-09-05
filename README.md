# BadUSB Awareness - Digispark Demo

> **Atenção:** Este projeto é **apenas educativo**. Não use este script em computadores sem autorização.

## Descrição
Este repositório contém um **script educativo para Digispark** que demonstra como dispositivos USB programáveis podem ser usados para executar comandos automaticamente em um computador.  

O objetivo é **conscientizar sobre os riscos de ataques BadUSB** e reforçar a importância da **segurança da informação** no ambiente de trabalho.

---

## Funcionalidades do script

O script realiza as seguintes ações de forma automatizada:

1. 📝 Abre o **Bloco de Notas** e exibe uma **mensagem de alerta educativo** sobre BadUSB.
2. 🌐 Abre o **navegador padrão** no site `www.google.com`.
3. 💻 Abre o **Prompt de Comando** e executa `netsh wlan export profile key=clear` para demonstrar como perfis Wi-Fi podem ser acessados.
4. 🔌 Executa o **desligamento imediato do computador** (`shutdown -s -t 0`).

> Todas essas ações são feitas **automaticamente pelo Digispark**, simulando um teclado.

---

## Requisitos

- Placa **Digispark** (ATtiny85)  
- Computador Windows (para demonstrar o script)  
- IDE Arduino com suporte ao Digispark

---

## Uso

1. Conecte o Digispark ao computador.
2. O script será executado automaticamente, mostrando os efeitos descritos.
3. Observe as ações para **entender como ataques BadUSB podem ocorrer**.

> ⚠️ **Nunca use este script em computadores sem autorização.** Ele serve apenas para fins educacionais e de conscientização.

---

## Contribuição

Contribuições são bem-vindas! Você pode:
- 💡 Sugerir melhorias no README
- 🛠 Criar scripts educativos adicionais de conscientização
- 🐛 Reportar bugs ou problemas na execução do Digispark

---

## Licença

Este projeto é **educativo e aberto**, use de forma ética e responsável.

