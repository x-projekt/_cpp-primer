if [ $# -ne "0" ]; then
  in_file="${1}"
else
  echo -en "Which file to run (main.cpp): "
  read -r in_file
  in_file="${in_file:-main.cpp}"
fi

out_file="a.exe"
g++ -std=c++11 -o "${out_file}" "${in_file}"
if [ "${?}" = "0" ]; then
  ./"${out_file}"
else
  echo "Compilation failed!"
fi
