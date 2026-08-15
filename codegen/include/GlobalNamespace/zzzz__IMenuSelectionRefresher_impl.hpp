#pragma once
// IWYU pragma private; include "GlobalNamespace/IMenuSelectionRefresher.hpp"
#include "GlobalNamespace/zzzz__IMenuSelectionRefresher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMenuSelectionRefresher.RefreshMenuSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMenuSelectionRefresher::*)()>(&::GlobalNamespace::IMenuSelectionRefresher::RefreshMenuSelection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IMenuSelectionRefresher*>(),
                    {::i2c::class_of<::GlobalNamespace::IMenuSelectionRefresher*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IMenuSelectionRefresher::RefreshMenuSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IMenuSelectionRefresher*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
