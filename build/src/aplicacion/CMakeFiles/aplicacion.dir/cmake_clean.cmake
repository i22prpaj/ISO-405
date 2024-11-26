file(REMOVE_RECURSE
  "libaplicacion.a"
  "libaplicacion.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/aplicacion.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
