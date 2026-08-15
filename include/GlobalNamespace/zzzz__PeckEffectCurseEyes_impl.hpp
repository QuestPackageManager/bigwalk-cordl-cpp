#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectCurseEyes.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectCurseEyes_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectCurseEyes_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectCurseEyes_CurseState::PeckEffectCurseEyes_CurseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectCurseEyes_CurseState::PeckEffectCurseEyes_CurseState()   {
}
constexpr ::GlobalNamespace::PeckEffectCurseEyes_CurseState  GlobalNamespace::PeckEffectCurseEyes_CurseState::NotCursed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectCurseEyes_CurseState  GlobalNamespace::PeckEffectCurseEyes_CurseState::Cursed{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectCurseEyes.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectCurseEyes::*)()>(&::GlobalNamespace::PeckEffectCurseEyes::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180449430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectCurseEyes*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectCurseEyes.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectCurseEyes::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectCurseEyes::OnPeck)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804494d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectCurseEyes*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectCurseEyes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectCurseEyes::*)()>(&::GlobalNamespace::PeckEffectCurseEyes::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectCurseEyes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_normalMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_normalMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMesh;
}
constexpr void GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_set_normalMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_cursedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cursedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_cursedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cursedMesh;
}
constexpr void GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_set_cursedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cursedMesh = value;
}
constexpr ::GlobalNamespace::PeckPlayerReference& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_playerReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr ::GlobalNamespace::PeckPlayerReference const& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_playerReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr void GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState>& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_settingsPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState> const& GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_get_settingsPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr void GlobalNamespace::PeckEffectCurseEyes::__cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsPerState = value;
}
inline void GlobalNamespace::PeckEffectCurseEyes::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectCurseEyes*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectCurseEyes::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectCurseEyes*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectCurseEyes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectCurseEyes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectCurseEyes* GlobalNamespace::PeckEffectCurseEyes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectCurseEyes*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectCurseEyes::PeckEffectCurseEyes()   {
}
