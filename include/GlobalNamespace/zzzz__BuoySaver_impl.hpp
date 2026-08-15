#pragma once
// IWYU pragma private; include "GlobalNamespace/BuoySaver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuoySaver_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__SaveIdentity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuoySaver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuoySaver::*)()>(&::GlobalNamespace::BuoySaver::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803f7f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuoySaver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuoySaver.OnChangeServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuoySaver::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::BuoySaver::OnChangeServer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803f8000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuoySaver*>(),
                        {"OnChangeServer", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuoySaver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuoySaver::*)()>(&::GlobalNamespace::BuoySaver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuoySaver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::BuoySaver::__cordl_internal_get_propHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::BuoySaver::__cordl_internal_get_propHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr void GlobalNamespace::BuoySaver::__cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHome = value;
}
constexpr ::UnityW<::GlobalNamespace::SaveIdentity>& GlobalNamespace::BuoySaver::__cordl_internal_get_saveIdentity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIdentity;
}
constexpr ::UnityW<::GlobalNamespace::SaveIdentity> const& GlobalNamespace::BuoySaver::__cordl_internal_get_saveIdentity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIdentity;
}
constexpr void GlobalNamespace::BuoySaver::__cordl_internal_set_saveIdentity(::UnityW<::GlobalNamespace::SaveIdentity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveIdentity = value;
}
constexpr bool& GlobalNamespace::BuoySaver::__cordl_internal_get_isFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirst;
}
constexpr bool const& GlobalNamespace::BuoySaver::__cordl_internal_get_isFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirst;
}
constexpr void GlobalNamespace::BuoySaver::__cordl_internal_set_isFirst(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFirst = value;
}
inline void GlobalNamespace::BuoySaver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuoySaver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuoySaver::OnChangeServer(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  oldProp, ::GlobalNamespace::Prop*  newProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuoySaver*>(),
                        {"OnChangeServer", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, oldProp, newProp);
}
inline void GlobalNamespace::BuoySaver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuoySaver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuoySaver* GlobalNamespace::BuoySaver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuoySaver*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuoySaver::BuoySaver()   {
}
