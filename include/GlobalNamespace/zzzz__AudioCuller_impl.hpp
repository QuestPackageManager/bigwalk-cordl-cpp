#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioCuller.hpp"
#include "GlobalNamespace/zzzz__AudioCullable_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioCuller_def.hpp"
#include "GlobalNamespace/zzzz__AudioCullable_def.hpp"
#include "GlobalNamespace/zzzz__AudioCullingJobScheduler_def.hpp"
#include "GlobalNamespace/zzzz__CustomCullingGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioCuller> (*)()>(&::GlobalNamespace::AudioCuller::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180323920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioCuller*)>(&::GlobalNamespace::AudioCuller::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180323280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::AudioCuller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)()>(&::GlobalNamespace::AudioCuller::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180323280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)()>(&::GlobalNamespace::AudioCuller::Start)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180323630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)()>(&::GlobalNamespace::AudioCuller::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180323440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)()>(&::GlobalNamespace::AudioCuller::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180323760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)()>(&::GlobalNamespace::AudioCuller::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.RegisterCullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)(::GlobalNamespace::AudioCullable*)>(&::GlobalNamespace::AudioCuller::RegisterCullable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180323490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"RegisterCullable", {}, {::i2c::type_of<::GlobalNamespace::AudioCullable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.DeregisterCullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)(::GlobalNamespace::AudioCullable*)>(&::GlobalNamespace::AudioCuller::DeregisterCullable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803232b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"DeregisterCullable", {}, {::i2c::type_of<::GlobalNamespace::AudioCullable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller.EraseSwapBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)(int32_t)>(&::GlobalNamespace::AudioCuller::EraseSwapBack)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803233e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"EraseSwapBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCuller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCuller::*)()>(&::GlobalNamespace::AudioCuller::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803238a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>>& GlobalNamespace::AudioCuller::__cordl_internal_get__cullableObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullableObjects;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>> const& GlobalNamespace::AudioCuller::__cordl_internal_get__cullableObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullableObjects;
}
constexpr void GlobalNamespace::AudioCuller::__cordl_internal_set__cullableObjects(::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cullableObjects = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere>& GlobalNamespace::AudioCuller::__cordl_internal_get__spheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& GlobalNamespace::AudioCuller::__cordl_internal_get__spheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr void GlobalNamespace::AudioCuller::__cordl_internal_set__spheres(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spheres = value;
}
constexpr int32_t& GlobalNamespace::AudioCuller::__cordl_internal_get__spheresCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheresCount;
}
constexpr int32_t const& GlobalNamespace::AudioCuller::__cordl_internal_get__spheresCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheresCount;
}
constexpr void GlobalNamespace::AudioCuller::__cordl_internal_set__spheresCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spheresCount = value;
}
constexpr ::GlobalNamespace::CustomCullingGroup*& GlobalNamespace::AudioCuller::__cordl_internal_get__cullingGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingGroup;
}
constexpr ::GlobalNamespace::CustomCullingGroup* const& GlobalNamespace::AudioCuller::__cordl_internal_get__cullingGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingGroup;
}
constexpr void GlobalNamespace::AudioCuller::__cordl_internal_set__cullingGroup(::GlobalNamespace::CustomCullingGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cullingGroup = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::AudioCuller::__cordl_internal_get__results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____results;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::AudioCuller::__cordl_internal_get__results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____results;
}
constexpr void GlobalNamespace::AudioCuller::__cordl_internal_set__results(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____results = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>& GlobalNamespace::AudioCuller::__cordl_internal_get__jobScheduler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobScheduler;
}
constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler> const& GlobalNamespace::AudioCuller::__cordl_internal_get__jobScheduler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobScheduler;
}
constexpr void GlobalNamespace::AudioCuller::__cordl_internal_set__jobScheduler(::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jobScheduler = value;
}
inline void GlobalNamespace::AudioCuller::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AudioCuller>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AudioCuller>, "<Instance>k__BackingField", ::GlobalNamespace::AudioCuller*>(std::forward<::UnityW<::GlobalNamespace::AudioCuller>>(value));
}
inline ::UnityW<::GlobalNamespace::AudioCuller> GlobalNamespace::AudioCuller::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AudioCuller>, "<Instance>k__BackingField", ::GlobalNamespace::AudioCuller*>();
}
inline ::UnityW<::GlobalNamespace::AudioCuller> GlobalNamespace::AudioCuller::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioCuller>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioCuller::set_Instance(::GlobalNamespace::AudioCuller*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::AudioCuller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::AudioCuller::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCuller::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCuller::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCuller::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCuller::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCuller::RegisterCullable(::GlobalNamespace::AudioCullable*  cullable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"RegisterCullable", {}, {::i2c::type_of<::GlobalNamespace::AudioCullable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullable);
}
inline void GlobalNamespace::AudioCuller::DeregisterCullable(::GlobalNamespace::AudioCullable*  cullable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"DeregisterCullable", {}, {::i2c::type_of<::GlobalNamespace::AudioCullable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullable);
}
inline void GlobalNamespace::AudioCuller::EraseSwapBack(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {"EraseSwapBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::AudioCuller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCuller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioCuller* GlobalNamespace::AudioCuller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioCuller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioCuller::AudioCuller()   {
}
