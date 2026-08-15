#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectChangeMaterial.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectChangeMaterial_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectChangeMaterial_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings::PeckEffectChangeMaterial_MeshChangeSettings(::UnityW<::UnityEngine::Material>  material) noexcept  {
this->material = material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings::PeckEffectChangeMaterial_MeshChangeSettings()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectChangeMaterial.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectChangeMaterial::*)()>(&::GlobalNamespace::PeckEffectChangeMaterial::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180449170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeMaterial*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectChangeMaterial.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectChangeMaterial::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectChangeMaterial::Peck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180449210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeMaterial*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectChangeMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectChangeMaterial::*)()>(&::GlobalNamespace::PeckEffectChangeMaterial::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeMaterial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr bool& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_onlyChangeSomeSubmeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyChangeSomeSubmeshes;
}
constexpr bool const& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_onlyChangeSomeSubmeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyChangeSomeSubmeshes;
}
constexpr void GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_set_onlyChangeSomeSubmeshes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyChangeSomeSubmeshes = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_subMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_subMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshes;
}
constexpr void GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_set_subMeshes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subMeshes = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings>& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_settingsPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings> const& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_settingsPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr void GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsPerState = value;
}
constexpr bool& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectChangeMaterial::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectChangeMaterial::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeMaterial*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectChangeMaterial::Peck(::GlobalNamespace::PeckContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeMaterial*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::PeckEffectChangeMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectChangeMaterial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectChangeMaterial* GlobalNamespace::PeckEffectChangeMaterial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectChangeMaterial*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectChangeMaterial::PeckEffectChangeMaterial()   {
}
