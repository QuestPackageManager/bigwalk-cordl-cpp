#pragma once
// IWYU pragma private; include "Rewired/Internal/IPrefetch.hpp"
#include "Rewired/Internal/zzzz__IPrefetch_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::IPrefetch.Prefetch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::IPrefetch::*)()>(&::Rewired::Internal::IPrefetch::Prefetch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::IPrefetch*>(),
                    {::i2c::class_of<::Rewired::Internal::IPrefetch*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Internal::IPrefetch::Prefetch()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::IPrefetch*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
