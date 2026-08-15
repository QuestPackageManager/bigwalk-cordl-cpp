#pragma once
// IWYU pragma private; include "MA/Flora/ArchetypeKey.hpp"
#include "MA/Flora/zzzz__InstanceTag_impl.hpp"
#include "MA/Flora/zzzz__TemplateIndex_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__ArchetypeKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::ArchetypeKey.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ArchetypeKey (*)()>(&::MA::Flora::ArchetypeKey::get_None)> {
  constexpr static std::size_t size = 0xeb0;
  constexpr static std::size_t addrs = 0x180974130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeKey.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeKey::*)()>(&::MA::Flora::ArchetypeKey::get_IsEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181455c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeKey.get_IsContainerOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeKey::*)()>(&::MA::Flora::ArchetypeKey::get_IsContainerOwned)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181455c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"get_IsContainerOwned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeKey::*)(::MA::Flora::ArchetypeKey)>(&::MA::Flora::ArchetypeKey::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181455af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::ArchetypeKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ArchetypeKey::*)()>(&::MA::Flora::ArchetypeKey::GetHashCode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181455ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                    {::i2c::class_of<::MA::Flora::ArchetypeKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::ArchetypeKey MA::Flora::ArchetypeKey::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ArchetypeKey>(nullptr, ___internal_method);
}
inline bool MA::Flora::ArchetypeKey::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::ArchetypeKey::get_IsContainerOwned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"get_IsContainerOwned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::ArchetypeKey::Equals(::MA::Flora::ArchetypeKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::ArchetypeKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::ArchetypeKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ArchetypeKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::ArchetypeKey>"
constexpr  MA::Flora::ArchetypeKey::operator ::System::IEquatable_1<::MA::Flora::ArchetypeKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::ArchetypeKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::ArchetypeKey>"
constexpr ::System::IEquatable_1<::MA::Flora::ArchetypeKey>* MA::Flora::ArchetypeKey::i___System__IEquatable_1___MA__Flora__ArchetypeKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::ArchetypeKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Tags", ty: "::MA::Flora::InstanceTag", modifiers: "", def_value: Some("{}") }, CppParam { name: "Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: Some("{}") }, CppParam { name: "Layer", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxRenderDistance", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightmapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Template", ty: "::MA::Flora::TemplateIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "ContainerEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ArchetypeKey::ArchetypeKey(::MA::Flora::InstanceTag  Tags, ::UnityEngine::SceneManagement::Scene  Scene, uint8_t  Layer, uint16_t  MaxRenderDistance, int32_t  LightmapIndex, ::MA::Flora::TemplateIndex  Template, ::UnityEngine::EntityId  ContainerEntity) noexcept  {
this->Tags = Tags;
this->Scene = Scene;
this->Layer = Layer;
this->MaxRenderDistance = MaxRenderDistance;
this->LightmapIndex = LightmapIndex;
this->Template = Template;
this->ContainerEntity = ContainerEntity;
}
// Ctor Parameters []
constexpr ::MA::Flora::ArchetypeKey::ArchetypeKey()   {
}
