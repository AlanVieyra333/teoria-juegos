# Estadisticas sacadas de https://es.whoscored.com/Regions/206/Tournaments/4/Seasons/7889/Stages/17702/TeamStatistics/Espa%C3%B1a-LaLiga-2019-2020
# Alan Fernando Rincon Vieyra
# 26/06/2020

import statistics

players = [
    {'name': 'Portero'},
    {'name': 'Defensa'},
    {'name': 'Defensa'},
    {'name': 'Defensa'},
    {'name': 'Defensa'},
    {'name': 'Medio'},
    {'name': 'Medio'},
    {'name': 'Medio'},
    {'name': 'Delantero'},
    {'name': 'Delantero'},
    {'name': 'Delantero'},
]

movements = [
    # Defensivo
    { 'id': 'ib', 'name': 'Intercepta el balón', 'frecuency': 0.0, 'value': 9.9,
      'players': [0.30, 0.30, 0.25, 0.15], 'gain': 0.7},
    { 'id': 'fap', 'name': 'Realiza falta con el balón', 'frecuency': 0.0, 'value': 14.5,
      'players': [0.02, 0.2, 0.3, 0.48], 'gain': 0.0},
    { 'id': 'farb', 'name': 'Recibe falta con balón', 'frecuency': 0.0, 'value': 10,
      'players': [0.03, 0.2, 0.3, 0.47], 'gain': 0.5},
    { 'id': 'far', 'name': 'Recibe falta sin balón', 'frecuency': 0.0, 'value': 3,
      'players': [0.01, 0.15, 0.49, 0.35], 'gain': 0.5},
    { 'id': 'sdu', 'name': 'Recibe tarjeta amarilla', 'frecuency': 0.0, 'value': 2.7,
      'players': [0.02, 0.48, 0.3, 0.2], 'gain': 0.0},
    #{ 'id': 'sdd', 'name': 'Recibe doble tarjeta amarilla', 'frecuency': 0.0, 'value': 0.6,
    #  'players': [0.01, 0.49, 0.3, 0.2], 'gain': 0.0},
    { 'id': 'sf', 'name': 'Recibe tarjeta roja', 'frecuency': 0.0, 'value': 0.1,
      'players': [0.01, 0.4, 0.2, 0.39], 'gain': 0.0},
    #{ 'id': 'sa', 'name': 'Recibe tarjeta roja luego de 2 amonestaciones', 'frecuency': 0.0, 'value': 0.05,
    #  'players': [0.01, 0.4, 0.2, 0.39], 'gain': 0.0},
    #{ 'id': 'per', 'name': 'Pierde el balón con tarjeta amarilla', 'frecuency': 0.0, 'value': 1.0,
    #  'players': [0.01, 0.4, 0.2, 0.39], 'gain': 0.0}, #*
    { 'id': 'fuj', 'name': 'Comete fuera de lugar.', 'frecuency': 0.0, 'value': 2.3,
      'players': [0.01, 0.15, 0.19, 0.45], 'gain': 0.0},
    { 'id': 'db', 'name': 'Despeja el balón', 'frecuency': 0.0, 'value': 18.2,
      'players': [0.4, 0.3, 0.2, 0.1], 'gain': 0.8},
    { 'id': 'blce', 'name': 'Bloquea el balón con éxito', 'frecuency': 0.0, 'value': 11.7,
      'players': [0.6, 0.3, 0.06, 0.04], 'gain': 0.6},
    { 'id': 'blse', 'name': 'Bloquea el balón sin éxito', 'frecuency': 0.0, 'value': 14.0,
      'players': [0.4, 0.4, 0.1, 0.1], 'gain': 0.0}, #*
    { 'id': 'bl', 'name': 'Bloquea disparo', 'frecuency': 0.0, 'value': 5.8,
      'players': [0.5, 0.38, 0.1, 0.02], 'gain': 0.9},    # Jugador(3) y portero(2.8)
    # Ofensivo
    { 'id': 'gl', 'name': 'Anota gol', 'frecuency': 0.0, 'value': 1.4,
      'players': [0.001, 0.01, 0.05, 0.939], 'gain': 1.0},
    { 'id': 'tr', 'name': 'Realiza tiro', 'frecuency': 0.0, 'value': 12.0,
      'players': [0.01, 0.15, 0.19, 0.65], 'gain': 0.9},
    { 'id': 'rta', 'name': 'Acierta regate', 'frecuency': 0.0, 'value': 10.0,
      'players': [0.01, 0.2, 0.29, 0.5], 'gain': 0.8},
    { 'id': 'rtf', 'name': 'Falla regate', 'frecuency': 0.0, 'value': 6.5,
      'players': [0.01, 0.15, 0.19, 0.65], 'gain': 0.0},
    { 'id': 'perb', 'name': 'Pierde el balón', 'frecuency': 0.0, 'value': 23.8,
      'players': [0.01, 0.2, 0.39, 0.4], 'gain': 0.0}, # Toque no exitoso(14.8) y desposeido(9)
    { 'id': 'rb', 'name': 'Recupera el balón', 'frecuency': 0.0, 'value': 8.0,
      'players': [0.01, 0.15, 0.19, 0.65], 'gain': 0.7}, #*
    { 'id': 'pn', 'name': 'Comete penalti', 'frecuency': 0.0, 'value': 0.2,
      'players': [0.01, 0.15, 0.19, 0.65], 'gain': 0.0},
    { 'id': 'repnb', 'name': 'Recibe penalti con balón', 'frecuency': 0.0, 'value': 0.18,
      'players': [0.01, 0.15, 0.19, 0.65], 'gain': 0.8}, #*
    #{ 'id': 'repn', 'name': 'Recibe penalti sin balón', 'frecuency': 0.0, 'value': 0.02,
    #  'players': [0.01, 0.15, 0.19, 0.65], 'gain': 0.8}, #*
    # Distribucion
    { 'id': 'pl', 'name': 'Realiza pase largo', 'frecuency': 0.0, 'value': 30.0,
      'players': [0.3, 0.49, 0.2, 0.01], 'gain': 0.4},
    { 'id': 'pc', 'name': 'Realiza pase corto', 'frecuency': 0.0, 'value': 350.0,
      'players': [0.01, 0.3, 0.49, 0.2], 'gain': 0.5},
    { 'id': 'as', 'name': 'Asiste a otro jugador', 'frecuency': 0.0, 'value': 0.9,
      'players': [0.01, 0.49, 0.4, 0.1], 'gain': 0.8},
    { 'id': 'cn', 'name': 'Realiza centro', 'frecuency': 0.0, 'value': 4.3,
      'players': [0.01, 0.49, 0.3, 0.2], 'gain': 0.8},
    # Otro
    { 'id': 'fubc', 'name': 'Saca el balón del campo de juego', 'frecuency': 0.0, 'value': 10.0,
      'players': [0.01, 0.15, 0.19, 0.45], 'gain': 0.0}, #*
    { 'id': 'mac', 'name': 'Comete mano', 'frecuency': 0.0, 'value': 0.1,
      'players': [0.01, 0.1, 0.39, 0.5], 'gain': 0.0}, #*
    #{ 'id': 'adv', 'name': 'Recibe advertencia', 'frecuency': 0.0, 'value': 1.0,
    #  'players': [0.01, 0.42, 0.37, 0.2], 'gain': 0.0}, #*
    #{ 'id': 'exp', 'name': 'Expulsión del juego', 'frecuency': 0.0, 'value': 0.12,
    #  'players': [0.01, 0.45, 0.34, 0.2], 'gain': 0.0}, #*
]

