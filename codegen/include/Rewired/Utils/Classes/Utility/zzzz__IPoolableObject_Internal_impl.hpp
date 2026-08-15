#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/IPoolableObject_Internal.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__IPoolableObject_Internal_def.hpp"
#include "Rewired/Interfaces/zzzz__IPoolableObject_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__IObjectPool_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::IPoolableObject_Internal.get_pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::IObjectPool* (::Rewired::Utils::Classes::Utility::IPoolableObject_Internal::*)()>(&::Rewired::Utils::Classes::Utility::IPoolableObject_Internal::get_pool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::IPoolableObject_Internal.set_pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::IPoolableObject_Internal::*)(::Rewired::Utils::Classes::Utility::IObjectPool*)>(&::Rewired::Utils::Classes::Utility::IPoolableObject_Internal::set_pool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::IPoolableObject_Internal.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::IPoolableObject_Internal::*)()>(&::Rewired::Utils::Classes::Utility::IPoolableObject_Internal::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::Utils::Classes::Utility::IObjectPool* Rewired::Utils::Classes::Utility::IPoolableObject_Internal::get_pool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::IObjectPool*>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::IPoolableObject_Internal::set_pool(::Rewired::Utils::Classes::Utility::IObjectPool*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::IPoolableObject_Internal::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::Interfaces::IPoolableObject"
constexpr  Rewired::Utils::Classes::Utility::IPoolableObject_Internal::operator ::Rewired::Interfaces::IPoolableObject*() noexcept {
return static_cast<::Rewired::Interfaces::IPoolableObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IPoolableObject"
constexpr ::Rewired::Interfaces::IPoolableObject* Rewired::Utils::Classes::Utility::IPoolableObject_Internal::i___Rewired__Interfaces__IPoolableObject() noexcept {
return static_cast<::Rewired::Interfaces::IPoolableObject*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::IPoolableObject_Internal::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::IPoolableObject_Internal::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
