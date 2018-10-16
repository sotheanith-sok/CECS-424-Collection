--Assignment 6
--by Sotheanith Sok

add :: Int -> Int -> Int
add x y = 
    if y == 0 then x
    else add (succ x) (pred y)

add' :: Int -> Int -> Int
add' x y
    | y == 0 = x
    | otherwise = add' (succ x) (pred y)

-- mult 
mult :: Int -> Int -> Int
mult x y =
    if y == 0 then 0
    else add x (mult x (pred y))
-- mult'
mult' :: Int -> Int -> Int
mult' x y
    | y == 0 = 0
    | otherwise = add' x (mult' x (pred y))

-- power
power :: Int -> Int -> Int 
power x y =
    if y == 0 then 1
    else mult x (power x (pred y))
-- power'
power' :: Int -> Int -> Int
power' x y 
    | y == 0 = 1
    | otherwise = mult' x (power' x (pred y))

-- sub
sub :: Int -> Int -> Int 
sub x y =
    if y == 0 then x
    else sub (pred x) (pred y)
-- sub'
sub' :: Int -> Int -> Int
sub' x y 
    | y == 0 = x
    | otherwise = sub (pred x) (pred y)


prod :: Int -> Int
prod n =    
    if n == 1 then 1
    else mult (n) (prod (pred n))

prod1 :: Int -> Int
prod1 n =    
    if n == 1 then 1
    else prod1 (mult n (pred n))

main = do
    print (add 1 5)
    print (add' 3 2)
    print (mult 2 5)
    print (mult' 2 10)
    print (power 2 3)
    print (power' 3 3)
    print (sub 1 3)
    print (sub 1 10)
    print (prod 5)
    print (prod1 5)
