#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdMap.hpp"
#include "GlobalNamespace/zzzz__GourdMapReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GourdMap_def.hpp"
#include "GlobalNamespace/zzzz__GourdFlag_def.hpp"
#include "GlobalNamespace/zzzz__GourdPositionData_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GourdMap.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)()>(&::GlobalNamespace::GourdMap::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803fecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)()>(&::GlobalNamespace::GourdMap::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803febd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)()>(&::GlobalNamespace::GourdMap::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803fe4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)()>(&::GlobalNamespace::GourdMap::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ff2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)()>(&::GlobalNamespace::GourdMap::Initialize)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x1803fe5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.RefreshFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)(::GlobalNamespace::SaveablePropName, ::GlobalNamespace::GourdFlag_GourdState)>(&::GlobalNamespace::GourdMap::RefreshFlag)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803fedb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"RefreshFlag", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>(), ::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.RepositionAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)()>(&::GlobalNamespace::GourdMap::RepositionAll)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803fef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"RepositionAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.GetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GourdFlag> (::GlobalNamespace::GourdMap::*)(::GlobalNamespace::SaveablePropName)>(&::GlobalNamespace::GourdMap::GetFlag)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803fe520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"GetFlag", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap.RevealHiddenGourds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::GourdMap::RevealHiddenGourds)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803ff140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"RevealHiddenGourds", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdMap::*)()>(&::GlobalNamespace::GourdMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GourdPositionData>& GlobalNamespace::GourdMap::__cordl_internal_get_positionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionData;
}
constexpr ::UnityW<::GlobalNamespace::GourdPositionData> const& GlobalNamespace::GourdMap::__cordl_internal_get_positionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionData;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_positionData(::UnityW<::GlobalNamespace::GourdPositionData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionData = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GourdMap::__cordl_internal_get_flagPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GourdMap::__cordl_internal_get_flagPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagPrefab;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_flagPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GourdMap::__cordl_internal_get_flagPrefabVariantChallenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagPrefabVariantChallenge;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GourdMap::__cordl_internal_get_flagPrefabVariantChallenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagPrefabVariantChallenge;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_flagPrefabVariantChallenge(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagPrefabVariantChallenge = value;
}
constexpr ::ArrayW<::GlobalNamespace::GourdMapReference>& GlobalNamespace::GourdMap::__cordl_internal_get_gourdMapReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdMapReferences;
}
constexpr ::ArrayW<::GlobalNamespace::GourdMapReference> const& GlobalNamespace::GourdMap::__cordl_internal_get_gourdMapReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdMapReferences;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_gourdMapReferences(::ArrayW<::GlobalNamespace::GourdMapReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gourdMapReferences = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::GourdMap::__cordl_internal_get_revealSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revealSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::GourdMap::__cordl_internal_get_revealSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revealSystem;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_revealSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___revealSystem = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GourdMap::__cordl_internal_get_worldScaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldScaleOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GourdMap::__cordl_internal_get_worldScaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldScaleOffset;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_worldScaleOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldScaleOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GourdMap::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GourdMap::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_scale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::ArrayW<::GlobalNamespace::SaveablePropName>& GlobalNamespace::GourdMap::__cordl_internal_get_blacklist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blacklist;
}
constexpr ::ArrayW<::GlobalNamespace::SaveablePropName> const& GlobalNamespace::GourdMap::__cordl_internal_get_blacklist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blacklist;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_blacklist(::ArrayW<::GlobalNamespace::SaveablePropName>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blacklist = value;
}
constexpr bool& GlobalNamespace::GourdMap::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::GourdMap::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::GourdMap::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::GourdMap::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>*& GlobalNamespace::GourdMap::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>* const& GlobalNamespace::GourdMap::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void GlobalNamespace::GourdMap::__cordl_internal_set_flags(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
inline void GlobalNamespace::GourdMap::setStaticF_refreshFlag(::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>*, "refreshFlag", ::GlobalNamespace::GourdMap*>(std::forward<::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>* GlobalNamespace::GourdMap::getStaticF_refreshFlag()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>*, "refreshFlag", ::GlobalNamespace::GourdMap*>();
}
inline void GlobalNamespace::GourdMap::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GourdMap::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GourdMap::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GourdMap::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GourdMap::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GourdMap::RefreshFlag(::GlobalNamespace::SaveablePropName  saveablePropName, ::GlobalNamespace::GourdFlag_GourdState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"RefreshFlag", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>(), ::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveablePropName, state);
}
inline void GlobalNamespace::GourdMap::RepositionAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"RepositionAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GourdFlag> GlobalNamespace::GourdMap::GetFlag(::GlobalNamespace::SaveablePropName  saveablePropName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"GetFlag", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GourdFlag>>(this, ___internal_method, saveablePropName);
}
inline void GlobalNamespace::GourdMap::RevealHiddenGourds(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {"RevealHiddenGourds", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::GourdMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GourdMap* GlobalNamespace::GourdMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GourdMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GourdMap::GourdMap()   {
}
