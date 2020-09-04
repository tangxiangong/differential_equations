# Differential Equations
## `algorithms.h`

`euler` 

**Euler**������ⳣ΢�ַ���(ODE)
$$
    \frac{dy}{dx} = f(x, y), \forall x \in [a, b],
\\
    y(a) = y_a.
$$

Euler ��ʽΪ
$$
    y_{i+1} = y_i + h*f(x_i, y_i), i=0,\dots,n-1.
\\
    y_0 = y(a), n = (b-a)/h
$$
`h` Ϊ����.
