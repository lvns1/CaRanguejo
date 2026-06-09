# CaRanguejo 🦀

O **CaRanguejo** é um projeto de modelagem prática que consiste em um veículo robótico controlado via Bluetooth utilizando uma placa ESP-32. O grande diferencial do projeto é um caranguejo decorativo, construído a partir de itens eletrônicos reciclados em formato de caranguejo.

---

## 📝 Descrição do Projeto

O veículo recebe comandos sem fio enviados por um aplicativo móvel personalizado, desenvolvido pela equipe através da plataforma **MIT App Inventor**. A placa **ESP-32** processa os sinais recebidos via Bluetooth e comanda os motores por meio de um driver de potência, permitindo a movimentação completa do protótipo.

## 🎯 Objetivos

* Desenvolver um carrinho robótico funcional controlado remotamente.
* Integrar comunicação Bluetooth estável entre o aplicativo e a ESP-32.
* Incentivar a sustentabilidade através da reutilização de resíduos eletrônicos, conectando tecnologia e cultura por meio da inspiração no movimento Manguebeat.
* Implementar controle preciso de direção e velocidade dos motores.

## 🛠️ Componentes Utilizados

* **Microcontrolador:** ESP-32 (com Shield/Módulo de expansão)
* **Driver de Motor:** Módulo Driver Ponte H L298N
* **Atuadores:** 4 Motores DC (3-6V)
* **Alimentação:** Pilhas/Baterias Recarregáveis 18650 com suporte/case adequado
* **Conectores:** Cabos Jumper (Macho x Fêmea, Macho x Macho, Fêmea x Fêmea)
* **Estrutura:** Chassi e carcaça customizados com materiais reciclados em formato de caranguejo

## 🧠 Lógica de Funcionamento

O aplicativo móvel conta com uma interface intuitiva composta por:
* **4 Botões de Direção:** Comando para ir para frente, para trás, virar à direita e à esquerda.
* **Controle de Velocidade:** Um seletor deslizante que permite regular a velocidade dos motores em tempo real.

Ao pressionar qualquer comando no aplicativo, os dados são enviados via Bluetooth para a ESP-32, que interpreta as instruções e aciona os pinos digitais e saídas PWM conectados ao driver L298N, alterando o comportamento físico do CaRanguejo de acordo.

## 🚀 Competências Desenvolvidas

* ⚡ **Eletrônica Intermediária:** Dimensionamento de energia, conexões físicas de motores e drivers.
* 🤖 **Programação em Arduino:** Desenvolvimento do firmware embarcado da ESP-32 e recepção de dados via Bluetooth.
* 📱 **Desenvolvimento Mobile:** Programação visual/blocos e design de interface no MIT App Inventor.
* 🎨 **Design Sustentável:** Montagem mecânica e criativa utilizando carcaças eletrônicas recicladas.

## 👥 Equipe

Projeto desenvolvido por:

* **Brenda Paiva** — [bfpp@cesar.school](mailto:bfpp@cesar.school)
* **Brenna Lyra** — [blp@cesar.school](mailto:blp@cesar.school)
* **Filipe Araújo** — [faf2@cesar.school](mailto:faf2@cesar.school)
* **Gabriel Pimentel** — [gpg4@cesar.school](mailto:gpg4@cesar.school)
* **Lucas Vinícius** — [lvns@cesar.school](mailto:lvns@cesar.school)
* **Manoel Paz** — [mmgsp@cesar.school](mailto:mmgsp@cesar.school)

---
*Este projeto foi estruturado utilizando a metodologia do Canvas da Modelagem Prática.*
