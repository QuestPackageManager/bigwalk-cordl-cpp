#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioCullable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioCullable_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::get_Position)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803231c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.get_Culled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::get_Culled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"get_Culled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.set_Culled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullable::*)(bool)>(&::GlobalNamespace::AudioCullable::set_Culled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"set_Culled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.get_LastUpdateFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::get_LastUpdateFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"get_LastUpdateFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.set_LastUpdateFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullable::*)(int32_t)>(&::GlobalNamespace::AudioCullable::set_LastUpdateFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"set_LastUpdateFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180323170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180322fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.OnCulled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::OnCulled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180322f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"OnCulled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable.OnNotCulled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::OnNotCulled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180323110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"OnNotCulled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullable::*)()>(&::GlobalNamespace::AudioCullable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AudioCullable::__cordl_internal_get_TargetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AudioCullable::__cordl_internal_get_TargetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetObject;
}
constexpr void GlobalNamespace::AudioCullable::__cordl_internal_set_TargetObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetObject = value;
}
constexpr ::UnityW<::UnityEngine::Behaviour>& GlobalNamespace::AudioCullable::__cordl_internal_get_TargetComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetComponent;
}
constexpr ::UnityW<::UnityEngine::Behaviour> const& GlobalNamespace::AudioCullable::__cordl_internal_get_TargetComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetComponent;
}
constexpr void GlobalNamespace::AudioCullable::__cordl_internal_set_TargetComponent(::UnityW<::UnityEngine::Behaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetComponent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioCullable::__cordl_internal_get__cachedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioCullable::__cordl_internal_get__cachedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr void GlobalNamespace::AudioCullable::__cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTransform = value;
}
constexpr bool& GlobalNamespace::AudioCullable::__cordl_internal_get__Culled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Culled_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioCullable::__cordl_internal_get__Culled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Culled_k__BackingField;
}
constexpr void GlobalNamespace::AudioCullable::__cordl_internal_set__Culled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Culled_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::AudioCullable::__cordl_internal_get__LastUpdateFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdateFrame_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::AudioCullable::__cordl_internal_get__LastUpdateFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdateFrame_k__BackingField;
}
constexpr void GlobalNamespace::AudioCullable::__cordl_internal_set__LastUpdateFrame_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastUpdateFrame_k__BackingField = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioCullable::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioCullable::get_Culled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"get_Culled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCullable::set_Culled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"set_Culled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::AudioCullable::get_LastUpdateFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"get_LastUpdateFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCullable::set_LastUpdateFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"set_LastUpdateFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioCullable::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCullable::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCullable::OnCulled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"OnCulled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCullable::OnNotCulled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {"OnNotCulled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCullable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioCullable* GlobalNamespace::AudioCullable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioCullable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioCullable::AudioCullable()   {
}