movements = sorted(movements, key=lambda movement : movement['value'], reverse=True)

# print(len(movements))

total_movements = 0
for movement in movements:
    total_movements += movement['value']

for movement in movements:
    movement['frecuency'] = movement['value'] / total_movements
    #print(movement['frecuency'], movement['name'])

##########################################################

def get_idx_rol(idx_player):
  if idx_player == 0:
    return 0
  elif idx_player >= 1 and idx_player <= 4:
    return 1
  elif idx_player >= 5 and idx_player <= 7:
    return 2
  elif idx_player >= 8 and idx_player <= 10:
    return 3
  return 0

# Funcion costo beneficio del equipo 1, dadas las estrategias de ambos equipos.
def f1(strategy_team1, strategy_team2):
  N = 11
  sum_gain_team1 = 0.0
  sum_gain_team2 = 0.0

  for i in range(N):
    idx_rol = get_idx_rol(i)
    sum_gain_team1 += strategy_team1[i]['frecuency'] * strategy_team1[i]['players'][idx_rol] * strategy_team1[i]['gain']
    sum_gain_team2 += strategy_team2[i]['frecuency'] * strategy_team2[i]['players'][idx_rol] * strategy_team2[i]['gain']

  sum_gain_team1 /= N
  sum_gain_team2 /= N
  
  return ((sum_gain_team1 - sum_gain_team2) / 2) + 0.5

