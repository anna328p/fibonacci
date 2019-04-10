#!/usr/bin/ruby

$fib_hash = {0 => 0, 1 => 1}

def fib(seq) 
	return $fib_hash[seq] || ($fib_hash[seq] = fib(seq - 2) + fib(seq - 1))
end

puts ARGV.map { |i| fib i.to_i }