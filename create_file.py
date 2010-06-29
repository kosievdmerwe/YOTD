#!/usr/bin/env python

import sys

if len(sys.argv) < 2:
  print >>sys.stderr, ("Must pass file name as command line parameter ("+
                      "excluding file type)")
  sys.exit(0)

name = sys.argv[1]
define_name = "__" + name.upper() + "_H__"

fsrc = open("src/" + name + ".cpp", "w")
fsrc.write("#include \"" + name + ".h\"\n\n")
fsrc.close()

fincl = open("include/" + name + ".h", "w")

fincl.write("#ifndef " + define_name + "\n")
fincl.write("#define " + define_name + "\n\n")

fincl.write("class " + name + " {\n")
fincl.write("public:\n")
fincl.write("};\n\n")

fincl.write("#endif//" + define_name + "\n")

fincl.close()



