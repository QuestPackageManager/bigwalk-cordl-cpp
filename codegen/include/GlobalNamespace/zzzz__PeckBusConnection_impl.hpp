#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckBusConnection.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckBusConnection_def.hpp"
#include "GlobalNamespace/zzzz__PeckBus_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckBusConnection.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckBusConnection::*)()>(&::GlobalNamespace::PeckBusConnection::OnEnable)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180446640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBusConnection*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckBusConnection.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckBusConnection::*)()>(&::GlobalNamespace::PeckBusConnection::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804465c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBusConnection*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckBusConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckBusConnection::*)()>(&::GlobalNamespace::PeckBusConnection::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBusConnection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& GlobalNamespace::PeckBusConnection::__cordl_internal_get_peckSystemBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemBlock;
}
constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& GlobalNamespace::PeckBusConnection::__cordl_internal_get_peckSystemBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemBlock;
}
constexpr void GlobalNamespace::PeckBusConnection::__cordl_internal_set_peckSystemBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemBlock = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckBus>& GlobalNamespace::PeckBusConnection::__cordl_internal_get_peckBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckBus;
}
constexpr ::UnityW<::GlobalNamespace::PeckBus> const& GlobalNamespace::PeckBusConnection::__cordl_internal_get_peckBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckBus;
}
constexpr void GlobalNamespace::PeckBusConnection::__cordl_internal_set_peckBus(::UnityW<::GlobalNamespace::PeckBus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckBus = value;
}
constexpr bool& GlobalNamespace::PeckBusConnection::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckBusConnection::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckBusConnection::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckBusConnection::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBusConnection*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckBusConnection::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBusConnection*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckBusConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBusConnection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckBusConnection* GlobalNamespace::PeckBusConnection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckBusConnection*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckBusConnection::PeckBusConnection()   {
}
