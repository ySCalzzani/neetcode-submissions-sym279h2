import math

class Solution:
    # def get_minimizer(self, iterations: int, learning_rate: float, init: int) -> float:
    #     # Objective function: f(x) = x^2
    #     # Derivative:         f'(x) = 2x
    #     # Update rule:        x = x - learning_rate * f'(x)
    #     # Round final answer to 5 decimal places
    #     minimized = init
    #     for i in range(iterations):
    #         gradient = (2 * minimized)
    #         minimized = minimized - learning_rate* gradient

        # return round(minimized, 5)
    def get_minimizer(self, iterations: int, learning_rate: float, init: int) -> float:
        if iterations == 0:
            return round(init, 5)
        
        return self.get_minimizer(iterations - 1, learning_rate, init - learning_rate * 2 * init)
