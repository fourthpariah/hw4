#!/bin/bash

ls

cd dir1
ls
cd ../

cd dir2
ls
cd ../

echo "$(<script3.sh )"

../script3.sh