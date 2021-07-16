// ====================================================================
// This file is released under the 3-clause BSD license. See COPYING-BSD.
// ====================================================================
function cleanmacros()
  libpath = get_absolute_file_path('cleanmacros.sce');

  binfiles = ls(libpath+'/*.bin');
  for i = 1:size(binfiles,'*')
    mdelete(binfiles(i));
  end

  mdelete(libpath+'/names');
  mdelete(libpath+'/lib');

  blockfiles = ls(libpath+'../images/h5/*.h5');
  for i = 1:size(blockfiles,'*')
    mdelete(blockfiles(i));
  end
endfunction

cleanmacros();
clear cleanmacros; // remove cleanmacros on stack
// ====================================================================
