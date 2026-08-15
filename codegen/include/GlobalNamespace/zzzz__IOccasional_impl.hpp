#pragma once
// IWYU pragma private; include "GlobalNamespace/IOccasional.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IOccasional.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IOccasional::*)()>(&::GlobalNamespace::IOccasional::OccasionalUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IOccasional*>(),
                    {::i2c::class_of<::GlobalNamespace::IOccasional*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IOccasional::OccasionalUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IOccasional*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
