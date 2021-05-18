import cpp_lib
import matplotlib.pyplot as plt

print(cpp_lib.twice(2))

x=[0, 1, 2, 3, 4]
y=[0, 1, 4, 9, 16]

plt.plot(x, y)
plt.plot(x, cpp_lib.vec_double(y))
plt.show()
