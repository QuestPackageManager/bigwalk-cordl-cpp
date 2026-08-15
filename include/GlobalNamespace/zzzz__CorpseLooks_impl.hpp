#pragma once
// IWYU pragma private; include "GlobalNamespace/CorpseLooks.hpp"
#include "GlobalNamespace/zzzz__LimbSpline_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CorpseLooks_def.hpp"
#include "GlobalNamespace/zzzz__LimbSpline_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeSet_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)()>(&::GlobalNamespace::CorpseLooks::Initialize)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1803f8ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.SetMaterialInRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)(::UnityEngine::Material*, ::ArrayW<::UnityEngine::MeshRenderer*>)>(&::GlobalNamespace::CorpseLooks::SetMaterialInRenderers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803f9240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetMaterialInRenderers", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::MeshRenderer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)()>(&::GlobalNamespace::CorpseLooks::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f8ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)()>(&::GlobalNamespace::CorpseLooks::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.SetHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)(int32_t)>(&::GlobalNamespace::CorpseLooks::SetHead)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f9010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.SetTorso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)(int32_t)>(&::GlobalNamespace::CorpseLooks::SetTorso)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f92a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetTorso", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.SetLegs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)(int32_t)>(&::GlobalNamespace::CorpseLooks::SetLegs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f9050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetLegs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.SetEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)(::GlobalNamespace::PlayerEyeMood)>(&::GlobalNamespace::CorpseLooks::SetEyes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803f8ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetEyes", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.SetAllParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::CorpseLooks::SetAllParts)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803f8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetAllParts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks.SetLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)(int32_t, ::UnityEngine::Material*, ::ArrayW<::GlobalNamespace::LimbSpline*>)>(&::GlobalNamespace::CorpseLooks::SetLook)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803f9090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetLook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LimbSpline*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CorpseLooks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CorpseLooks::*)()>(&::GlobalNamespace::CorpseLooks::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CorpseLooks::__cordl_internal_get__headColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headColorIndex;
}
constexpr int32_t const& GlobalNamespace::CorpseLooks::__cordl_internal_get__headColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headColorIndex;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set__headColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headColorIndex = value;
}
constexpr int32_t& GlobalNamespace::CorpseLooks::__cordl_internal_get__torsoColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____torsoColorIndex;
}
constexpr int32_t const& GlobalNamespace::CorpseLooks::__cordl_internal_get__torsoColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____torsoColorIndex;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set__torsoColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____torsoColorIndex = value;
}
constexpr int32_t& GlobalNamespace::CorpseLooks::__cordl_internal_get__legsColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legsColorIndex;
}
constexpr int32_t const& GlobalNamespace::CorpseLooks::__cordl_internal_get__legsColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legsColorIndex;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set__legsColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____legsColorIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::CorpseLooks::__cordl_internal_get_headParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_headParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headParts;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_headParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headParts = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::CorpseLooks::__cordl_internal_get_headItself()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headItself;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_headItself() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headItself;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_headItself(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headItself = value;
}
constexpr int32_t& GlobalNamespace::CorpseLooks::__cordl_internal_get_eyeSubmeshIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSubmeshIndex;
}
constexpr int32_t const& GlobalNamespace::CorpseLooks::__cordl_internal_get_eyeSubmeshIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSubmeshIndex;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_eyeSubmeshIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeSubmeshIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::CorpseLooks::__cordl_internal_get_torsoParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_torsoParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoParts;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_torsoParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torsoParts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::CorpseLooks::__cordl_internal_get_legsParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_legsParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsParts;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_legsParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legsParts = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>>& GlobalNamespace::CorpseLooks::__cordl_internal_get_torsoLimbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoLimbs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_torsoLimbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoLimbs;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_torsoLimbs(::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torsoLimbs = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& GlobalNamespace::CorpseLooks::__cordl_internal_get_lookSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_lookSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookSet = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet>& GlobalNamespace::CorpseLooks::__cordl_internal_get_eyeSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_eyeSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSet;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_eyeSet(::UnityW<::GlobalNamespace::PlayerEyeSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeSet = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CorpseLooks::__cordl_internal_get_baseMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CorpseLooks::__cordl_internal_get_baseMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMaterial;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CorpseLooks::__cordl_internal_get__eyeMaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeMaterialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CorpseLooks::__cordl_internal_get__eyeMaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeMaterialInstance;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set__eyeMaterialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eyeMaterialInstance = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CorpseLooks::__cordl_internal_get__headMaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headMaterialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CorpseLooks::__cordl_internal_get__headMaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headMaterialInstance;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set__headMaterialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headMaterialInstance = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CorpseLooks::__cordl_internal_get__torsoMaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____torsoMaterialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CorpseLooks::__cordl_internal_get__torsoMaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____torsoMaterialInstance;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set__torsoMaterialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____torsoMaterialInstance = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CorpseLooks::__cordl_internal_get__legsMaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legsMaterialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CorpseLooks::__cordl_internal_get__legsMaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legsMaterialInstance;
}
constexpr void GlobalNamespace::CorpseLooks::__cordl_internal_set__legsMaterialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____legsMaterialInstance = value;
}
inline void GlobalNamespace::CorpseLooks::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CorpseLooks::SetMaterialInRenderers(::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::MeshRenderer*>  renderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetMaterialInRenderers", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::MeshRenderer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, renderers);
}
inline void GlobalNamespace::CorpseLooks::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CorpseLooks::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CorpseLooks::SetHead(int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::CorpseLooks::SetTorso(int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetTorso", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::CorpseLooks::SetLegs(int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetLegs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::CorpseLooks::SetEyes(::GlobalNamespace::PlayerEyeMood  eyeMood)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetEyes", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eyeMood);
}
inline void GlobalNamespace::CorpseLooks::SetAllParts(int32_t  head, int32_t  torso, int32_t  legs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetAllParts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, head, torso, legs);
}
inline void GlobalNamespace::CorpseLooks::SetLook(int32_t  colorIndex, ::UnityEngine::Material*  materialInstance, ::ArrayW<::GlobalNamespace::LimbSpline*>  limbSplines)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {"SetLook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LimbSpline*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorIndex, materialInstance, limbSplines);
}
inline void GlobalNamespace::CorpseLooks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CorpseLooks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CorpseLooks* GlobalNamespace::CorpseLooks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CorpseLooks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CorpseLooks::CorpseLooks()   {
}
