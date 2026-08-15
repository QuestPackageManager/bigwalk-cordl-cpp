#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLooks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerLooks_def.hpp"
#include "GlobalNamespace/zzzz__LimbSpline_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLooks_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerLooks_LookType::PlayerLooks_LookType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLooks_LookType::PlayerLooks_LookType()   {
}
constexpr ::GlobalNamespace::PlayerLooks_LookType  GlobalNamespace::PlayerLooks_LookType::Local{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerLooks_LookType  GlobalNamespace::PlayerLooks_LookType::Remote{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerLooks_LookPart::PlayerLooks_LookPart(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLooks_LookPart::PlayerLooks_LookPart()   {
}
constexpr ::GlobalNamespace::PlayerLooks_LookPart  GlobalNamespace::PlayerLooks_LookPart::Head{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerLooks_LookPart  GlobalNamespace::PlayerLooks_LookPart::Torso{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayerLooks_LookPart  GlobalNamespace::PlayerLooks_LookPart::Legs{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks_LooksRenderer.GetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::PlayerLooks_LooksRenderer::*)()>(&::GlobalNamespace::PlayerLooks_LooksRenderer::GetMaterial)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180347b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"GetMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks_LooksRenderer.SetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks_LooksRenderer::*)(bool)>(&::GlobalNamespace::PlayerLooks_LooksRenderer::SetLocal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180347c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"SetLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks_LooksRenderer.SetRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks_LooksRenderer::*)()>(&::GlobalNamespace::PlayerLooks_LooksRenderer::SetRemote)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180347ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"SetRemote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks_LooksRenderer.Clean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks_LooksRenderer::*)()>(&::GlobalNamespace::PlayerLooks_LooksRenderer::Clean)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180347b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"Clean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks_LooksRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks_LooksRenderer::*)()>(&::GlobalNamespace::PlayerLooks_LooksRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_limbSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limbSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_limbSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limbSpline;
}
constexpr void GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_set_limbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limbSpline = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get__fallbackPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get__fallbackPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackPropertyBlock;
}
constexpr void GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_set__fallbackPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallbackPropertyBlock = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get__materialInstanceForSimpleRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstanceForSimpleRenderer;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get__materialInstanceForSimpleRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstanceForSimpleRenderer;
}
constexpr void GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_set__materialInstanceForSimpleRenderer(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstanceForSimpleRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_propertyBlockHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_propertyBlockHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr void GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelper = value;
}
constexpr bool& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_local()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___local;
}
constexpr bool const& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_local() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___local;
}
constexpr void GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_set_local(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___local = value;
}
constexpr bool& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_remote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remote;
}
constexpr bool const& GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_get_remote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remote;
}
constexpr void GlobalNamespace::PlayerLooks_LooksRenderer::__cordl_internal_set_remote(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remote = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::PlayerLooks_LooksRenderer::GetMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"GetMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks_LooksRenderer::SetLocal(bool  localRendererIsHidden)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"SetLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localRendererIsHidden);
}
inline void GlobalNamespace::PlayerLooks_LooksRenderer::SetRemote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"SetRemote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks_LooksRenderer::Clean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {"Clean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks_LooksRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks_LooksRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLooks_LooksRenderer* GlobalNamespace::PlayerLooks_LooksRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLooks_LooksRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLooks_LooksRenderer::PlayerLooks_LooksRenderer()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.get_headColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookSet_LookColor (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::get_headColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803542c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"get_headColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.get_torsoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookSet_LookColor (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::get_torsoColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180354380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"get_torsoColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.get_legsColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookSet_LookColor (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::get_legsColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180354320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"get_legsColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerLooks::Initialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180353010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.GetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookSet_LookColor (::GlobalNamespace::PlayerLooks::*)(int32_t)>(&::GlobalNamespace::PlayerLooks::GetColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180352ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetBodyToLocalModeInitial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::SetBodyToLocalModeInitial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180353a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetBodyToLocalModeInitial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetBodyToRemoteMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::SetBodyToRemoteMode)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180353ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetBodyToRemoteMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetBodyToLocalMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::SetBodyToLocalMode)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180353aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetBodyToLocalMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetHideLocalTorso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(bool)>(&::GlobalNamespace::PlayerLooks::SetHideLocalTorso)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180354090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetHideLocalTorso", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>, ::GlobalNamespace::PlayerLookSet_LookColor)>(&::GlobalNamespace::PlayerLooks::SetColor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180353ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetColor", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>>(), ::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetSpeechlessness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(float_t)>(&::GlobalNamespace::PlayerLooks::SetSpeechlessness)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803541c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetSpeechlessness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetSpeechlessnessForPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>, float_t)>(&::GlobalNamespace::PlayerLooks::SetSpeechlessnessForPart)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803540b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetSpeechlessnessForPart", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.ServerSaveLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::PlayerLooks_LookPart, int32_t)>(&::GlobalNamespace::PlayerLooks::ServerSaveLook)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180353900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"ServerSaveLook", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.GetLookId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerLooks::GetLookId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180352ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetLookId", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.RefreshLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::RefreshLook)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1803534e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RefreshLook", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.ServerLoadLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(bool)>(&::GlobalNamespace::PlayerLooks::ServerLoadLook)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803538b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"ServerLoadLook", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.GetSaveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerLooks::GetSaveKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180352fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetSaveKey", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.LoadOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerLooks::LoadOne)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180353080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"LoadOne", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.GetRandomLookId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::GetRandomLookId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180352f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetRandomLookId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.SetAllLooks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::PlayerLooks::SetAllLooks)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803539f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetAllLooks", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.AddRelevantProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerLooks::AddRelevantProp)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180352c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"AddRelevantProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.RemoveRelevantProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerLooks::RemoveRelevantProp)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803537a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RemoveRelevantProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.RefreshRelevantProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerLooks::RefreshRelevantProp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180353770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RefreshRelevantProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.RefreshAllRelevantProps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::RefreshAllRelevantProps)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180353430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RefreshAllRelevantProps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.Puff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)(int32_t, ::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerLooks::Puff)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803532d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"Puff", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803531c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLooks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLooks::*)()>(&::GlobalNamespace::PlayerLooks::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>& GlobalNamespace::PlayerLooks::__cordl_internal_get_headRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRenderers;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_headRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRenderers;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_headRenderers(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headRenderers = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>& GlobalNamespace::PlayerLooks::__cordl_internal_get_torsoRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoRenderers;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_torsoRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoRenderers;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_torsoRenderers(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torsoRenderers = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>& GlobalNamespace::PlayerLooks::__cordl_internal_get_legsRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsRenderers;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_legsRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsRenderers;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_legsRenderers(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legsRenderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& GlobalNamespace::PlayerLooks::__cordl_internal_get_relevantProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relevantProps;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& GlobalNamespace::PlayerLooks::__cordl_internal_get_relevantProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relevantProps;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_relevantProps(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relevantProps = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& GlobalNamespace::PlayerLooks::__cordl_internal_get_lookSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_lookSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookSet = value;
}
constexpr ::GlobalNamespace::PlayerLooks_LookType& GlobalNamespace::PlayerLooks::__cordl_internal_get_currentLookType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLookType;
}
constexpr ::GlobalNamespace::PlayerLooks_LookType const& GlobalNamespace::PlayerLooks::__cordl_internal_get_currentLookType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLookType;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_currentLookType(::GlobalNamespace::PlayerLooks_LookType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLookType = value;
}
constexpr bool& GlobalNamespace::PlayerLooks::__cordl_internal_get_hideLocalTorso()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideLocalTorso;
}
constexpr bool const& GlobalNamespace::PlayerLooks::__cordl_internal_get_hideLocalTorso() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideLocalTorso;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_hideLocalTorso(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideLocalTorso = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::PlayerLooks::__cordl_internal_get_puffHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puffHead;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_puffHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puffHead;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_puffHead(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___puffHead = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::PlayerLooks::__cordl_internal_get_puffTorso()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puffTorso;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_puffTorso() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puffTorso;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_puffTorso(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___puffTorso = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::PlayerLooks::__cordl_internal_get_puffLegs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puffLegs;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_puffLegs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puffLegs;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_puffLegs(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___puffLegs = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::PlayerLooks::__cordl_internal_get_materialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::PlayerLooks::__cordl_internal_get_materialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialPropertyBlock = value;
}
constexpr bool& GlobalNamespace::PlayerLooks::__cordl_internal_get_alwaysStartWithRemoteBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysStartWithRemoteBody;
}
constexpr bool const& GlobalNamespace::PlayerLooks::__cordl_internal_get_alwaysStartWithRemoteBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysStartWithRemoteBody;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_alwaysStartWithRemoteBody(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysStartWithRemoteBody = value;
}
constexpr bool& GlobalNamespace::PlayerLooks::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerLooks::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerLooks::__cordl_internal_get_logLocalRemoteChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLocalRemoteChanges;
}
constexpr bool const& GlobalNamespace::PlayerLooks::__cordl_internal_get_logLocalRemoteChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLocalRemoteChanges;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_logLocalRemoteChanges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLocalRemoteChanges = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerLooks::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerLooks::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerLooks::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
inline void GlobalNamespace::PlayerLooks::setStaticF_lookColorPropertyName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "lookColorPropertyName", ::GlobalNamespace::PlayerLooks*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayerLooks::getStaticF_lookColorPropertyName()  {
return ::cordl_internals::getStaticField<::StringW, "lookColorPropertyName", ::GlobalNamespace::PlayerLooks*>();
}
inline void GlobalNamespace::PlayerLooks::setStaticF_speechlessnessPropertyName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "speechlessnessPropertyName", ::GlobalNamespace::PlayerLooks*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayerLooks::getStaticF_speechlessnessPropertyName()  {
return ::cordl_internals::getStaticField<::StringW, "speechlessnessPropertyName", ::GlobalNamespace::PlayerLooks*>();
}
inline void GlobalNamespace::PlayerLooks::setStaticF_rewardnessPropertyName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "rewardnessPropertyName", ::GlobalNamespace::PlayerLooks*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayerLooks::getStaticF_rewardnessPropertyName()  {
return ::cordl_internals::getStaticField<::StringW, "rewardnessPropertyName", ::GlobalNamespace::PlayerLooks*>();
}
inline ::GlobalNamespace::PlayerLookSet_LookColor GlobalNamespace::PlayerLooks::get_headColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"get_headColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookSet_LookColor>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLookSet_LookColor GlobalNamespace::PlayerLooks::get_torsoColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"get_torsoColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookSet_LookColor>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLookSet_LookColor GlobalNamespace::PlayerLooks::get_legsColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"get_legsColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookSet_LookColor>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline ::GlobalNamespace::PlayerLookSet_LookColor GlobalNamespace::PlayerLooks::GetColor(int32_t  lookId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookSet_LookColor>(this, ___internal_method, lookId);
}
inline void GlobalNamespace::PlayerLooks::SetBodyToLocalModeInitial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetBodyToLocalModeInitial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::SetBodyToRemoteMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetBodyToRemoteMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::SetBodyToLocalMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetBodyToLocalMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::SetHideLocalTorso(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetHideLocalTorso", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::PlayerLooks::SetColor(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  looksRenderers, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetColor", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>>(), ::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, looksRenderers, lookColor);
}
inline void GlobalNamespace::PlayerLooks::SetSpeechlessness(float_t  speechlessness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetSpeechlessness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speechlessness);
}
inline void GlobalNamespace::PlayerLooks::SetSpeechlessnessForPart(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  looksRenderers, float_t  speechlessness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetSpeechlessnessForPart", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, looksRenderers, speechlessness);
}
inline void GlobalNamespace::PlayerLooks::ServerSaveLook(::GlobalNamespace::PlayerLooks_LookPart  lookPart, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"ServerSaveLook", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookPart, id);
}
inline int32_t GlobalNamespace::PlayerLooks::GetLookId(::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetLookId", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lookPart);
}
inline void GlobalNamespace::PlayerLooks::RefreshLook()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RefreshLook", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::ServerLoadLook(bool  forceNew)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"ServerLoadLook", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceNew);
}
inline ::StringW GlobalNamespace::PlayerLooks::GetSaveKey(::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetSaveKey", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, lookPart);
}
inline void GlobalNamespace::PlayerLooks::LoadOne(::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"LoadOne", {}, {::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookPart);
}
inline int32_t GlobalNamespace::PlayerLooks::GetRandomLookId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"GetRandomLookId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::SetAllLooks(int32_t  head, int32_t  torso, int32_t  legs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"SetAllLooks", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, head, torso, legs);
}
inline void GlobalNamespace::PlayerLooks::AddRelevantProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"AddRelevantProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerLooks::RemoveRelevantProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RemoveRelevantProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerLooks::RefreshRelevantProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RefreshRelevantProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerLooks::RefreshAllRelevantProps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"RefreshAllRelevantProps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::Puff(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"Puff", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookId, lookPart);
}
inline void GlobalNamespace::PlayerLooks::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLooks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLooks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLooks* GlobalNamespace::PlayerLooks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLooks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLooks::PlayerLooks()   {
}