# Funcion costo beneficio del equipo 2, dadas las estrategias de ambos equipos.
def f2(strategy_team1, strategy_team2):
  N = 11
  sum_gain_team1 = 0.0
  sum_gain_team2 = 0.0

  for i in range(N):
    idx_rol = get_idx_rol(i)
    sum_gain_team1 += strategy_team1[i]['frecuency'] * strategy_team1[i]['players'][idx_rol] * strategy_team1[i]['gain']
    sum_gain_team2 += strategy_team2[i]['frecuency'] * strategy_team2[i]['players'][idx_rol] * strategy_team2[i]['gain']

  sum_gain_team1 /= N
  sum_gain_team2 /= N
  
  return ((sum_gain_team2 - sum_gain_team1) / 2) + 0.5

# Funcion para calcular la mejor estrategia del equipo 1 dada
# una estrategia del equipo 2.
def get_best_strategy_team1(strategy_team2):
  mov_num = len(movements)
  # mov_num = 2

  best_gain = 0.0
  best_strategy = []

  for m1_1 in range(mov_num):
    for m1_2 in range(mov_num):
      for m1_3 in range(mov_num):
        for m1_4 in range(mov_num):
          for m1_5 in range(mov_num):
            for m1_6 in range(mov_num):
              for m1_7 in range(mov_num):
                for m1_8 in range(mov_num):
                  for m1_9 in range(mov_num):
                    for m1_10 in range(mov_num):
                      for m1_11 in range(mov_num):
                        strategy_team1 = [movements[m1_1], movements[m1_2], movements[m1_3], movements[m1_4], movements[m1_5], movements[m1_6], movements[m1_7], movements[m1_8], movements[m1_9], movements[m1_10], movements[m1_11]]
                        gain = f1(strategy_team1, strategy_team2)

                        if gain > best_gain:
                          best_gain = gain
                          best_strategy = strategy_team1
  return best_strategy

# Funcion para calcular la mejor estrategia del equipo 2 dada
# una estrategia del equipo 1.
def get_best_strategy_team2(strategy_team1):
  mov_num = len(movements)
  # mov_num = 2

  best_gain = 0.0
  best_strategy = []

  for m2_1 in range(mov_num):
    for m2_2 in range(mov_num):
      for m2_3 in range(mov_num):
        for m2_4 in range(mov_num):
          for m2_5 in range(mov_num):
            for m2_6 in range(mov_num):
              for m2_7 in range(mov_num):
                for m2_8 in range(mov_num):
                  for m2_9 in range(mov_num):
                    for m2_10 in range(mov_num):
                      for m2_11 in range(mov_num):
                        strategy_team2 = [movements[m2_1], movements[m2_2], movements[m2_3], movements[m2_4], movements[m2_5], movements[m2_6], movements[m2_7], movements[m2_8], movements[m2_9], movements[m2_10], movements[m2_11]]
                        gain = f2(strategy_team1, strategy_team2)

                        if gain > best_gain:
                          best_gain = gain
                          best_strategy = strategy_team2
  return best_strategy

# Funcion para calcular el equilibrio de Nash para escoger la
# mejor estrategia de ambos equipos.
def calc_nash_equilibrium():
  mov_num = len(movements)
  # mov_num = 2
  nash_equilibrium = ()

  for m2_1 in range(mov_num):
    for m2_2 in range(mov_num):
      for m2_3 in range(mov_num):
        for m2_4 in range(mov_num):
          for m2_5 in range(mov_num):
            for m2_6 in range(mov_num):
              for m2_7 in range(mov_num):
                for m2_8 in range(mov_num):
                  for m2_9 in range(mov_num):
                    for m2_10 in range(mov_num):
                      for m2_11 in range(mov_num):
                        strategy_team2 = [movements[m2_1], movements[m2_2], movements[m2_3], movements[m2_4], movements[m2_5], movements[m2_6], movements[m2_7], movements[m2_8], movements[m2_9], movements[m2_10], movements[m2_11]]
                        best_strategy_team1 = get_best_strategy_team1(strategy_team2)
                        best_strategy_team2 = get_best_strategy_team2(best_strategy_team1)

                        if strategy_team2 == best_strategy_team2:
                          nash_equilibrium = (best_strategy_team1, best_strategy_team2)
                          return nash_equilibrium

  return nash_equilibrium

nash_equilibrium = calc_nash_equilibrium()
gain_1 = f1(nash_equilibrium[0], nash_equilibrium[1])
gain_2 = f2(nash_equilibrium[0], nash_equilibrium[1])
print('Nash equilibrium:')
print('Costo-beneficio equipo 1:', gain_1)
print('Costo-beneficio equipo 2:', gain_2)
print('Estrategia equipo 1:')
for i in range(len(nash_equilibrium[0])):
  print(players[i]['name'], nash_equilibrium[0][i]['name'])
print('Estrategia equipo 2:')
for i in range(len(nash_equilibrium[1])):
  print(players[i]['name'], nash_equilibrium[1][i]['name'])