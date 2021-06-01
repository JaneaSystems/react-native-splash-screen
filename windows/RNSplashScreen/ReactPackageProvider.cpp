#include "pch.h"
#include "ReactPackageProvider.h"
#if __has_include("ReactPackageProvider.g.cpp")
#  include "ReactPackageProvider.g.cpp"
#endif

#include "RNSplashScreen.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::RNSplashScreen::implementation {
  void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept {
    AddAttributedModules(packageBuilder);
  }
}
