Component: FlowSolver

Responsibilities:

Calculates the hydraulic properties of the wastewater flow through the pipes.
Determines flow rates, velocities, pressure drops, and other hydraulic parameters.
Handles the interaction between pipes and boundary conditions to model realistic flow dynamics.

Key Functions:

computeFlowRates(): Calculates the flow rates in each pipe based on hydraulic properties and boundary conditions.
calculateVelocity(): Determines the velocity of the wastewater in different sections of the network.
applyBoundaryConditions(): Adjusts flow calculations based on specified boundary conditions.
solveHydraulics(): Solves the hydraulic equations to obtain a stable flow profile.