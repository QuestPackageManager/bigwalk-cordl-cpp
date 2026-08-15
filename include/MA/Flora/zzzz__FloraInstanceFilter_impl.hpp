#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceFilter.hpp"
#include "MA/Flora/zzzz__FloraInstanceTypeMask_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "MA/Flora/zzzz__FloraInstanceFilter_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTypeMask_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.get_Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)()>(&::MA::Flora::FloraInstanceFilter::get_Any)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e4440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"get_Any", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.get_IdentitySourceGameObjectID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraInstanceFilter::*)()>(&::MA::Flora::FloraInstanceFilter::get_IdentitySourceGameObjectID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"get_IdentitySourceGameObjectID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.set_IdentitySourceGameObjectID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceFilter::*)(int32_t)>(&::MA::Flora::FloraInstanceFilter::set_IdentitySourceGameObjectID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"set_IdentitySourceGameObjectID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceFilter::*)(::MA::Flora::FloraInstanceTypeMask, ::UnityEngine::LayerMask, int32_t, int32_t, int32_t)>(&::MA::Flora::FloraInstanceFilter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814e4410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTypeMask>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByTrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::Terrain*)>(&::MA::Flora::FloraInstanceFilter::ByTrees)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814e4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByTrees", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::Terrain*)>(&::MA::Flora::FloraInstanceFilter::ByDetails)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814e40c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByDetails", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::LayerMask)>(&::MA::Flora::FloraInstanceFilter::ByLayerMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814e41d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::GameObject*)>(&::MA::Flora::FloraInstanceFilter::ByOwner)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814e4290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByOwner", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::Transform*)>(&::MA::Flora::FloraInstanceFilter::ByOwner)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e41f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByOwner", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByIdentitySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::GameObject*)>(&::MA::Flora::FloraInstanceFilter::ByIdentitySource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814e4150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByIdentitySource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByRenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::GameObject*)>(&::MA::Flora::FloraInstanceFilter::ByRenderSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814e4310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByRenderSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.get_AuthoringGameObjectID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraInstanceFilter::*)()>(&::MA::Flora::FloraInstanceFilter::get_AuthoringGameObjectID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"get_AuthoringGameObjectID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.set_AuthoringGameObjectID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceFilter::*)(int32_t)>(&::MA::Flora::FloraInstanceFilter::set_AuthoringGameObjectID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"set_AuthoringGameObjectID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::Transform*)>(&::MA::Flora::FloraInstanceFilter::ByParent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e41f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceFilter.ByPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceFilter (*)(::UnityEngine::GameObject*)>(&::MA::Flora::FloraInstanceFilter::ByPrefab)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814e4150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::get_Any()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"get_Any", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::FloraInstanceFilter::get_IdentitySourceGameObjectID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"get_IdentitySourceGameObjectID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::FloraInstanceFilter::set_IdentitySourceGameObjectID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"set_IdentitySourceGameObjectID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void MA::Flora::FloraInstanceFilter::_ctor(::MA::Flora::FloraInstanceTypeMask  typeMask, ::UnityEngine::LayerMask  layerMask, int32_t  prefabGameObjectID, int32_t  authoringGameObjectID, int32_t  renderSourceGameObjectID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTypeMask>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, typeMask, layerMask, prefabGameObjectID, authoringGameObjectID, renderSourceGameObjectID);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByTrees(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByTrees", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, terrain);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByDetails(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByDetails", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, terrain);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByLayerMask(::UnityEngine::LayerMask  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, layerMask);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByOwner(::UnityEngine::GameObject*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByOwner", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, owner);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByOwner(::UnityEngine::Transform*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByOwner", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, owner);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByIdentitySource(::UnityEngine::GameObject*  identitySource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByIdentitySource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, identitySource);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByRenderSource(::UnityEngine::GameObject*  renderSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByRenderSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, renderSource);
}
inline int32_t MA::Flora::FloraInstanceFilter::get_AuthoringGameObjectID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"get_AuthoringGameObjectID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::FloraInstanceFilter::set_AuthoringGameObjectID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"set_AuthoringGameObjectID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByParent(::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, parent);
}
inline ::MA::Flora::FloraInstanceFilter MA::Flora::FloraInstanceFilter::ByPrefab(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceFilter>(),
                        {"ByPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceFilter>(nullptr, ___internal_method, prefab);
}
// Ctor Parameters [CppParam { name: "TypeMask", ty: "::MA::Flora::FloraInstanceTypeMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "LayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "PrefabGameObjectID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RenderSourceGameObjectID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OwnerGameObjectID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraInstanceFilter::FloraInstanceFilter(::MA::Flora::FloraInstanceTypeMask  TypeMask, ::UnityEngine::LayerMask  LayerMask, int32_t  PrefabGameObjectID, int32_t  RenderSourceGameObjectID, int32_t  OwnerGameObjectID) noexcept  {
this->TypeMask = TypeMask;
this->LayerMask = LayerMask;
this->PrefabGameObjectID = PrefabGameObjectID;
this->RenderSourceGameObjectID = RenderSourceGameObjectID;
this->OwnerGameObjectID = OwnerGameObjectID;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceFilter::FloraInstanceFilter()   {
}
