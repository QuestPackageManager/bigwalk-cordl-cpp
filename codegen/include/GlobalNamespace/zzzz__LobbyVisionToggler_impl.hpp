#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyVisionToggler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyVisionToggler_def.hpp"
#include "GlobalNamespace/zzzz__LobbyVisionToggler_def.hpp"
#include "GlobalNamespace/zzzz__PegTileRenderer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType::LobbyVisionToggler_LobbyVisionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType::LobbyVisionToggler_LobbyVisionType()   {
}
constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType  GlobalNamespace::LobbyVisionToggler_LobbyVisionType::ShowWithLobbyVision{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType  GlobalNamespace::LobbyVisionToggler_LobbyVisionType::HideWithLobbyVision{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::LobbyVisionToggler.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyVisionToggler::*)(bool)>(&::GlobalNamespace::LobbyVisionToggler::OnChange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803ed1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"OnChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyVisionToggler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyVisionToggler::*)()>(&::GlobalNamespace::LobbyVisionToggler::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803ed390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyVisionToggler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyVisionToggler::*)()>(&::GlobalNamespace::LobbyVisionToggler::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803ed2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyVisionToggler.SetLobbyVisionActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::LobbyVisionToggler::SetLobbyVisionActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803ed480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"SetLobbyVisionActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyVisionToggler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyVisionToggler::*)()>(&::GlobalNamespace::LobbyVisionToggler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::LobbyVisionToggler::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType const& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::LobbyVisionToggler::__cordl_internal_set_type(::GlobalNamespace::LobbyVisionToggler_LobbyVisionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void GlobalNamespace::LobbyVisionToggler::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_normalMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_normalMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMesh;
}
constexpr void GlobalNamespace::LobbyVisionToggler::__cordl_internal_set_normalMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_lobbyVisionMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyVisionMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_lobbyVisionMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyVisionMesh;
}
constexpr void GlobalNamespace::LobbyVisionToggler::__cordl_internal_set_lobbyVisionMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyVisionMesh = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_pegTileRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileRenderer;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& GlobalNamespace::LobbyVisionToggler::__cordl_internal_get_pegTileRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileRenderer;
}
constexpr void GlobalNamespace::LobbyVisionToggler::__cordl_internal_set_pegTileRenderer(::UnityW<::GlobalNamespace::PegTileRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pegTileRenderer = value;
}
inline void GlobalNamespace::LobbyVisionToggler::setStaticF_onChange(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "onChange", ::GlobalNamespace::LobbyVisionToggler*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::LobbyVisionToggler::getStaticF_onChange()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "onChange", ::GlobalNamespace::LobbyVisionToggler*>();
}
inline void GlobalNamespace::LobbyVisionToggler::OnChange(bool  lobbyVisionActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"OnChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyVisionActive);
}
inline void GlobalNamespace::LobbyVisionToggler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyVisionToggler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyVisionToggler::SetLobbyVisionActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {"SetLobbyVisionActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::LobbyVisionToggler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyVisionToggler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyVisionToggler* GlobalNamespace::LobbyVisionToggler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyVisionToggler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyVisionToggler::LobbyVisionToggler()   {
}
