#pragma once
// IWYU pragma private; include "GlobalNamespace/OcclusionCullingBlockerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OcclusionCullingBlockerManager_def.hpp"
#include "GlobalNamespace/zzzz__OcclusionCullingBlocker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlockerManager.AddBlocker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlockerManager::*)(::GlobalNamespace::OcclusionCullingBlocker*)>(&::GlobalNamespace::OcclusionCullingBlockerManager::AddBlocker)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803edcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {"AddBlocker", {}, {::i2c::type_of<::GlobalNamespace::OcclusionCullingBlocker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlockerManager.RemoveBlocker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlockerManager::*)(::GlobalNamespace::OcclusionCullingBlocker*)>(&::GlobalNamespace::OcclusionCullingBlockerManager::RemoveBlocker)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803eddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {"RemoveBlocker", {}, {::i2c::type_of<::GlobalNamespace::OcclusionCullingBlocker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlockerManager.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlockerManager::*)()>(&::GlobalNamespace::OcclusionCullingBlockerManager::Refresh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803edd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OcclusionCullingBlockerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OcclusionCullingBlockerManager::*)()>(&::GlobalNamespace::OcclusionCullingBlockerManager::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ede20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::OcclusionCullingBlockerManager::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::OcclusionCullingBlockerManager::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void GlobalNamespace::OcclusionCullingBlockerManager::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camera = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>*& GlobalNamespace::OcclusionCullingBlockerManager::__cordl_internal_get__blockers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>* const& GlobalNamespace::OcclusionCullingBlockerManager::__cordl_internal_get__blockers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockers;
}
constexpr void GlobalNamespace::OcclusionCullingBlockerManager::__cordl_internal_set__blockers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockers = value;
}
inline void GlobalNamespace::OcclusionCullingBlockerManager::AddBlocker(::GlobalNamespace::OcclusionCullingBlocker*  blocker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {"AddBlocker", {}, {::i2c::type_of<::GlobalNamespace::OcclusionCullingBlocker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blocker);
}
inline void GlobalNamespace::OcclusionCullingBlockerManager::RemoveBlocker(::GlobalNamespace::OcclusionCullingBlocker*  blocker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {"RemoveBlocker", {}, {::i2c::type_of<::GlobalNamespace::OcclusionCullingBlocker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blocker);
}
inline void GlobalNamespace::OcclusionCullingBlockerManager::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OcclusionCullingBlockerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OcclusionCullingBlockerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OcclusionCullingBlockerManager* GlobalNamespace::OcclusionCullingBlockerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OcclusionCullingBlockerManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OcclusionCullingBlockerManager::OcclusionCullingBlockerManager()   {
}
