#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/RoadSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystem_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystemConfig_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystem_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplinePath_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption::RoadSystem_RoadGenerationOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption::RoadSystem_RoadGenerationOption()   {
}
constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption  JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption::GeneratePlaymode{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption  JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption::GenerateRuntime{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption  JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption::GenerateAutomatic{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)()>(&::JBooth::MicroVerseCore::RoadSystem::OnEnable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18141ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem.ReGenerateRoads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)()>(&::JBooth::MicroVerseCore::RoadSystem::ReGenerateRoads)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18141edb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"ReGenerateRoads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)()>(&::JBooth::MicroVerseCore::RoadSystem::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18141ec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)()>(&::JBooth::MicroVerseCore::RoadSystem::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18141ebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem.UpdateAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)()>(&::JBooth::MicroVerseCore::RoadSystem::UpdateAll)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18141ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"UpdateAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem.UpdateMaterialOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)()>(&::JBooth::MicroVerseCore::RoadSystem::UpdateMaterialOverrides)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18141ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"UpdateMaterialOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem.UpdateSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)(::System::Nullable_1<::UnityEngine::Bounds>)>(&::JBooth::MicroVerseCore::RoadSystem::UpdateSystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"UpdateSystem", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::RoadSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::RoadSystem::*)()>(&::JBooth::MicroVerseCore::RoadSystem::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18141ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_hideGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideGameObjects;
}
constexpr bool const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_hideGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideGameObjects;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_hideGameObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideGameObjects = value;
}
constexpr bool& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_generateAtLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateAtLoad;
}
constexpr bool const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_generateAtLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateAtLoad;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_generateAtLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generateAtLoad = value;
}
constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_generationOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generationOption;
}
constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_generationOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generationOption;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_generationOption(::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generationOption = value;
}
constexpr int32_t& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::StringW& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_contentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentID;
}
constexpr ::StringW const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_contentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentID;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_contentID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentID = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig>& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_systemConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemConfig;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig> const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_systemConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemConfig;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_systemConfig(::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemConfig = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath>& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_splinePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePath;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath> const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_splinePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePath;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_splinePath(::UnityW<::JBooth::MicroVerseCore::SplinePath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splinePath = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_templateMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_templateMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateMaterial;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_templateMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateMaterial = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>*& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_materialInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialInstances;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>* const& JBooth::MicroVerseCore::RoadSystem::__cordl_internal_get_materialInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialInstances;
}
constexpr void JBooth::MicroVerseCore::RoadSystem::__cordl_internal_set_materialInstances(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialInstances = value;
}
inline void JBooth::MicroVerseCore::RoadSystem::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::RoadSystem::ReGenerateRoads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"ReGenerateRoads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::RoadSystem::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::RoadSystem::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::RoadSystem::UpdateAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"UpdateAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::RoadSystem::UpdateMaterialOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"UpdateMaterialOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::RoadSystem::UpdateSystem(::System::Nullable_1<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {"UpdateSystem", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline void JBooth::MicroVerseCore::RoadSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::RoadSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::RoadSystem* JBooth::MicroVerseCore::RoadSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::RoadSystem*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::RoadSystem::RoadSystem()   {
}
