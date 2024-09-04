#! /bin/bash
echo "Accessing gitignore files"
cd ..
git ls-files --other --ignored --exclude-standard
echo "Done"
