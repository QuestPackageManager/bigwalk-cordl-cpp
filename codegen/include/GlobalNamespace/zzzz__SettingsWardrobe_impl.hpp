#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsWardrobe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsWardrobe_def.hpp"
#include "GlobalNamespace/zzzz__DeviceHanger_def.hpp"
#include "GlobalNamespace/zzzz__ISettingsHanger_def.hpp"
#include "GlobalNamespace/zzzz__ResolutionHanger_def.hpp"
#include "GlobalNamespace/zzzz__SettingsHanger_def.hpp"
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "GlobalNamespace/zzzz__SettingsWardrobe_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::*)()>(&::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0._ApplyVolume_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::*)()>(&::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::_ApplyVolume_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18039f800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0*>(),
                        {"<ApplyVolume>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::__cordl_internal_get_normalizedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizedVolume;
}
constexpr float_t const& GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::__cordl_internal_get_normalizedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizedVolume;
}
constexpr void GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::__cordl_internal_set_normalizedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalizedVolume = value;
}
inline void GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::_ApplyVolume_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0*>(),
                        {"<ApplyVolume>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0* GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0::SettingsWardrobe___c__DisplayClass26_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)()>(&::GlobalNamespace::SettingsWardrobe::Initialize)> {
  constexpr static std::size_t size = 0x29f0;
  constexpr static std::size_t addrs = 0x18039a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyLanguage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180399bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyLanguage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyFullscreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyFullscreen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180399b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyFullscreen", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyQuality)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180399ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyVolume)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180399f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyVolume", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyPushToTalk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyPushToTalk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180399c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyPushToTalk", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyNoiseSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyNoiseSuppression)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180399c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyNoiseSuppression", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyMicSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyMicSensitivity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180399c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyMicSensitivity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyFov)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180399b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyHud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyHud)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180399ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyHud", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyCrosshair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyCrosshair)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180399a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyCrosshair", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyCrossPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyCrossPlay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803999d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyCrossPlay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyDummyPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyDummyPlayerCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180399a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyDummyPlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyDummySkipAid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyDummySkipAid)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180399ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyDummySkipAid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyMotionOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyMotionOverlay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180399c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyMotionOverlay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyVSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyVSync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180399f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyVSync", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.ApplyRenderScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)(int32_t)>(&::GlobalNamespace::SettingsWardrobe::ApplyRenderScale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180399e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyRenderScale", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.SetRenderScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::SettingsWardrobe::SetRenderScale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18039cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"SetRenderScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.SaveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SettingsWardrobe::SaveAll)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18039cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"SaveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe.GetHangerBySettingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ISettingsHanger* (*)(::GlobalNamespace::SettingsType)>(&::GlobalNamespace::SettingsWardrobe::GetHangerBySettingsType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18039a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"GetHangerBySettingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsWardrobe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsWardrobe::*)()>(&::GlobalNamespace::SettingsWardrobe::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>*& GlobalNamespace::SettingsWardrobe::__cordl_internal_get_hangers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hangers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>* const& GlobalNamespace::SettingsWardrobe::__cordl_internal_get_hangers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hangers;
}
constexpr void GlobalNamespace::SettingsWardrobe::__cordl_internal_set_hangers(::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hangers = value;
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_instance(::GlobalNamespace::SettingsWardrobe*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsWardrobe*, "instance", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsWardrobe*>(value));
}
inline ::GlobalNamespace::SettingsWardrobe* GlobalNamespace::SettingsWardrobe::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsWardrobe*, "instance", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_languageHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "languageHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_languageHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "languageHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_toggleCrouchHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "toggleCrouchHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_toggleCrouchHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "toggleCrouchHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_toggleArmsHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "toggleArmsHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_toggleArmsHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "toggleArmsHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_invertLookHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "invertLookHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_invertLookHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "invertLookHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_lookSpeedHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "lookSpeedHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_lookSpeedHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "lookSpeedHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_resolutionHanger(::GlobalNamespace::ResolutionHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ResolutionHanger*, "resolutionHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::ResolutionHanger*>(value));
}
inline ::GlobalNamespace::ResolutionHanger* GlobalNamespace::SettingsWardrobe::getStaticF_resolutionHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ResolutionHanger*, "resolutionHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_microphoneDeviceHanger(::GlobalNamespace::DeviceHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::DeviceHanger*, "microphoneDeviceHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::DeviceHanger*>(value));
}
inline ::GlobalNamespace::DeviceHanger* GlobalNamespace::SettingsWardrobe::getStaticF_microphoneDeviceHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::DeviceHanger*, "microphoneDeviceHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_pushToTalkHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "pushToTalkHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_pushToTalkHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "pushToTalkHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_noiseSuppressionHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "noiseSuppressionHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_noiseSuppressionHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "noiseSuppressionHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_micSensitivityHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "micSensitivityHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_micSensitivityHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "micSensitivityHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_dummyPlayerCountHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "dummyPlayerCountHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_dummyPlayerCountHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "dummyPlayerCountHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_dummySkipAidHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "dummySkipAidHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_dummySkipAidHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "dummySkipAidHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_fovHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "fovHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_fovHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "fovHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_crosshairHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "crosshairHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_crosshairHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "crosshairHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_hudHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "hudHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_hudHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "hudHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_vsyncHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "vsyncHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_vsyncHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "vsyncHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_renderScaleHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "renderScaleHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_renderScaleHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "renderScaleHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_crossplayHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "crossplayHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_crossplayHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "crossplayHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::setStaticF_motionOverlayHanger(::GlobalNamespace::SettingsHanger*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SettingsHanger*, "motionOverlayHanger", ::GlobalNamespace::SettingsWardrobe*>(std::forward<::GlobalNamespace::SettingsHanger*>(value));
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsWardrobe::getStaticF_motionOverlayHanger()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SettingsHanger*, "motionOverlayHanger", ::GlobalNamespace::SettingsWardrobe*>();
}
inline void GlobalNamespace::SettingsWardrobe::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyLanguage(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyLanguage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyFullscreen(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyFullscreen", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyQuality(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyVolume(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyVolume", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyPushToTalk(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyPushToTalk", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyNoiseSuppression(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyNoiseSuppression", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyMicSensitivity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyMicSensitivity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyFov(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyHud(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyHud", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyCrosshair(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyCrosshair", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyCrossPlay(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyCrossPlay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyDummyPlayerCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyDummyPlayerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyDummySkipAid(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyDummySkipAid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyMotionOverlay(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyMotionOverlay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyVSync(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyVSync", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::ApplyRenderScale(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"ApplyRenderScale", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::SetRenderScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"SetRenderScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SettingsWardrobe::SaveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"SaveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ISettingsHanger* GlobalNamespace::SettingsWardrobe::GetHangerBySettingsType(::GlobalNamespace::SettingsType  settingsType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {"GetHangerBySettingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ISettingsHanger*>(nullptr, ___internal_method, settingsType);
}
inline void GlobalNamespace::SettingsWardrobe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsWardrobe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsWardrobe* GlobalNamespace::SettingsWardrobe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsWardrobe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsWardrobe::SettingsWardrobe()   {
}
