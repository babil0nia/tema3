# 🎮 Super Trunfo - Jogo de Cartas Completo

Sistema de comparação de cartas de países com múltiplos níveis de complexidade.

## 📁 Estrutura do Projeto
```
super-trunfo/
├── novato.c         # Comparação simples (1 atributo)
├── aventureiro.c    # Menu interativo (escolha 1 atributo)
├── mestre.c         # Comparação avançada (2 atributos)
└── README.md
```

## 🎯 Níveis Implementados

### 🥉 Nível Novato
- Comparação com 1 atributo fixo
- Usa if/else simples
- **Arquivo:** `novato.c`

### 🥈 Nível Aventureiro  
- Menu interativo com switch
- Jogador escolhe 1 atributo
- **Arquivo:** `aventureiro.c`

### 🥇 Nível Mestre
- Escolha de 2 atributos diferentes
- Menu dinâmico (esconde opção já escolhida)
- Soma dos atributos
- Operador ternário
- **Arquivo:** `mestre.c`

## 🚀 Como Compilar
```bash
# Nível Novato
gcc novato.c -o novato

# Nível Aventureiro
gcc aventureiro.c -o aventureiro

# Nível Mestre
gcc mestre.c -o mestre
```

## ▶️ Como Executar
```bash
./mestre
```

## 📋 Atributos Disponíveis

| Atributo | Regra | Exemplo |
|----------|-------|---------|
| **População** | Maior vence | 214.000.000 hab |
| **Área** | Maior vence | 8.515.767 km² |
| **PIB** | Maior vence | 2.055 bilhões |
| **Pontos Turísticos** | Maior vence | 100 pontos |
| **Densidade** | ⚠️ **Menor vence** | 25.13 hab/km² |

## 🎯 Regras do Nível Mestre

1. Escolha **2 atributos diferentes**
2. Cada atributo é comparado individualmente
3. Os valores são **somados**
4. Carta com **maior soma** vence
5. Em caso de empate na soma: **Empate!**

## 💡 Exemplo de Uso
```
╔════════════════════════════════════════╗
║   ESCOLHA O PRIMEIRO ATRIBUTO          ║
╚════════════════════════════════════════╝
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
════════════════════════════════════════
Escolha (1-5): 1

╔════════════════════════════════════════╗
║   ESCOLHA O SEGUNDO ATRIBUTO           ║
╚════════════════════════════════════════╝
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
════════════════════════════════════════
Escolha (1-5, diferente de 1): 3

🏆 VENCEDOR FINAL: Brasil!
```

## 🔧 Tecnologias Utilizadas

- Linguagem: C
- Estruturas: switch, if-else, operador ternário
- Compilador: GCC

## 👤 Autor

Bárbara Galdino

## 📄 Licença

Projeto educacional - Livre para uso acadêmico