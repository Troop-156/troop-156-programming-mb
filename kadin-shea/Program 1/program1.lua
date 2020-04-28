-- A Lua program.
-- Double hyphens indicate comments, which aren't actually run as code and are notes for other programmers.
 
--[[
  if you use the double hyphens and then double square brackets,
  you can have comments that span multiple lines,
  as long as you end it with closing brackets!
]]
 
-- Write a greeting onto the screen
io.write("Hi there! What's your name? ")
 
-- Create a global variable called 'name', giving it a value assigned from keyboard input
name = io.read()
 
--[[
  Write a message on the screen, using the value within name.
  The double dots (..) tell Lua to concatenate (or combine) the string
  with the value from name. The "\n" tells Lua to start a new line
]]
 
io.write("Hello, "..name.."! I'm your computer!\n")
io.write("Let's do some math.\nYou give me two numbers, and I'll add them up.\n")
 
-- Read in a value into number1
io.write("What's the first number? ")
local number1 = io.read()
 
--[[
  Check that number1 really is a number. The tonumber() function will return a value
  that will cause the logical while statement to succeed and continue if the variable is a number.
  Otherwise, continue to ask for a new value until it is a number.
]]
 
while not tonumber(number1) do
  io.write("That's not a number!\n")
  io.write("What's the first number? ")
  number1 = io.read()
end
 
-- Do the exact same thing with a new variable called number2.
 
io.write("What's the second number? ")
local number2 = io.read()
 
while not tonumber(number2) do
  io.write("That's not a number!\n")
  io.write("What's the second number? ")
  number2 = io.read()
end
 
-- Add up the numbers
local answer = number1 + number2
 
-- Display the final result and a good-bye
io.write(number1.." + "..number2.." = "..answer.." !\n")
io.write("It was great talking to you, "..name.."!\n")
io.write("See you later!\n")