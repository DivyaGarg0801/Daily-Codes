'''
import time

def simulate_clock(frequency, duty_cycle, duration):
    """
    Simulates a clock signal.
    
    :param frequency: Clock frequency in Hertz (Hz).
    :param duty_cycle: Duty cycle as a percentage (0-100).
    :param duration: Duration to run the simulation in seconds.
    """
    period = 1 / frequency  # Calculate the clock period (T = 1/f).
    high_time = period * (duty_cycle / 100)  # Time for high level.
    low_time = period * (1 - duty_cycle / 100)  # Time for low level.
    
    start_time = time.time()
    
    while time.time() - start_time <= duration:
        # High level
        print("HIGH", end="\r")  # Replace output to simulate real-time signal
        time.sleep(high_time)
        
        # Low level
        print("LOW ", end="\r")
        time.sleep(low_time)

# Simulate a 0.5 Hz clock with a 50% duty cycle for 10 seconds.
simulate_clock(frequency=0.5, duty_cycle=50, duration=10)

import numpy as np
import matplotlib.pyplot as plt

def generate_clock_wave(frequency, duty_cycle, duration):
    """
    Generates a clock waveform for visualization.
    
    :param frequency: Clock frequency in Hertz (Hz).
    :param duty_cycle: Duty cycle as a percentage (0-100).
    :param duration: Duration to run the simulation in seconds.
    """
    t = np.linspace(0, duration, int(frequency * duration * 100))  # Time vector
    period = 1 / frequency
    high_time = duty_cycle / 100 * period
    
    # Generate square wave
    clock_signal = ((t % period) < high_time).astype(int)
    return t, clock_signal

# Parameters
frequency = 2  # Hz
duty_cycle = 50  # Percent
duration = 2  # Seconds

# Generate and plot waveform
t, clock_signal = generate_clock_wave(frequency, duty_cycle, duration)
plt.step(t, clock_signal, where='post')
plt.title(f"Clock Signal: {frequency} Hz, {duty_cycle}% Duty Cycle")
plt.xlabel("Time (s)")
plt.ylabel("Signal Level")
plt.ylim(-0.2, 1.2)
plt.grid()
plt.show()

'''
import matplotlib.pyplot as plt
import matplotlib.animation as animation

# Define the number of clock pulses for simulation
num_pulses = 8

# Simulate the states of a 3-bit ripple up counter
# FF1 is the first flip-flop that responds to a clock pulse. The others follow sequentially.
# This will demonstrate the ripple effect.
states = [
    [0, 0, 0],  # Initial state
    [1, 0, 0],  # FF1 responds first
    [0, 1, 0],  # FF2 responds
    [1, 0, 0],  # FF1 toggles again
    [0, 0, 1],  # FF3 responds last
    [1, 0, 0],  # FF1 toggles again
    [0, 1, 0],  # FF2 toggles again
    [1, 0, 0],  # FF1 toggles
    [0, 0, 0],  # Resetting state
]

# Initialize the visualization
fig, ax = plt.subplots()
ax.set_xlim(-0.5, 2.5)
ax.set_ylim(-0.5, 1.5)
ax.set_xticks([0, 1, 2])
ax.set_yticks([0, 1])
ax.set_xticklabels(['FF1', 'FF2', 'FF3'])
ax.set_yticklabels(['0', '1'])
ax.grid(True)

# Function to animate the ripple effect across FF1, FF2, and FF3
def animate(i):
    ax.clear()
    ax.set_xlim(-0.5, 2.5)
    ax.set_ylim(-0.5, 1.5)
    ax.set_xticks([0, 1, 2])
    ax.set_yticks([0, 1])
    ax.set_xticklabels(['FF1', 'FF2', 'FF3'])
    ax.set_yticklabels(['0', '1'])
    ax.grid(True)
    
    # Visualize the ripple effect for the 3 flip-flops (binary states)
    if states[i][0] == 1:
        ax.plot(0, 1, 'ro', markersize=15)  # FF1 is active
    else:
        ax.plot(0, 0, 'bo', markersize=15)
        
    if states[i][1] == 1:
        ax.plot(1, 1, 'ro', markersize=15)  # FF2 is active
    else:
        ax.plot(1, 0, 'bo', markersize=15)
        
    if states[i][2] == 1:
        ax.plot(2, 1, 'ro', markersize=15)  # FF3 is active
    else:
        ax.plot(2, 0, 'bo', markersize=15)

# Set up the animation with the correct number of frames
ani = animation.FuncAnimation(fig, animate, frames=len(states), interval=300, repeat=False)
plt.show()
