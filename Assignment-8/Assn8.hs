--Author: Sotheanith Sok

fac :: Int -> Int
fac 1 = 1
fac n = n * (fac (n-1))

tailFac :: Int -> Int
tailFac n = loop n 1
    where loop n' acc
            | n' == 1 = acc
            | otherwise = loop (n' - 1) (n' * acc)

fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib(n-1) + fib(n-2)

tailFib :: Int -> Int
tailFib n = loop n 0 1
    where loop n' f1 f2
            | n' == 0 = f1
            | otherwise = loop(n'-1) (f2) (f1+f2) 
tailSum :: Int -> Int
tailSum n = loop n 1
    where loop n' acc
            | n' == 1 = acc
            | otherwise = loop (n'-1) (acc + n')

main = do
    print (fac 10)
    print (tailFac 10)
    print (fib 10)
    print (tailFib 10)
    print (tailSum 100)