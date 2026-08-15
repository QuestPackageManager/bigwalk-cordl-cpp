#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamNetworkMonitor.hpp"
#include "GlobalNamespace/zzzz__NetworkMonitor_impl.hpp"
#include "GlobalNamespace/zzzz__SteamNetworkMonitor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamNetworkMonitor.get_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SteamNetworkMonitor::*)()>(&::GlobalNamespace::SteamNetworkMonitor::get_IsOnline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181acf320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(),
                    {::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamNetworkMonitor.OnSystemResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamNetworkMonitor::*)()>(&::GlobalNamespace::SteamNetworkMonitor::OnSystemResume)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acf180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(),
                    {::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamNetworkMonitor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamNetworkMonitor::*)()>(&::GlobalNamespace::SteamNetworkMonitor::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181acf1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamNetworkMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamNetworkMonitor::*)()>(&::GlobalNamespace::SteamNetworkMonitor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181acf310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__nextPoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextPoll;
}
constexpr float_t const& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__nextPoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextPoll;
}
constexpr void GlobalNamespace::SteamNetworkMonitor::__cordl_internal_set__nextPoll(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextPoll = value;
}
constexpr double_t& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__lastOnlineTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastOnlineTime;
}
constexpr double_t const& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__lastOnlineTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastOnlineTime;
}
constexpr void GlobalNamespace::SteamNetworkMonitor::__cordl_internal_set__lastOnlineTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastOnlineTime = value;
}
constexpr bool& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__downReported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downReported;
}
constexpr bool const& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__downReported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downReported;
}
constexpr void GlobalNamespace::SteamNetworkMonitor::__cordl_internal_set__downReported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downReported = value;
}
constexpr bool& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__everOnline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____everOnline;
}
constexpr bool const& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__everOnline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____everOnline;
}
constexpr void GlobalNamespace::SteamNetworkMonitor::__cordl_internal_set__everOnline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____everOnline = value;
}
constexpr bool& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__isOnline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOnline;
}
constexpr bool const& GlobalNamespace::SteamNetworkMonitor::__cordl_internal_get__isOnline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOnline;
}
constexpr void GlobalNamespace::SteamNetworkMonitor::__cordl_internal_set__isOnline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOnline = value;
}
inline bool GlobalNamespace::SteamNetworkMonitor::get_IsOnline()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SteamNetworkMonitor::OnSystemResume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamNetworkMonitor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamNetworkMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamNetworkMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamNetworkMonitor* GlobalNamespace::SteamNetworkMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamNetworkMonitor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamNetworkMonitor::SteamNetworkMonitor()   {
}
