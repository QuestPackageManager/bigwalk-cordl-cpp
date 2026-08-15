#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalNetworkMonitor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GlobalNetworkMonitor_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMonitor_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GlobalNetworkMonitor> (*)()>(&::GlobalNamespace::GlobalNetworkMonitor::get_instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acbb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GlobalNetworkMonitor*)>(&::GlobalNamespace::GlobalNetworkMonitor::set_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acbc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::GlobalNetworkMonitor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.add_NetworkDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::GlobalNetworkMonitor::add_NetworkDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acb9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"add_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.remove_NetworkDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::GlobalNetworkMonitor::remove_NetworkDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acbb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"remove_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.add_NetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::GlobalNetworkMonitor::add_NetworkRestored)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"add_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.remove_NetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)(::System::Action_1<double_t>*)>(&::GlobalNamespace::GlobalNetworkMonitor::remove_NetworkRestored)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acbbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"remove_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.get_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GlobalNetworkMonitor::*)()>(&::GlobalNamespace::GlobalNetworkMonitor::get_IsOnline)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181acbac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"get_IsOnline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)()>(&::GlobalNamespace::GlobalNetworkMonitor::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181acb790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.RegisterIntermediateNetworkMonitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)()>(&::GlobalNamespace::GlobalNetworkMonitor::RegisterIntermediateNetworkMonitor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181acb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"RegisterIntermediateNetworkMonitor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.OnNetworkDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)(double_t)>(&::GlobalNamespace::GlobalNetworkMonitor::OnNetworkDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acb8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"OnNetworkDown", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor.OnNetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)(double_t)>(&::GlobalNamespace::GlobalNetworkMonitor::OnNetworkRestored)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acb8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"OnNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalNetworkMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlobalNetworkMonitor::*)()>(&::GlobalNamespace::GlobalNetworkMonitor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkMonitor>& GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_get_networkMonitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMonitor;
}
constexpr ::UnityW<::GlobalNamespace::NetworkMonitor> const& GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_get_networkMonitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMonitor;
}
constexpr void GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_set_networkMonitor(::UnityW<::GlobalNamespace::NetworkMonitor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkMonitor = value;
}
constexpr ::System::Action_1<double_t>*& GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_get_NetworkDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkDown;
}
constexpr ::System::Action_1<double_t>* const& GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_get_NetworkDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkDown;
}
constexpr void GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_set_NetworkDown(::System::Action_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkDown = value;
}
constexpr ::System::Action_1<double_t>*& GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_get_NetworkRestored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkRestored;
}
constexpr ::System::Action_1<double_t>* const& GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_get_NetworkRestored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkRestored;
}
constexpr void GlobalNamespace::GlobalNetworkMonitor::__cordl_internal_set_NetworkRestored(::System::Action_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkRestored = value;
}
inline void GlobalNamespace::GlobalNetworkMonitor::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::GlobalNetworkMonitor>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GlobalNetworkMonitor>, "<instance>k__BackingField", ::GlobalNamespace::GlobalNetworkMonitor*>(std::forward<::UnityW<::GlobalNamespace::GlobalNetworkMonitor>>(value));
}
inline ::UnityW<::GlobalNamespace::GlobalNetworkMonitor> GlobalNamespace::GlobalNetworkMonitor::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GlobalNetworkMonitor>, "<instance>k__BackingField", ::GlobalNamespace::GlobalNetworkMonitor*>();
}
inline ::UnityW<::GlobalNamespace::GlobalNetworkMonitor> GlobalNamespace::GlobalNetworkMonitor::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GlobalNetworkMonitor>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GlobalNetworkMonitor::set_instance(::GlobalNamespace::GlobalNetworkMonitor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::GlobalNetworkMonitor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GlobalNetworkMonitor::add_NetworkDown(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"add_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GlobalNetworkMonitor::remove_NetworkDown(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"remove_NetworkDown", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GlobalNetworkMonitor::add_NetworkRestored(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"add_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GlobalNetworkMonitor::remove_NetworkRestored(::System::Action_1<double_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"remove_NetworkRestored", {}, {::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GlobalNetworkMonitor::get_IsOnline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"get_IsOnline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GlobalNetworkMonitor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GlobalNetworkMonitor::RegisterIntermediateNetworkMonitor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"RegisterIntermediateNetworkMonitor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GlobalNetworkMonitor::OnNetworkDown(double_t  downtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"OnNetworkDown", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, downtime);
}
inline void GlobalNamespace::GlobalNetworkMonitor::OnNetworkRestored(double_t  downtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {"OnNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, downtime);
}
inline void GlobalNamespace::GlobalNetworkMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalNetworkMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GlobalNetworkMonitor* GlobalNamespace::GlobalNetworkMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GlobalNetworkMonitor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalNetworkMonitor::GlobalNetworkMonitor()   {
}
