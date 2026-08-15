#pragma once
// IWYU pragma private; include "GlobalNamespace/ICustomHomePositioner.hpp"
#include "GlobalNamespace/zzzz__ICustomHomePositioner_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICustomHomePositioner.Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ICustomHomePositioner::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::ICustomHomePositioner::Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ICustomHomePositioner*>(),
                    {::i2c::class_of<::GlobalNamespace::ICustomHomePositioner*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ICustomHomePositioner::Position(::GlobalNamespace::Prop*  prop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ICustomHomePositioner*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
