#pragma once
// IWYU pragma private; include "GlobalNamespace/PostProcessingQualityManger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PostProcessingQualityManger_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PostProcessingQualityManger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostProcessingQualityManger::*)()>(&::GlobalNamespace::PostProcessingQualityManger::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180428400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingQualityManger.ApplyQualityEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostProcessingQualityManger::*)(int32_t)>(&::GlobalNamespace::PostProcessingQualityManger::ApplyQualityEffects)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180428270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingQualityManger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostProcessingQualityManger::*)()>(&::GlobalNamespace::PostProcessingQualityManger::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180428550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingQualityManger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostProcessingQualityManger::*)()>(&::GlobalNamespace::PostProcessingQualityManger::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180428430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingQualityManger.SetToGoodbyeVoidMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PostProcessingQualityManger::SetToGoodbyeVoidMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180428670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"SetToGoodbyeVoidMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingQualityManger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostProcessingQualityManger::*)()>(&::GlobalNamespace::PostProcessingQualityManger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& GlobalNamespace::PostProcessingQualityManger::__cordl_internal_get_baseVolumeProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVolumeProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& GlobalNamespace::PostProcessingQualityManger::__cordl_internal_get_baseVolumeProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVolumeProfile;
}
constexpr void GlobalNamespace::PostProcessingQualityManger::__cordl_internal_set_baseVolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseVolumeProfile = value;
}
constexpr int32_t& GlobalNamespace::PostProcessingQualityManger::__cordl_internal_get__qualityLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityLevel;
}
constexpr int32_t const& GlobalNamespace::PostProcessingQualityManger::__cordl_internal_get__qualityLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityLevel;
}
constexpr void GlobalNamespace::PostProcessingQualityManger::__cordl_internal_set__qualityLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualityLevel = value;
}
inline void GlobalNamespace::PostProcessingQualityManger::setStaticF_Instance(::UnityW<::GlobalNamespace::PostProcessingQualityManger>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PostProcessingQualityManger>, "Instance", ::GlobalNamespace::PostProcessingQualityManger*>(std::forward<::UnityW<::GlobalNamespace::PostProcessingQualityManger>>(value));
}
inline ::UnityW<::GlobalNamespace::PostProcessingQualityManger> GlobalNamespace::PostProcessingQualityManger::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PostProcessingQualityManger>, "Instance", ::GlobalNamespace::PostProcessingQualityManger*>();
}
inline void GlobalNamespace::PostProcessingQualityManger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PostProcessingQualityManger::ApplyQualityEffects(int32_t  newQualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newQualityLevel);
}
inline void GlobalNamespace::PostProcessingQualityManger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PostProcessingQualityManger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PostProcessingQualityManger::SetToGoodbyeVoidMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {"SetToGoodbyeVoidMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PostProcessingQualityManger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingQualityManger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PostProcessingQualityManger* GlobalNamespace::PostProcessingQualityManger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PostProcessingQualityManger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PostProcessingQualityManger::PostProcessingQualityManger()   {
}
