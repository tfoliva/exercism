{-# LANGUAGE CPP #-}
{-# LANGUAGE NoRebindableSyntax #-}
{-# OPTIONS_GHC -fno-warn-missing-import-lists #-}
module Paths_hello_world (
    version,
    getBinDir, getLibDir, getDynLibDir, getDataDir, getLibexecDir,
    getDataFileName, getSysconfDir
  ) where

import qualified Control.Exception as Exception
import Data.Version (Version(..))
import System.Environment (getEnv)
import Prelude

#if defined(VERSION_base)

#if MIN_VERSION_base(4,0,0)
catchIO :: IO a -> (Exception.IOException -> IO a) -> IO a
#else
catchIO :: IO a -> (Exception.Exception -> IO a) -> IO a
#endif

#else
catchIO :: IO a -> (Exception.IOException -> IO a) -> IO a
#endif
catchIO = Exception.catch

version :: Version
version = Version [1,1,0,5] []
bindir, libdir, dynlibdir, datadir, libexecdir, sysconfdir :: FilePath

bindir     = "/Users/tiagooliva/Exercism/haskell/hello-world/.stack-work/install/x86_64-osx/390eb86b585822a9e1b21da33cf78fc4d0e33ad93c0fa0bc3c7e7e62963a847c/8.8.4/bin"
libdir     = "/Users/tiagooliva/Exercism/haskell/hello-world/.stack-work/install/x86_64-osx/390eb86b585822a9e1b21da33cf78fc4d0e33ad93c0fa0bc3c7e7e62963a847c/8.8.4/lib/x86_64-osx-ghc-8.8.4/hello-world-1.1.0.5-GVlEyxC4x3UBYJuLCyCLyL-test"
dynlibdir  = "/Users/tiagooliva/Exercism/haskell/hello-world/.stack-work/install/x86_64-osx/390eb86b585822a9e1b21da33cf78fc4d0e33ad93c0fa0bc3c7e7e62963a847c/8.8.4/lib/x86_64-osx-ghc-8.8.4"
datadir    = "/Users/tiagooliva/Exercism/haskell/hello-world/.stack-work/install/x86_64-osx/390eb86b585822a9e1b21da33cf78fc4d0e33ad93c0fa0bc3c7e7e62963a847c/8.8.4/share/x86_64-osx-ghc-8.8.4/hello-world-1.1.0.5"
libexecdir = "/Users/tiagooliva/Exercism/haskell/hello-world/.stack-work/install/x86_64-osx/390eb86b585822a9e1b21da33cf78fc4d0e33ad93c0fa0bc3c7e7e62963a847c/8.8.4/libexec/x86_64-osx-ghc-8.8.4/hello-world-1.1.0.5"
sysconfdir = "/Users/tiagooliva/Exercism/haskell/hello-world/.stack-work/install/x86_64-osx/390eb86b585822a9e1b21da33cf78fc4d0e33ad93c0fa0bc3c7e7e62963a847c/8.8.4/etc"

getBinDir, getLibDir, getDynLibDir, getDataDir, getLibexecDir, getSysconfDir :: IO FilePath
getBinDir = catchIO (getEnv "hello_world_bindir") (\_ -> return bindir)
getLibDir = catchIO (getEnv "hello_world_libdir") (\_ -> return libdir)
getDynLibDir = catchIO (getEnv "hello_world_dynlibdir") (\_ -> return dynlibdir)
getDataDir = catchIO (getEnv "hello_world_datadir") (\_ -> return datadir)
getLibexecDir = catchIO (getEnv "hello_world_libexecdir") (\_ -> return libexecdir)
getSysconfDir = catchIO (getEnv "hello_world_sysconfdir") (\_ -> return sysconfdir)

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = do
  dir <- getDataDir
  return (dir ++ "/" ++ name)
