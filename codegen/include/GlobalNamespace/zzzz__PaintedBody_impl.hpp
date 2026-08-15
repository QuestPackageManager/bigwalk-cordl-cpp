#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintedBody.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "GlobalNamespace/zzzz__PaintedBody_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeSet_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)()>(&::GlobalNamespace::PaintedBody::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180405870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)()>(&::GlobalNamespace::PaintedBody::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180405410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.OnSetHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(int32_t, int32_t)>(&::GlobalNamespace::PaintedBody::OnSetHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804058d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"OnSetHead", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.OnSetTorso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(int32_t, int32_t)>(&::GlobalNamespace::PaintedBody::OnSetTorso)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804058f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"OnSetTorso", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.OnSetLegs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(int32_t, int32_t)>(&::GlobalNamespace::PaintedBody::OnSetLegs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804058e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"OnSetLegs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.SetLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(::ArrayW<::UnityEngine::MeshRenderer*>, int32_t)>(&::GlobalNamespace::PaintedBody::SetLook)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180405a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"SetLook", {}, {::i2c::type_of<::ArrayW<::UnityEngine::MeshRenderer*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.ServerSetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::PaintedBody::ServerSetColors)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180405900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"ServerSetColors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)()>(&::GlobalNamespace::PaintedBody::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180405b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)()>(&::GlobalNamespace::PaintedBody::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.get_NetworkheadColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PaintedBody::*)()>(&::GlobalNamespace::PaintedBody::get_NetworkheadColorIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"get_NetworkheadColorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.set_NetworkheadColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PaintedBody::set_NetworkheadColorIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180405b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"set_NetworkheadColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.get_NetworktorsoColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PaintedBody::*)()>(&::GlobalNamespace::PaintedBody::get_NetworktorsoColorIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"get_NetworktorsoColorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.set_NetworktorsoColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PaintedBody::set_NetworktorsoColorIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180405c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"set_NetworktorsoColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.get_NetworklegsColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PaintedBody::*)()>(&::GlobalNamespace::PaintedBody::get_NetworklegsColorIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"get_NetworklegsColorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.set_NetworklegsColorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PaintedBody::set_NetworklegsColorIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180405bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"set_NetworklegsColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::PaintedBody::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803fa440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                    {::i2c::class_of<::GlobalNamespace::PaintedBody*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintedBody.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintedBody::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::PaintedBody::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180405590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                    {::i2c::class_of<::GlobalNamespace::PaintedBody*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PaintedBody::__cordl_internal_get_headColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headColorIndex;
}
constexpr int32_t const& GlobalNamespace::PaintedBody::__cordl_internal_get_headColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headColorIndex;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_headColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headColorIndex = value;
}
constexpr int32_t& GlobalNamespace::PaintedBody::__cordl_internal_get_torsoColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoColorIndex;
}
constexpr int32_t const& GlobalNamespace::PaintedBody::__cordl_internal_get_torsoColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoColorIndex;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_torsoColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torsoColorIndex = value;
}
constexpr int32_t& GlobalNamespace::PaintedBody::__cordl_internal_get_legsColorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsColorIndex;
}
constexpr int32_t const& GlobalNamespace::PaintedBody::__cordl_internal_get_legsColorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsColorIndex;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_legsColorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legsColorIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::PaintedBody::__cordl_internal_get_headParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::PaintedBody::__cordl_internal_get_headParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headParts;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_headParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headParts = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::PaintedBody::__cordl_internal_get_headItself()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headItself;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::PaintedBody::__cordl_internal_get_headItself() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headItself;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_headItself(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headItself = value;
}
constexpr int32_t& GlobalNamespace::PaintedBody::__cordl_internal_get_eyeSubmeshIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSubmeshIndex;
}
constexpr int32_t const& GlobalNamespace::PaintedBody::__cordl_internal_get_eyeSubmeshIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSubmeshIndex;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_eyeSubmeshIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeSubmeshIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::PaintedBody::__cordl_internal_get_torsoParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::PaintedBody::__cordl_internal_get_torsoParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torsoParts;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_torsoParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torsoParts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::PaintedBody::__cordl_internal_get_legsParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::PaintedBody::__cordl_internal_get_legsParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legsParts;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_legsParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legsParts = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& GlobalNamespace::PaintedBody::__cordl_internal_get_lookSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& GlobalNamespace::PaintedBody::__cordl_internal_get_lookSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookSet = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet>& GlobalNamespace::PaintedBody::__cordl_internal_get_eyeSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet> const& GlobalNamespace::PaintedBody::__cordl_internal_get_eyeSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSet;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_eyeSet(::UnityW<::GlobalNamespace::PlayerEyeSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeSet = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::PaintedBody::__cordl_internal_get_materialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::PaintedBody::__cordl_internal_get_materialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr void GlobalNamespace::PaintedBody::__cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialPropertyBlock = value;
}
inline void GlobalNamespace::PaintedBody::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaintedBody::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaintedBody::OnSetHead(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"OnSetHead", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PaintedBody::OnSetTorso(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"OnSetTorso", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PaintedBody::OnSetLegs(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"OnSetLegs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PaintedBody::SetLook(::ArrayW<::UnityEngine::MeshRenderer*>  renderers, int32_t  colorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"SetLook", {}, {::i2c::type_of<::ArrayW<::UnityEngine::MeshRenderer*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderers, colorIndex);
}
inline void GlobalNamespace::PaintedBody::ServerSetColors(int32_t  headId, int32_t  torsoId, int32_t  legsId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"ServerSetColors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headId, torsoId, legsId);
}
inline void GlobalNamespace::PaintedBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaintedBody::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PaintedBody::get_NetworkheadColorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"get_NetworkheadColorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PaintedBody::set_NetworkheadColorIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"set_NetworkheadColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PaintedBody::get_NetworktorsoColorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"get_NetworktorsoColorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PaintedBody::set_NetworktorsoColorIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"set_NetworktorsoColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PaintedBody::get_NetworklegsColorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"get_NetworklegsColorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PaintedBody::set_NetworklegsColorIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintedBody*>(),
                        {"set_NetworklegsColorIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PaintedBody::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaintedBody*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::PaintedBody::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaintedBody*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::PaintedBody* GlobalNamespace::PaintedBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PaintedBody*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaintedBody::PaintedBody()   {
}
