# Your code here
def full_name(s, *others)
    others.reduce(s) {|o, x| o.concat(' ' +x)}
end