# Iteration through list comprehension.
#
# Run the Reia equivalent of the Ruby code:
# [1,2,3].each {|x| puts x}
#
# From the toplevel Reia directory, run: bin/reia examples/iterate.re
#
# There are multiple ways to achieve the same result in Reia. 
# One way is through list comprehension:
[puts(x.to_s()) | x in [1,2,3]]

# Using an in-line block:
[1,2,3].each { |n| puts(n.to_s()) }

# Using a two-line block:
[1,2,3].each() do |n|
  puts(n.to_s())
