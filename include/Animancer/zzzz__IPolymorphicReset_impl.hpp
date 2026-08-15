#pragma once
// IWYU pragma private; include "Animancer/IPolymorphicReset.hpp"
#include "Animancer/zzzz__IPolymorphicReset_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
//  Writing Method size for method: ::Animancer::IPolymorphicReset.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::IPolymorphicReset::*)()>(&::Animancer::IPolymorphicReset::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IPolymorphicReset*>(),
                    {::i2c::class_of<::Animancer::IPolymorphicReset*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Animancer::IPolymorphicReset::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IPolymorphicReset*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::IPolymorphicReset::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::IPolymorphicReset::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
