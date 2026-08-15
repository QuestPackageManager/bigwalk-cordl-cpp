#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/StreamEmitter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroSplat/zzzz__StreamEmitter_def.hpp"
#include "JBooth/MicroSplat/zzzz__StreamEmitter_def.hpp"
#include "JBooth/MicroSplat/zzzz__StreamManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType::StreamEmitter_EmitterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType::StreamEmitter_EmitterType()   {
}
constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType  JBooth::MicroSplat::StreamEmitter_EmitterType::Water{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType  JBooth::MicroSplat::StreamEmitter_EmitterType::Lava{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamEmitter.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamEmitter::*)()>(&::JBooth::MicroSplat::StreamEmitter::OnDrawGizmos)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181403300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamEmitter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamEmitter::*)()>(&::JBooth::MicroSplat::StreamEmitter::OnEnable)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814033c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamEmitter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamEmitter::*)()>(&::JBooth::MicroSplat::StreamEmitter::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814032a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::StreamEmitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::StreamEmitter::*)()>(&::JBooth::MicroSplat::StreamEmitter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fd040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType& JBooth::MicroSplat::StreamEmitter::__cordl_internal_get_emitterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitterType;
}
constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType const& JBooth::MicroSplat::StreamEmitter::__cordl_internal_get_emitterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitterType;
}
constexpr void JBooth::MicroSplat::StreamEmitter::__cordl_internal_set_emitterType(::JBooth::MicroSplat::StreamEmitter_EmitterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitterType = value;
}
constexpr float_t& JBooth::MicroSplat::StreamEmitter::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& JBooth::MicroSplat::StreamEmitter::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void JBooth::MicroSplat::StreamEmitter::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr ::UnityW<::JBooth::MicroSplat::StreamManager>& JBooth::MicroSplat::StreamEmitter::__cordl_internal_get_streamMgr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamMgr;
}
constexpr ::UnityW<::JBooth::MicroSplat::StreamManager> const& JBooth::MicroSplat::StreamEmitter::__cordl_internal_get_streamMgr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamMgr;
}
constexpr void JBooth::MicroSplat::StreamEmitter::__cordl_internal_set_streamMgr(::UnityW<::JBooth::MicroSplat::StreamManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___streamMgr = value;
}
inline void JBooth::MicroSplat::StreamEmitter::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::StreamEmitter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::StreamEmitter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::StreamEmitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::StreamEmitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::StreamEmitter* JBooth::MicroSplat::StreamEmitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::StreamEmitter*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::StreamEmitter::StreamEmitter()   {
}
