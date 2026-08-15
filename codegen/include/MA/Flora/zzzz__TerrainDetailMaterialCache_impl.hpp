#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailMaterialCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__half2_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailMaterialCache_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailMaterialCache_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::*)(::UnityEngine::EntityId, int32_t)>(&::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a47e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::*)(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding)>(&::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::*)(::System::Object*)>(&::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18150e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(),
                    {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::*)()>(&::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::GetHashCode)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180e0c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(),
                    {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(), 2}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::_ctor(::UnityEngine::EntityId  terrainId, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrainId, layerIndex);
}
inline bool MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::Equals(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>"
constexpr  MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::operator ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>* MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::i___System__IEquatable_1___MA__Flora__TerrainDetailMaterialCache_TerrainLayerBinding_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TerrainId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "LayerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::TerrainDetailMaterialCache_TerrainLayerBinding(::UnityEngine::EntityId  TerrainId, int32_t  LayerIndex) noexcept  {
this->TerrainId = TerrainId;
this->LayerIndex = LayerIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding::TerrainDetailMaterialCache_TerrainLayerBinding()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache_MaterialKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailMaterialCache_MaterialKey::*)(::MA::Flora::TerrainDetailMaterialCache_MaterialKey)>(&::MA::Flora::TerrainDetailMaterialCache_MaterialKey::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache_MaterialKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailMaterialCache_MaterialKey::*)(::System::Object*)>(&::MA::Flora::TerrainDetailMaterialCache_MaterialKey::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18150acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(),
                    {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache_MaterialKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TerrainDetailMaterialCache_MaterialKey::*)()>(&::MA::Flora::TerrainDetailMaterialCache_MaterialKey::GetHashCode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18150adc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(),
                    {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::TerrainDetailMaterialCache_MaterialKey::Equals(::MA::Flora::TerrainDetailMaterialCache_MaterialKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::TerrainDetailMaterialCache_MaterialKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::TerrainDetailMaterialCache_MaterialKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>"
constexpr  MA::Flora::TerrainDetailMaterialCache_MaterialKey::operator ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>* MA::Flora::TerrainDetailMaterialCache_MaterialKey::i___System__IEquatable_1___MA__Flora__TerrainDetailMaterialCache_MaterialKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TextureId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "HealthyColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "DryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinMaxSize", ty: "::Unity::Mathematics::half2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Billboard", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailMaterialCache_MaterialKey::TerrainDetailMaterialCache_MaterialKey(::UnityEngine::EntityId  TextureId, ::UnityEngine::Color32  HealthyColor, ::UnityEngine::Color32  DryColor, ::Unity::Mathematics::half2  MinMaxSize, bool  Billboard) noexcept  {
this->TextureId = TextureId;
this->HealthyColor = HealthyColor;
this->DryColor = DryColor;
this->MinMaxSize = MinMaxSize;
this->Billboard = Billboard;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailMaterialCache_MaterialKey::TerrainDetailMaterialCache_MaterialKey()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::TerrainDetailMaterialCache::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18150e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)()>(&::MA::Flora::TerrainDetailMaterialCache::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18150da30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.GetTerrainGrassPlaceholderPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::TerrainDetailMaterialCache::*)()>(&::MA::Flora::TerrainDetailMaterialCache::GetTerrainGrassPlaceholderPrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"GetTerrainGrassPlaceholderPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.FreeUnusedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)()>(&::MA::Flora::TerrainDetailMaterialCache::FreeUnusedMaterials)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18150da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"FreeUnusedMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.OnTerrainRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)(::UnityEngine::EntityId)>(&::MA::Flora::TerrainDetailMaterialCache::OnTerrainRemoved)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18150e3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"OnTerrainRemoved", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.OnTerrainChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)(::UnityEngine::EntityId)>(&::MA::Flora::TerrainDetailMaterialCache::OnTerrainChanged)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18150e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"OnTerrainChanged", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.GetOrCreateMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::MA::Flora::TerrainDetailMaterialCache::*)(::by_ref<::MA::Flora::TerrainDetailPrototype>)>(&::MA::Flora::TerrainDetailMaterialCache::GetOrCreateMaterial)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x18150db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"GetOrCreateMaterial", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailPrototype>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.AllocateMaterialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TerrainDetailMaterialCache::*)()>(&::MA::Flora::TerrainDetailMaterialCache::AllocateMaterialIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18150d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"AllocateMaterialIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.IncrementMaterialRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)(int32_t)>(&::MA::Flora::TerrainDetailMaterialCache::IncrementMaterialRef)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"IncrementMaterialRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.DecrementMaterialRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)(int32_t)>(&::MA::Flora::TerrainDetailMaterialCache::DecrementMaterialRef)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18150d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"DecrementMaterialRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailMaterialCache.DestroyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailMaterialCache::*)(int32_t)>(&::MA::Flora::TerrainDetailMaterialCache::DestroyMaterial)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18150d920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"DestroyMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>*& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassMaterialIndexLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassMaterialIndexLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>* const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassMaterialIndexLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassMaterialIndexLookup;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_GrassMaterialIndexLookup(::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrassMaterialIndexLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>*& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassBindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>* const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassBindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassBindings;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_GrassBindings(::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrassBindings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>*& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_TerrainLayerCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerrainLayerCounts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>* const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_TerrainLayerCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerrainLayerCounts;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_TerrainLayerCounts(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TerrainLayerCounts = value;
}
constexpr int32_t& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_NextGrassMaterialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextGrassMaterialIndex;
}
constexpr int32_t const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_NextGrassMaterialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextGrassMaterialIndex;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_NextGrassMaterialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextGrassMaterialIndex = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_FreeGrassMaterialIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreeGrassMaterialIndices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_FreeGrassMaterialIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreeGrassMaterialIndices;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_FreeGrassMaterialIndices(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FreeGrassMaterialIndices = value;
}
constexpr ::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassKeysByIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassKeysByIndex;
}
constexpr ::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey> const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassKeysByIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassKeysByIndex;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_GrassKeysByIndex(::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrassKeysByIndex = value;
}
constexpr ::ArrayW<int32_t>& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassRefCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassRefCounts;
}
constexpr ::ArrayW<int32_t> const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassRefCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassRefCounts;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_GrassRefCounts(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrassRefCounts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassMaterials;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_GrassMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrassMaterials = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassPlaceholderPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassPlaceholderPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassPlaceholderPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassPlaceholderPrefab;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_GrassPlaceholderPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrassPlaceholderPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Material>& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_GrassMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrassMaterial;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_GrassMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrassMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_BindingsToRemoveBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsToRemoveBuffer;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>* const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_BindingsToRemoveBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsToRemoveBuffer;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_BindingsToRemoveBuffer(::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsToRemoveBuffer = value;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_BindingsToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsToRemove;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>* const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_BindingsToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsToRemove;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_BindingsToRemove(::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsToRemove = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_PossibleFreeIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PossibleFreeIndices;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& MA::Flora::TerrainDetailMaterialCache::__cordl_internal_get_m_PossibleFreeIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PossibleFreeIndices;
}
constexpr void MA::Flora::TerrainDetailMaterialCache::__cordl_internal_set_m_PossibleFreeIndices(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PossibleFreeIndices = value;
}
inline void MA::Flora::TerrainDetailMaterialCache::setStaticF_HealthyColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HealthyColor", ::MA::Flora::TerrainDetailMaterialCache*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::TerrainDetailMaterialCache::getStaticF_HealthyColor()  {
return ::cordl_internals::getStaticField<int32_t, "HealthyColor", ::MA::Flora::TerrainDetailMaterialCache*>();
}
inline void MA::Flora::TerrainDetailMaterialCache::setStaticF_DryColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DryColor", ::MA::Flora::TerrainDetailMaterialCache*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::TerrainDetailMaterialCache::getStaticF_DryColor()  {
return ::cordl_internals::getStaticField<int32_t, "DryColor", ::MA::Flora::TerrainDetailMaterialCache*>();
}
inline void MA::Flora::TerrainDetailMaterialCache::setStaticF_MinMaxSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MinMaxSize", ::MA::Flora::TerrainDetailMaterialCache*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::TerrainDetailMaterialCache::getStaticF_MinMaxSize()  {
return ::cordl_internals::getStaticField<int32_t, "MinMaxSize", ::MA::Flora::TerrainDetailMaterialCache*>();
}
inline void MA::Flora::TerrainDetailMaterialCache::_ctor(::MA::Flora::FloraRuntimeResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void MA::Flora::TerrainDetailMaterialCache::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::TerrainDetailMaterialCache::GetTerrainGrassPlaceholderPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"GetTerrainGrassPlaceholderPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void MA::Flora::TerrainDetailMaterialCache::FreeUnusedMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"FreeUnusedMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::TerrainDetailMaterialCache::OnTerrainRemoved(::UnityEngine::EntityId  terrainId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"OnTerrainRemoved", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainId);
}
inline void MA::Flora::TerrainDetailMaterialCache::OnTerrainChanged(::UnityEngine::EntityId  terrainId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"OnTerrainChanged", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainId);
}
inline ::UnityW<::UnityEngine::Material> MA::Flora::TerrainDetailMaterialCache::GetOrCreateMaterial(::by_ref<::MA::Flora::TerrainDetailPrototype>  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"GetOrCreateMaterial", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailPrototype>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, prototype);
}
inline int32_t MA::Flora::TerrainDetailMaterialCache::AllocateMaterialIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"AllocateMaterialIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::TerrainDetailMaterialCache::IncrementMaterialRef(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"IncrementMaterialRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void MA::Flora::TerrainDetailMaterialCache::DecrementMaterialRef(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"DecrementMaterialRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void MA::Flora::TerrainDetailMaterialCache::DestroyMaterial(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailMaterialCache*>(),
                        {"DestroyMaterial", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::MA::Flora::TerrainDetailMaterialCache* MA::Flora::TerrainDetailMaterialCache::New_ctor(::MA::Flora::FloraRuntimeResources*  resources)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::TerrainDetailMaterialCache*>(resources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::TerrainDetailMaterialCache::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::TerrainDetailMaterialCache::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailMaterialCache::TerrainDetailMaterialCache()   {
}
