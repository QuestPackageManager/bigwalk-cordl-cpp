#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkMonitor.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkMonitor_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.add_NetworkDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::NetworkMonitor::add_NetworkDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac6a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"add_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.remove_NetworkDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::NetworkMonitor::remove_NetworkDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac6b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"remove_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.add_NetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::NetworkMonitor::add_NetworkRestored)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac6ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"add_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.remove_NetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::NetworkMonitor::remove_NetworkRestored)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac6bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"remove_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.get_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkMonitor::*)()>(&::GlobalNamespace::NetworkMonitor::get_IsOnline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.OnSystemResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)()>(&::GlobalNamespace::NetworkMonitor::OnSystemResume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.InvokeNetworkDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)(double_t)>(&::GlobalNamespace::NetworkMonitor::InvokeNetworkDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac69f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"InvokeNetworkDown", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor.InvokeNetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)(double_t)>(&::GlobalNamespace::NetworkMonitor::InvokeNetworkRestored)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180f0f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"InvokeNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMonitor::*)()>(&::GlobalNamespace::NetworkMonitor::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac6a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& GlobalNamespace::NetworkMonitor::__cordl_internal_get_debounceSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceSeconds;
}
constexpr double_t const& GlobalNamespace::NetworkMonitor::__cordl_internal_get_debounceSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceSeconds;
}
constexpr void GlobalNamespace::NetworkMonitor::__cordl_internal_set_debounceSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debounceSeconds = value;
}
constexpr float_t& GlobalNamespace::NetworkMonitor::__cordl_internal_get_pollInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pollInterval;
}
constexpr float_t const& GlobalNamespace::NetworkMonitor::__cordl_internal_get_pollInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pollInterval;
}
constexpr void GlobalNamespace::NetworkMonitor::__cordl_internal_set_pollInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pollInterval = value;
}
constexpr float_t& GlobalNamespace::NetworkMonitor::__cordl_internal_get_reacquireBackoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reacquireBackoff;
}
constexpr float_t const& GlobalNamespace::NetworkMonitor::__cordl_internal_get_reacquireBackoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reacquireBackoff;
}
constexpr void GlobalNamespace::NetworkMonitor::__cordl_internal_set_reacquireBackoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reacquireBackoff = value;
}
constexpr float_t& GlobalNamespace::NetworkMonitor::__cordl_internal_get_offlinePollInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlinePollInterval;
}
constexpr float_t const& GlobalNamespace::NetworkMonitor::__cordl_internal_get_offlinePollInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlinePollInterval;
}
constexpr void GlobalNamespace::NetworkMonitor::__cordl_internal_set_offlinePollInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlinePollInterval = value;
}
constexpr ::System::Action_1<double_t>*& GlobalNamespace::NetworkMonitor::__cordl_internal_get_NetworkDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkDown;
}
constexpr ::System::Action_1<double_t>* const& GlobalNamespace::NetworkMonitor::__cordl_internal_get_NetworkDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkDown;
}
constexpr void GlobalNamespace::NetworkMonitor::__cordl_internal_set_NetworkDown(::System::Action_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkDown = value;
}
constexpr ::System::Action_1<double_t>*& GlobalNamespace::NetworkMonitor::__cordl_internal_get_NetworkRestored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkRestored;
}
constexpr ::System::Action_1<double_t>* const& GlobalNamespace::NetworkMonitor::__cordl_internal_get_NetworkRestored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkRestored;
}
constexpr void GlobalNamespace::NetworkMonitor::__cordl_internal_set_NetworkRestored(::System::Action_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkRestored = value;
}
inline void GlobalNamespace::NetworkMonitor::add_NetworkDown(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"add_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkMonitor::remove_NetworkDown(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"remove_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkMonitor::add_NetworkRestored(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"add_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkMonitor::remove_NetworkRestored(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"remove_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NetworkMonitor::get_IsOnline()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkMonitor::OnSystemResume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkMonitor::InvokeNetworkDown(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"InvokeNetworkDown", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void GlobalNamespace::NetworkMonitor::InvokeNetworkRestored(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {"InvokeNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void GlobalNamespace::NetworkMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkMonitor* GlobalNamespace::NetworkMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkMonitor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkMonitor::NetworkMonitor()   {
}
