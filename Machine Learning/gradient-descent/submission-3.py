class Solution:
    def get_minimizer(self, iterations: int, learning_rate: float, init: int) -> float:
        if iterations == 0:
            return round(init, 5)
        
        return self.get_minimizer(iterations - 1, learning_rate, init - learning_rate * 2 * init)
