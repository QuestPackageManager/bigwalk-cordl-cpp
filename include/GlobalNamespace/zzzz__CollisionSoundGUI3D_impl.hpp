#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionSoundGUI3D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CollisionSoundGUI3D_def.hpp"
#include "GlobalNamespace/zzzz__CollisionSoundGUI3D_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "Log", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "WorldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CollisionSoundGUI3D_LOG3D::CollisionSoundGUI3D_LOG3D(::StringW  Log, ::UnityEngine::Vector3  WorldPos, float_t  Distance, ::UnityEngine::Color  Color) noexcept  {
this->Log = Log;
this->WorldPos = WorldPos;
this->Distance = Distance;
this->Color = Color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollisionSoundGUI3D_LOG3D::CollisionSoundGUI3D_LOG3D()   {
}
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundGUI3D.get_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CollisionSoundGUI3D::*)()>(&::GlobalNamespace::CollisionSoundGUI3D::get_GUIDebugMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18032d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundGUI3D.set_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundGUI3D::*)(bool)>(&::GlobalNamespace::CollisionSoundGUI3D::set_GUIDebugMode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18032d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundGUI3D.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CollisionSoundGUI3D::*)()>(&::GlobalNamespace::CollisionSoundGUI3D::get_Identifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundGUI3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundGUI3D::*)()>(&::GlobalNamespace::CollisionSoundGUI3D::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18032d370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundGUI3D.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundGUI3D::*)()>(&::GlobalNamespace::CollisionSoundGUI3D::DrawGUI)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x18032cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundGUI3D.AddGUILog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundGUI3D::*)(::StringW, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::CollisionSoundGUI3D::AddGUILog)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18032cd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"AddGUILog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundGUI3D._AddGUILog_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundGUI3D::*)(double_t)>(&::GlobalNamespace::CollisionSoundGUI3D::_AddGUILog_b__10_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18032d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"<AddGUILog>b__10_0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>*& GlobalNamespace::CollisionSoundGUI3D::__cordl_internal_get__guiDebugLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>* const& GlobalNamespace::CollisionSoundGUI3D::__cordl_internal_get__guiDebugLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr void GlobalNamespace::CollisionSoundGUI3D::__cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::GlobalNamespace::CollisionSoundGUI3D_LOG3D>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugLog = value;
}
constexpr ::UnityEngine::GUIStyle*& GlobalNamespace::CollisionSoundGUI3D::__cordl_internal_get__guiDebugTextStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr ::UnityEngine::GUIStyle* const& GlobalNamespace::CollisionSoundGUI3D::__cordl_internal_get__guiDebugTextStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr void GlobalNamespace::CollisionSoundGUI3D::__cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugTextStyle = value;
}
inline bool GlobalNamespace::CollisionSoundGUI3D::get_GUIDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundGUI3D::set_GUIDebugMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CollisionSoundGUI3D::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundGUI3D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundGUI3D::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundGUI3D::AddGUILog(::StringW  content, ::UnityEngine::Vector3  worldPos, float_t  dist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"AddGUILog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, worldPos, dist);
}
inline void GlobalNamespace::CollisionSoundGUI3D::_AddGUILog_b__10_0(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundGUI3D*>(),
                        {"<AddGUILog>b__10_0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::CollisionSoundGUI3D* GlobalNamespace::CollisionSoundGUI3D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CollisionSoundGUI3D*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr  GlobalNamespace::CollisionSoundGUI3D::operator ::GlobalNamespace::IAudioGUI*() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* GlobalNamespace::CollisionSoundGUI3D::i___GlobalNamespace__IAudioGUI() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollisionSoundGUI3D::CollisionSoundGUI3D()   {
}
