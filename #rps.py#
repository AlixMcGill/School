import random

ROCK = 0
PAPER = 1
SCISSORS = 2

# Read random seed to support testing (do not alter) and starting credits
seed = int(input())
# Set the seed for random
random.seed(int(seed))

# Type your code here.
player_a = input()
player_a_wins = 0
player_b = input()
player_b_wins = 0
rounds = int(input())

while rounds <= 0:
    print("Rounds must be > 0")
    rounds = int(input())

print(f"{player_a} vs {player_b} for {rounds} rounds")

for round in range(rounds):
    # init player moves
    player_a_move = random.randint(0, 2)
    player_b_move = random.randint(0, 2)

    # game logic
    while player_a_move == player_b_move:
        player_a_move = random.randint(0, 2)
        player_b_move = random.randint(0, 2)
        print("Tie")

    if player_a_move == 0 and player_b_move == 2:  # A rock beats B scissors
        player_a_wins += 1
        print(f"{player_a} wins with rock")
    elif player_b_move == 0 and player_a_move == 2:  # B rock beats A scissors
        player_b_wins += 1
        print(f"{player_b} wins with rock")
    elif player_a_move == 1 and player_b_move == 0:  # A paper beats B rock
        player_a_wins += 1
        print(f"{player_a} wins with paper")
    elif player_b_move == 1 and player_a_move == 0:  # B paper beats A rock
        player_b_wins += 1
        print(f"{player_b} wins with paper")
    elif player_a_move == 2 and player_b_move == 1:  # A scissors beats B paper
        player_a_wins += 1
        print(f"{player_a} wins with scissors")
    elif player_b_move == 2 and player_a_move == 1:  # B scissors beats A paper
        player_b_wins += 1
        print(f"{player_b} wins with scissors")

print(f"{player_a} wins {player_a_wins} and {player_b} wins {player_b_wins}")
