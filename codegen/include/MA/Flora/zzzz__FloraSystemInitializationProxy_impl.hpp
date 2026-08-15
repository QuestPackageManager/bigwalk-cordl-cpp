#pragma once
// IWYU pragma private; include "MA/Flora/FloraSystemInitializationProxy.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__FloraSystemInitializationProxy_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraSystemInitializationProxy.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystemInitializationProxy::*)()>(&::MA::Flora::FloraSystemInitializationProxy::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814e7e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystemInitializationProxy*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystemInitializationProxy.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystemInitializationProxy::*)()>(&::MA::Flora::FloraSystemInitializationProxy::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814e7e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystemInitializationProxy*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystemInitializationProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystemInitializationProxy::*)()>(&::MA::Flora::FloraSystemInitializationProxy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystemInitializationProxy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& MA::Flora::FloraSystemInitializationProxy::__cordl_internal_get_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr bool const& MA::Flora::FloraSystemInitializationProxy::__cordl_internal_get_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr void MA::Flora::FloraSystemInitializationProxy::__cordl_internal_set_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsActive = value;
}
inline void MA::Flora::FloraSystemInitializationProxy::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystemInitializationProxy*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystemInitializationProxy::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystemInitializationProxy*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystemInitializationProxy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystemInitializationProxy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraSystemInitializationProxy* MA::Flora::FloraSystemInitializationProxy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSystemInitializationProxy*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSystemInitializationProxy::FloraSystemInitializationProxy()   {
}
