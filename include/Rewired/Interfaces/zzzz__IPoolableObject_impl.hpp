#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IPoolableObject.hpp"
#include "Rewired/Interfaces/zzzz__IPoolableObject_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IPoolableObject.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IPoolableObject::*)()>(&::Rewired::Interfaces::IPoolableObject::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IPoolableObject*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IPoolableObject*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Interfaces::IPoolableObject::Return()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IPoolableObject*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Interfaces::IPoolableObject::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Interfaces::IPoolableObject::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
