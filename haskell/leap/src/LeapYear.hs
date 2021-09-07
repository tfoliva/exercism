module LeapYear
  ( isLeapYear
  )
where

isLeapYear :: Integer -> Bool
isLeapYear year = isDivisible 4 && (not (isDivisible 100) || isDivisible 400)
  where isDivisible :: Integer -> Bool isDivisible num = rem year num == 0
