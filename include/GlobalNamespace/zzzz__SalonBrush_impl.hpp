#pragma once
// IWYU pragma private; include "GlobalNamespace/SalonBrush.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__SalonBrush_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180414570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.OnChangeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)(int32_t, int32_t)>(&::GlobalNamespace::SalonBrush::OnChangeColor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804147f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"OnChangeColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)(int32_t)>(&::GlobalNamespace::SalonBrush::SetColor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180414b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::ClearColor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804145c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"ClearColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.RpcRepeatPuff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::RpcRepeatPuff)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804149c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"RpcRepeatPuff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.SetWithColorPropGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)(bool)>(&::GlobalNamespace::SalonBrush::SetWithColorPropGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180414d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"SetWithColorPropGroup", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180414980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.get_NetworkcurrentColorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::get_NetworkcurrentColorId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"get_NetworkcurrentColorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.set_NetworkcurrentColorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::SalonBrush::set_NetworkcurrentColorId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180414ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"set_NetworkcurrentColorId", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.UserCode_RpcRepeatPuff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)()>(&::GlobalNamespace::SalonBrush::UserCode_RpcRepeatPuff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180414e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"UserCode_RpcRepeatPuff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.InvokeUserCode_RpcRepeatPuff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::SalonBrush::InvokeUserCode_RpcRepeatPuff)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180414740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"InvokeUserCode_RpcRepeatPuff", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::SalonBrush::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180414ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                    {::i2c::class_of<::GlobalNamespace::SalonBrush*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonBrush.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonBrush::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::SalonBrush::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180414670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                    {::i2c::class_of<::GlobalNamespace::SalonBrush*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SalonBrush::__cordl_internal_get_currentColorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColorId;
}
constexpr int32_t const& GlobalNamespace::SalonBrush::__cordl_internal_get_currentColorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColorId;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set_currentColorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentColorId = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& GlobalNamespace::SalonBrush::__cordl_internal_get_lookSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& GlobalNamespace::SalonBrush::__cordl_internal_get_lookSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookSet = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SalonBrush::__cordl_internal_get_emptyColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SalonBrush::__cordl_internal_get_emptyColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyColor;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set_emptyColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyColor = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SalonBrush::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SalonBrush::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::SalonBrush::__cordl_internal_get_prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::SalonBrush::__cordl_internal_get_prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prop = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SalonBrush::__cordl_internal_get_onChangeParticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangeParticle;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SalonBrush::__cordl_internal_get_onChangeParticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangeParticle;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set_onChangeParticle(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChangeParticle = value;
}
constexpr bool& GlobalNamespace::SalonBrush::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::SalonBrush::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SalonBrush::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SalonBrush::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void GlobalNamespace::SalonBrush::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
inline void GlobalNamespace::SalonBrush::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonBrush::OnChangeColor(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"OnChangeColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::SalonBrush::SetColor(int32_t  colorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorId);
}
inline void GlobalNamespace::SalonBrush::ClearColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"ClearColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonBrush::RpcRepeatPuff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"RpcRepeatPuff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonBrush::SetWithColorPropGroup(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"SetWithColorPropGroup", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::SalonBrush::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonBrush::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonBrush::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SalonBrush::get_NetworkcurrentColorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"get_NetworkcurrentColorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SalonBrush::set_NetworkcurrentColorId(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"set_NetworkcurrentColorId", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SalonBrush::UserCode_RpcRepeatPuff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"UserCode_RpcRepeatPuff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonBrush::InvokeUserCode_RpcRepeatPuff(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonBrush*>(),
                        {"InvokeUserCode_RpcRepeatPuff", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::SalonBrush::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SalonBrush*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::SalonBrush::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SalonBrush*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::SalonBrush* GlobalNamespace::SalonBrush::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SalonBrush*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SalonBrush::SalonBrush()   {
}
