#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkManagerSelector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkManagerSelector_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkManagerSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkManagerSelector::*)()>(&::GlobalNamespace::NetworkManagerSelector::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18037eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkManagerSelector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkManagerSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkManagerSelector::*)()>(&::GlobalNamespace::NetworkManagerSelector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkManagerSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NetworkManagerSelector::__cordl_internal_get_networkManagerPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkManagerPC;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NetworkManagerSelector::__cordl_internal_get_networkManagerPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkManagerPC;
}
constexpr void GlobalNamespace::NetworkManagerSelector::__cordl_internal_set_networkManagerPC(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkManagerPC = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NetworkManagerSelector::__cordl_internal_get_networkManagerConsole()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkManagerConsole;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NetworkManagerSelector::__cordl_internal_get_networkManagerConsole() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkManagerConsole;
}
constexpr void GlobalNamespace::NetworkManagerSelector::__cordl_internal_set_networkManagerConsole(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkManagerConsole = value;
}
inline void GlobalNamespace::NetworkManagerSelector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkManagerSelector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkManagerSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkManagerSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkManagerSelector* GlobalNamespace::NetworkManagerSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkManagerSelector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkManagerSelector::NetworkManagerSelector()   {
}
