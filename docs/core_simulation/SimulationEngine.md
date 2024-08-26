## simulation Engine

# component - wastewater_model

Responsibilities:
1. Acts as the central hub of the simulation.
2. Manages the state of the entire wastewater system, including pipes, flow rates, and water quality.
3. Coordinates the flow of data between solvers and updates the system state in each simulation step.
4. Oversees the simulation loop, ensuring that each step in the process is executed in the correct order.

Key Functions
1. `initialize()`: Sets up the initial state of the wastewater system using input data.
2. `runSimulation()`: Executes the simulation, iterating through time steps, and updating the system state.
3. `updateState()`: Updates the state of the model based on the outputs from the solvers.
4. `finalize()`: Completes the simulation, preparing results for output.
