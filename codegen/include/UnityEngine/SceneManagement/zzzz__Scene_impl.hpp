#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/Scene.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneHandle_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneHandle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.IsValidInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::Scene::IsValidInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182286da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"IsValidInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetPathInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::Scene::GetPathInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182286b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetPathInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetNameInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::Scene::GetNameInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182286a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetNameInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetGUIDInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::Scene::GetGUIDInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822869e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetGUIDInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetIsLoadedInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::Scene::GetIsLoadedInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182286a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetIsLoadedInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetBuildIndexInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::Scene::GetBuildIndexInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822869b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetBuildIndexInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetRootCountInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::Scene::GetRootCountInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182286b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootCountInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetRootGameObjectsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::SceneHandle, ::System::Object*)>(&::UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182286bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjectsInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.get_handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::SceneHandle (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::get_handle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.get_guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::get_guid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182286e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_guid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182286dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.get_path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::get_path)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182286e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::get_name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182286e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.get_isLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::get_isLoaded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182286e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_isLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.get_buildIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::get_buildIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182286df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_buildIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.get_rootCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::get_rootCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182286eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_rootCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetRootGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::GetRootGameObjects)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182286d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetRootGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::Scene::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::UnityEngine::SceneManagement::Scene::GetRootGameObjects)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182286be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::Scene::op_Equality)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1812a32a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::Scene::op_Inequality)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1812a3370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::SceneManagement::Scene::*)()>(&::UnityEngine::SceneManagement::Scene::GetHashCode)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1812a2f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                    {::i2c::class_of<::UnityEngine::SceneManagement::Scene>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SceneManagement::Scene::*)(::System::Object*)>(&::UnityEngine::SceneManagement::Scene::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182286930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                    {::i2c::class_of<::UnityEngine::SceneManagement::Scene>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.IsValidInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>)>(&::UnityEngine::SceneManagement::Scene::IsValidInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"IsValidInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetPathInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SceneManagement::Scene::GetPathInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetPathInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetNameInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SceneManagement::Scene::GetNameInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetNameInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetGUIDInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SceneManagement::Scene::GetGUIDInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822869d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetGUIDInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetIsLoadedInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>)>(&::UnityEngine::SceneManagement::Scene::GetIsLoadedInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetIsLoadedInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetBuildIndexInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>)>(&::UnityEngine::SceneManagement::Scene::GetBuildIndexInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822869a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetBuildIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetRootCountInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>)>(&::UnityEngine::SceneManagement::Scene::GetRootCountInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootCountInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::Scene.GetRootGameObjectsInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::SceneManagement::SceneHandle>, ::System::Object*)>(&::UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjectsInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::SceneManagement::Scene::IsValidInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"IsValidInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneHandle);
}
inline ::StringW UnityEngine::SceneManagement::Scene::GetPathInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetPathInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sceneHandle);
}
inline ::StringW UnityEngine::SceneManagement::Scene::GetNameInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetNameInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sceneHandle);
}
inline ::StringW UnityEngine::SceneManagement::Scene::GetGUIDInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetGUIDInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sceneHandle);
}
inline bool UnityEngine::SceneManagement::Scene::GetIsLoadedInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetIsLoadedInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneHandle);
}
inline int32_t UnityEngine::SceneManagement::Scene::GetBuildIndexInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetBuildIndexInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneHandle);
}
inline int32_t UnityEngine::SceneManagement::Scene::GetRootCountInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootCountInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneHandle);
}
inline void UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle, ::System::Object*  resultRootList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjectsInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneHandle, resultRootList);
}
inline ::UnityEngine::SceneManagement::SceneHandle UnityEngine::SceneManagement::Scene::get_handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::SceneHandle>(*this, ___internal_method);
}
inline ::StringW UnityEngine::SceneManagement::Scene::get_guid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_guid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::SceneManagement::Scene::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::SceneManagement::Scene::get_path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::SceneManagement::Scene::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::SceneManagement::Scene::get_isLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_isLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::SceneManagement::Scene::get_buildIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_buildIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::SceneManagement::Scene::get_rootCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"get_rootCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> UnityEngine::SceneManagement::Scene::GetRootGameObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(*this, ___internal_method);
}
inline void UnityEngine::SceneManagement::Scene::GetRootGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  rootGameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rootGameObjects);
}
inline bool UnityEngine::SceneManagement::Scene::op_Equality(::UnityEngine::SceneManagement::Scene  lhs, ::UnityEngine::SceneManagement::Scene  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::SceneManagement::Scene::op_Inequality(::UnityEngine::SceneManagement::Scene  lhs, ::UnityEngine::SceneManagement::Scene  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::SceneManagement::Scene::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::SceneManagement::Scene>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::SceneManagement::Scene::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::SceneManagement::Scene>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::SceneManagement::Scene::IsValidInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"IsValidInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneHandle);
}
inline void UnityEngine::SceneManagement::Scene::GetPathInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetPathInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneHandle, ret);
}
inline void UnityEngine::SceneManagement::Scene::GetNameInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetNameInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneHandle, ret);
}
inline void UnityEngine::SceneManagement::Scene::GetGUIDInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetGUIDInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneHandle, ret);
}
inline bool UnityEngine::SceneManagement::Scene::GetIsLoadedInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetIsLoadedInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneHandle);
}
inline int32_t UnityEngine::SceneManagement::Scene::GetBuildIndexInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetBuildIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneHandle);
}
inline int32_t UnityEngine::SceneManagement::Scene::GetRootCountInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootCountInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneHandle);
}
inline void UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::System::Object*  resultRootList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::Scene>(),
                        {"GetRootGameObjectsInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::SceneHandle>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneHandle, resultRootList);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::SceneManagement::SceneHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SceneManagement::Scene::Scene(::UnityEngine::SceneManagement::SceneHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::Scene::Scene()   {
}
