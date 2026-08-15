#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCountSwapper.hpp"
#include "GlobalNamespace/zzzz__PlayerCount_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCountSwapper_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCountSwapper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCountSwapper::*)()>(&::GlobalNamespace::PlayerCountSwapper::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180427e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountSwapper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCountSwapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCountSwapper::*)()>(&::GlobalNamespace::PlayerCountSwapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountSwapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerCountSwapper::__cordl_internal_get_target4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target4;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerCountSwapper::__cordl_internal_get_target4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target4;
}
constexpr void GlobalNamespace::PlayerCountSwapper::__cordl_internal_set_target4(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target4 = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerCountSwapper::__cordl_internal_get_target3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target3;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerCountSwapper::__cordl_internal_get_target3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target3;
}
constexpr void GlobalNamespace::PlayerCountSwapper::__cordl_internal_set_target3(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target3 = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerCountSwapper::__cordl_internal_get_target2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target2;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerCountSwapper::__cordl_internal_get_target2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target2;
}
constexpr void GlobalNamespace::PlayerCountSwapper::__cordl_internal_set_target2(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target2 = value;
}
inline void GlobalNamespace::PlayerCountSwapper::setStaticF_playerCount(::GlobalNamespace::PlayerCount  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PlayerCount, "playerCount", ::GlobalNamespace::PlayerCountSwapper*>(std::forward<::GlobalNamespace::PlayerCount>(value));
}
inline ::GlobalNamespace::PlayerCount GlobalNamespace::PlayerCountSwapper::getStaticF_playerCount()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PlayerCount, "playerCount", ::GlobalNamespace::PlayerCountSwapper*>();
}
inline void GlobalNamespace::PlayerCountSwapper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountSwapper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCountSwapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountSwapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCountSwapper* GlobalNamespace::PlayerCountSwapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCountSwapper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCountSwapper::PlayerCountSwapper()   {
}
