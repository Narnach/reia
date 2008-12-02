# Iteration through list comprehension.
#
# Run the Reia equivalent of the Ruby code:
# [1,2,3].each {|x| puts x}
#
# From the toplevel Reia directory, run: bin/reia examples/iterate.re
#
# There are multiple ways to achieve the same result in Reia. 
#
# Most similar to Ruby is using an in-line block:
[1,2,3].each { |n| puts(n.to_s()) }

# List comprehension is completely different, but achieves the same result:
[puts(x.to_s()) | x in [1,2,3]]

# A variation on the in-line block: the two-line block
[1,2,3].each do |n|
  puts(n.to_s())
