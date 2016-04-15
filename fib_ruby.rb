#!/usr/bin/ruby

$fib_hash = {0 => 0, 1 => 1}
#p $fib_hash

$debug = true

def fib(seq) 
	if $fib_hash[seq] == nil
		$fib_hash[seq] = fib(seq - 2) + fib(seq - 1)
		STDERR.print "Generating Fibonacci #", seq, ": ", $fib_hash[seq], ".\n" if $debug
	end
	STDERR.print "Looked up Fibonacci #", seq, ": ", $fib_hash[seq], ".\n" if $debug
	return $fib_hash[seq]
end

for i in ARGV do puts fib(i.to_i) end
