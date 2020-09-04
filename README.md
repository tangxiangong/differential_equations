# Differential Equations
## `algorithms.h`

`euler` 

**Euler**方法求解常微分方程(ODE)
$$
    \frac{dy}{dx} = f(x, y), \forall x \in [a, b],
\\
    y(a) = y_a.
$$

Euler 格式为
$$
    y_{i+1} = y_i + h*f(x_i, y_i), i=0,\dots,n-1.
\\
    y_0 = y(a), n = (b-a)/h
$$
`h` 为步长.
